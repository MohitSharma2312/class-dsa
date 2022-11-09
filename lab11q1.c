/* Wap to do the following in queue (n queue and d queue) data structure 
And justify the correctness using some sequence*/
#include <stdio.h>
#define size 5
int arr[size];
int front = 0;
int rear =0;
void dequeue()
{
    if ( front == rear)
     printf("Queue is empty .\n");
     else 
     {
        printf("Dequeued element = %d\n", arr[front]);
        front++;
     }
}
void enqueue(int value)
{
   if(rear == size)
       printf("Queue is Full\n");
   else
   {
       arr[rear] = value;
       printf("Enqueued element = %d\n",arr[rear]);
       rear++;
   }
}

int main()
{
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   enqueue(50);
   enqueue(60);    
   dequeue();      
   dequeue();      
   dequeue();      
   dequeue();      
   dequeue();      
   dequeue();      

   return 0;
}