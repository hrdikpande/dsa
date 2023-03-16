#include<stdio.h>
int main()
{
    int array[100],a,n,i,j,temp;
    printf("enter the number of elements");
    scanf("\n %d", &n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d", &array[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("sorted array is\n");
    for(i=0;i<n;i++)
    printf("\n%d", array[i]);
    return 0;
}