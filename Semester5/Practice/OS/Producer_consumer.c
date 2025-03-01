#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  // For sleep() function (optional)  
#include <pthread.h> // For threading  

// Define Message structure  
typedef struct 
{  
    int item; // or any other fields necessary for your program  
} Message ;  

// Function prototypes  
int produce();  
void build_message(Message *m, int item);  
void *Consumer(void *arg);   // Consumer function prototype  
void *Producer(void *arg);   // Producer function prototype  

// Global variable for message passing (for simplicity)  
Message message;  

// Simulate the produce function  
int produce() {  
    static int count = 0; // Static variable to maintain state  
    return count++;        // Produces an item (incrementing an integer)  
}  

// Simulate building a message  
void build_message(Message *m, int item) {  
    m->item = item; // Assigning the item to the message  
}  

// Consumer thread function (simplified)  
void *Consumer(void *arg)
{  
    int i =0;
    while (i<6) 
    {  
        i++;
        // Simulate receiving a message  
        sleep(1); // Simulate waiting time for demonstration  
        printf("Consumer received item: %d\n", message.item);  
    }  
    return NULL;  
}  

void *Producer(void *arg) 
{  
    int j=0;
    while (j<6) {  
        j++;
        sleep(1); // Simulate some processing time  
        build_message(&message, produce());  
        printf("Producer produced item: %d\n", message.item);  
    }  
    return NULL;  
}  

int main() {  
    pthread_t producer_thread, consumer_thread;  

    // Create the consumer thread  
    pthread_create(&consumer_thread, NULL, Consumer, NULL);  
    // Create the producer thread  
    pthread_create(&producer_thread, NULL, Producer, NULL);  
    
    // Join threads (this will block indefinitely since both functions run infinite loops)  
    pthread_join(consumer_thread, NULL);  
    pthread_join(producer_thread, NULL);  

    return 0;  
}