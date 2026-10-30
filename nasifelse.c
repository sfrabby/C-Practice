#include<stdio.h>

int main(){

    int number1, number2;
    printf("Inter your two number : ");
    scanf("%d %d", &number1, &number2);

    if(number1 <= number2){
        if(number1==number2){
            printf("Result num1 and num2 are equal :  %d %d", number1, number2);
        }
        else{
            printf("Result num1 and num2 are not equal:  %d %d", number1, number2);
        }
    }
    else{
        printf("Result :  %d %d", number1, number2);
    }

    return 0;


}

