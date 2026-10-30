
#include<stdio.h>
int main(){
    int num1, num2;
    char operation;
    printf("Input an oprerator : + - * / ");
    scanf("%c", &operation);
    printf("Input two numbers : ");
    scanf("%d %d" , &num1, &num2);

    switch(operation){
        case '+' : printf("%d + %d = %d", num1, num2, num1+num2);
        break;

        case '-' : printf("%d - %d = %d", num1, num2, num1-num2);
        break;

        case '*' : printf("%d * %d = %d", num1, num2, num1*num2);
        break;

        case '/' : printf("%d / %d = %d", num1, num2, num1/num2);
        break;

        default : printf("Error");
    }
}
