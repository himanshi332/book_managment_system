#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter the 1 string");
    gets(str1);
    printf("Enter the 2 string");
    gets(str2);
    {
        if(strcmp(str1 , str2) == 0)
        {
            printf("strings are equal");
        }
        else{
            printf("strings are not equal");
        }
        return 0;
    }

}