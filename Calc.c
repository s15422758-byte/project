# include<stdio.h>
int main(){
    int a;
    int b;
    char op;
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    printf("Enter the operator(+,-,*,/,%)");
    scanf(" %c",&op);
    switch(op)
    {
    case '+':
    printf("Result is : %d", a+b);
    break;
    case '-':
    printf("Result is : %d", a-b);
    break;
    case '*':
    printf("Result is : %d", a*b);
    break;
    case '/':
    printf("Result is : %d", a/b);
    break;
    case '%':
    printf("Result is : %d", a%b);
    break;
    default:
    printf("Invalid operator");
    }
    return 0;
}
