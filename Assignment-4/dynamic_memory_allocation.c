#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Enter the elements:\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=ptr[i];
        }
        printf("The sum of elements are: %d",sum);
    }
    free(ptr);
    return 0;
}