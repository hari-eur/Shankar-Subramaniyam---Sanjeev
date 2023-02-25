#include <stdio.h>
int main() {
    int a,b,c;
    char op;
    printf("Enter the operands:");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    printf("\nEnter the operator:");
    printf("\n+.Addition \n");
    printf("-.Subtraction \n");
    printf("*.Multiplication \n");
    printf("/.Division \n");
    printf("%.ModularDivision \n");
    printf("?.Ternary operator \n");
    scanf("\n%c",&op);
    switch(op)
    {
        case '+':
            c=a+b;
            printf("%d",c);
            break;
        case '-':
            c=a-b;
            printf("%d",c);
            break;
        case '*':
            c=a*b;
            printf("%d",c);
            break;
        case '/':
            c=a/b;
            printf("%d",c);
            break;
        case '%':
            c=a%b;
            printf("%d",c);
            break;
        case '?':
            c=((a>b)?a:b);
            if(c==a){
                printf("%d is larger than %d",a,b);
            }
            else{
                printf("%d is larger than %d",b,a);
            }
            break;
        default:
            printf("Enter a valid choice");
            break;
    }
    return 0;
}