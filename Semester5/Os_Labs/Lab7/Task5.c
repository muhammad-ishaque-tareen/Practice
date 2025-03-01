#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
 {
   
     int fd1[2];
     int rp1=pipe(fd1);
     int rv1=fork();
     if((rv1!=0)&&(rp1!=-1))
     {
         int buffer1[20];
         int cw1=read("file.txt",buffer1,20);
         write(fd1[1],buffer1,sizeof(file.txt));
         close(fd1[0]);
         exit(0);
         int rv2=fork();
         int fd2[2];
         int rp2=pipe(fd2);
         
         if((rv2!=0)&&(rp2!=-1))
         {
             int  buffer2[20];
             int cw2=read(fd1[0],buffer2,20);
             for(int i=0;i<cw2;i++)
             {
                 printf("%d",buffer2[i]);
             }
             printf("\n");
             write(fd2[1],buffer2,20);
             close(fd1[1]);
             close(fd2[0]);
             exit(0);
             int gb3=fork();
             int fd3[2];
             int rp3=pipe(fd3);
             if((gb3!=0)&&(rp3!=-1))
             {
                 int buffer3[20];
                 int cw3=read(fd2[0],buffer3,20);
                 for(int j=0;j<cw3;j++)
                 {
                     printf("%d",buffer3[j]*buffer3[j]);
                 }
                 printf("\n");
                 write(fd3[1],buffer3,20);
                 int gb4=fork();
                 
                 if(gb4!=0)
                 {
                     int sum=0;
                     int buffer5[20];
                     int cw5=read(fd3[0],buffer5,20);
                     for(int k=0;k<cw5;k++)
                     {
                         sum+=buffer5[k]*buffer5[k];
                     }
                     printf("The sum of Square of numbers is: %d \n",sum);
                     exit(0);
                     
                 }
                 wait(NULL);
             }
             wait(NULL);
         }
         wait(NULL);
       
     }
     wait(NULL);
 }

