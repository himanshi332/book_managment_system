#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch[100] = "code yourself";
    char ch2[20] = "Academy";
    strcat(ch , ch2);
    printf("value is %s\n", ch);
    getch();
    return 0;
}