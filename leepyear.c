#include<stdio.h>

int main(){
    int year ;
    printf("Inter a year : ");
    scanf("%d", &year);

    if(year% 400 == 0){
        printf("This is leep year %d", year);
    }
    else if(year % 100 == 0){
        printf("this is not leep year %d ", year);
    }
    else if(year %4 == 0){
        printf("this is leep year %d ",year);
    }
    else{
        printf("This is not leep year %d ", year);
    }

    return 0;
}
