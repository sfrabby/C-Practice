#include <stdio.h>

int main()
{
    char Name[50];
    int Roll;
    double CGPA;
    char Section;
    int previousRoll;
    char previousSection;

    printf("Enter Your Name: ");
    scanf("%s", Name); // & বাদ দিয়ে শুধু Name

    printf("Enter Your Roll: ");
    scanf("%d", &Roll);

    printf("Enter Your CGPA: ");
    scanf("%lf", &CGPA);

    printf("Enter Your Section: ");
    scanf(" %c", &Section); // %c এর আগে স্পেস দেওয়া হয়েছে বাফার ক্লিয়ার করতে

    // ইনপুটগুলো ঠিকঠাক নিয়েছে কিনা তা দেখার জন্য প্রিন্ট:
    printf("\n--- Output ---\n");
    printf("Name: %s\n", Name);
    printf("Roll: %d\n", Roll);
    printf("CGPA: %.2lf\n", CGPA);
    printf("Section: %c\n", Section);

    printf("Inter Your Previous Section And Number");
    scanf("%c %d",&previousSection , previousRoll);
    printf("%d %d", previousSection , previousRoll);

    return 0;
}
