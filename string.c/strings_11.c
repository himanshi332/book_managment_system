#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, length = 0;
    printf("enter a string:\n");
    scanf("%d\n", &str);
    for(i = 0; str[i]  = '\0' ;  i++)
    {
        length++;
    } 
    printf("\n length of input string  %d\n", length);
    getch();
    return 0;
}