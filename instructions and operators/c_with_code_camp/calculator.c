//not working
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    char k;

    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the operator : ");
    scanf("%c\n",&k);
if (k =='+'){
    printf("The value is : %d", a+b);
}
else if (k == '-'){
    printf("The value is : %d", a-b);
}
else if (k == '*'){
    printf("The value is : %d",a*b);
} 
else if (k == '/'){
    printf("The value is : %d",a/b);
}
else if (k == '%'){
    printf("The value is : %d",a%b);
}
return 0;
}