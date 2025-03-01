#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    int fd[2];
    int rp=pipe(fd);
    int rv=fork();
    // if (rp==-1)
    // {
    //     printf("pipe is failed \n");
    //     return 1;
    // }
    // if (rv<0)
    // {
    //     printf("fork fail");
    // }
    if (rv==0)
    {
        char ReadMsg[50];
        close(fd[1]);
        read(fd[0], ReadMsg, sizeof(ReadMsg));
        close(fd[0]);
        printf(" child read : %.11s\n", ReadMsg);
    }
    else
    {
         char writeMessage[]="Hello Child, How are You?";
        close(fd[0]);
        write(fd[1], writeMessage, strlen(writeMessage));
        close(fd[1]);
        if (writeMessage[i]==' ')
    

    }
 
}