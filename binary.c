#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, array[100],search,first,last,middle;
    printf("enter the no of elements. in the aray");
    scanf("%d",&a);
    printf("enter the elements");
    for(int i=0;i<a;i++)
    {
        scanf("%d", &array[i]);
    }
    printf("enter the value to be found");
    scanf("%d", &search);
    first=0;
    last=a-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(array[middle]<search)
        first=middle+1;
        else if(array[middle]==search)
        {
            printf("element found at %d",middle+1);
            break;
        }
        else
        last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
    printf("element not present");
    return 0;
}