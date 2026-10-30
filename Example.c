#include <stdio.h>

int main() {
    int Num1;
    char Name[30];
    double CGPA;
    float Score;

    printf("Enter your roll: ");
    scanf("%d", &Num1);

    printf("Enter your Name: ");
    scanf("%s", Name); // & বাদ দিয়ে শুধু Name

    printf("Enter your CGPA: ");
    scanf("%lf", &CGPA);

    printf("Enter your Score: ");
    scanf("%f", &Score);

    // আউটপুট প্রিন্ট
    printf("\n--- Output ---\n");
    printf("Roll: %d\n", Num1);
    printf("Name: %s\n", Name);       // %c এর বদলে %s
    printf("CGPA: %.2lf\n", CGPA);     // double এর জন্য %lf
    printf("Score: %.2f\n", Score);    // %lf এর বদলে %f

    return 0;
}
