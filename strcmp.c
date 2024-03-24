#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[40] = "coding" ;
    char str2[40] = "compiler" ;
    strcmp(str2 , str);
    printf("value is %s\n", str2);
    getch();
    return 0;
}