#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Array Size : ");
    scanf("%d",&n);
    
    int arr[n], *ptr = arr;
    
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    
    printf("The elements in array are : \n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}