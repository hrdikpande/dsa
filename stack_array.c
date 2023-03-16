#include<stdio.h>
#include<stdlib.h>
#define Size 10
int top=-1,inp_array[Size];
void push();
void pop();
void display();

int main()
{
    int choice;
    while(1)
    {
        printf("enter your choice");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("\nwrong selection");
        }
    }
}
void push()
{
    int n1;
    if(top==Size-1)
    {
        printf("overflow");
    }
    else{
    printf("enter the valude to be inserted\n");
    scanf("%d", &n1);
    top=top+1;
    inp_array[top]=n1;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("popped element:  %d\n", inp_array[top]);
        top=top-1;
    }
}
void display()
{
    if(top==-1)
    {
        printf("underflow");
    }
        else
        {
            printf("elements present in the array\n");
            for(int i=top;i>=0;--i)
            {
                printf("%d \n ", inp_array[i]);
            }
        }
}