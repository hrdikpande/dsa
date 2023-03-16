#include<stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
    int queue[n],front=0,rear=0,x=n;
    printf("enter your choice");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    while(1)
    {
        printf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                if(rear==x)
                {
                    printf("Queue is full");
                }
                else
                {
                    printf("enter the element you want to insert");
                    scanf("%d", &queue[rear++]);
                    break;
                }
            }
            case 2:
            {
                if(rear==front)
                {
                    printf("queue is empty");
                }
                else
                {
                    printf("deleted element is "queue[front++]);
                    x++;
                }
            }
            case 3:
            {
                if(front==rear)
                {
                    printf("queue is empty");
                }
                else
                {
                    for(int i=front;i<rear;i++)
                    {
                        printf("%d", queue[i]);
                    }
                }
            }
            case 4:
            exit(0);
            default("wrong choice");
        }
    }
    return 0;}