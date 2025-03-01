#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<pthread.h>
void* printNumbers(void* arg)
{
    for(int i=1; i<=10;i++)
    {
        printf(" Number:%d \n ", i);
    }
    return NULL;
}
void* printSquars(void* arg)
{
    for(int i=1; i<=10;i++)
    {
        printf(" Square:%d \n ", i*i);
    }
    return NULL;
}

int main()
{
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, printNumbers, NULL);
    pthread_create(&thread1, NULL, printSquars, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
}