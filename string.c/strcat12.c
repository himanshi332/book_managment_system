#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[50] ;
    char s2[30];
    printf("\n enter string 1");
    gets(s1);
    printf("enter string s2");
    gets(s2);
    concat(s1 , s2);
    printf("concated string is :%s", s1 );
    getch();
    return 0;
}   
void concat(char s1[], char s2[])
{
    int i,j;
    i = strlen(s1);
    for(j =0; s2[j]!='\0'; i++ , j++)
    s1[i], s2[j];

}
