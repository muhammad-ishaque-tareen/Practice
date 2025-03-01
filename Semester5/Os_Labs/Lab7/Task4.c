#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
int count=0;
pthread_mutex_t lock_;
void* Increament(void* arg)
{
    for(int i=1; i<=100; i++)
     {
        pthread_mutex_lock(&lock_);
         count++;
        pthread_mutex_unlock(&lock_);
     }
     return NULL;
}
void* IncreamentAgain(void* arg)
{
    
     for(int i=1; i<=100; i++)
     {
        pthread_mutex_lock(&lock_);
         count++;
        pthread_mutex_unlock(&lock_);
     }
     return NULL;
}
void* Decreament40(void* arg)
{
     for(int i=1; i<=40; i++)
     {
        pthread_mutex_lock(&lock_);
         count--;
        pthread_mutex_unlock(&lock_);
     }
     return NULL;
}
void* Decreament160(void* arg)
{
     for(int i=1; i<=160; i++)
     {
        pthread_mutex_lock(&lock_);
         count--;
        pthread_mutex_unlock(&lock_);
     }
     return NULL;
}
int main()
{
    pthread_t thread1, thread2, thread3, thread4;
    pthread_mutex_init(&lock_, NULL);
    pthread_create(&thread1, NULL, Increament, NULL);
    pthread_create(&thread2, NULL, Decreament40, NULL);
    pthread_create(&thread3, NULL, IncreamentAgain, NULL);
    pthread_create(&thread4, NULL, Decreament160, NULL);
    pthread_join(&thread1, NULL);
    pthread_join(&thread2, NULL);
    pthread_join(&thread3, NULL);
    pthread_join(&thread4, NULL);
    pthread_mutex_destroy(&lock_);
    printf(" The Final Value of count is :%d \n", count);

    return 0;

}