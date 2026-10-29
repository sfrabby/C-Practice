#include<stdio.h>
int main()
{
    int byteSize;
    char byteSizeC;
    double byteSizeD;
    float byteSizeB;

    printf("Int byte size %zu \n", sizeof(byteSize));
    printf("Char byte size  %zu \n", sizeof(byteSizeC));
    printf("Double byte size  %zu \n", sizeof(byteSizeD));
    printf("Float byte size %zu \n", sizeof(byteSizeB));


    return 0;


}
