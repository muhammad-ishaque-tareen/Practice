#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    int fd1[2],  fd2[2];
    int pid=fork();
    char ParentMessage[]="Hello Child";
    char ChildMessage[]="Hello Parent";
    char buffer[50];
    int rp1=pipe(fd1); int rp2=pipe(fd2);
    // if ((rp1==-1)|| (rp2==-1))
    // {
    //     printf("Pipe is Failed\n");
    //     return 1;
    // }
    // if (pid<0)
    // {
    //     printf("fork is failed\n");
    //     return 1;
    // }
    if(pid==0)
    {
        char ReadMsg[50];
         char ChildMessage[]="Hello Parent, How are You?";
        close(fd1[1]);
        read(fd1[0], ReadMsg, sizeof(ReadMsg));
        close(fd1[0]);
        printf(" child read : s\n", ReadMsg);
        close(fd2[0]);
        write(fd2[1], ChildMessage, strlen(ChildMessage));
        close(fd2[1]);
        
    }
    else 
    {
        char ParentRead[70];
        char ParentMessage[]="Hello Child, How are You?";
        close(fd1[0]);
        write(fd1[1], ParentMessage, strlen(ParentMessage));
        close(fd1[1]);
        close(fd2[1]);
        read(fd2[0], ParentRead, 70);
        close(fd2[1]);
        printf("Parent Received: %s \n", ParentRead);


}