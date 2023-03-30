#include<stdio.h>
#include<string.h>
void swap(char* x,char* y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void permutation(char* a,int l,int r)
{
    int i;
    if(l==r)
        printf("%s\n",a);
    else
    {
        for(i=1;i<=r;i++)
        {
            swap((a+l),(a+i));
            permutation(a,l+1,r);
            swap((a+l),(a+i));
        }
    }
}

int main()
{
    char str[50];
    scanf("%s",str);
    int n=strlen(str);
    printf("The possible permutations are:\n\n");
    permutation(str,0,n-1);
    return 0;
}