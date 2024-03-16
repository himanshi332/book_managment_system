#include<stdio.h>
#include<string.h>

int main()
{
char str1[] = "Hello";
char str2[20];
strcpy(str2, str1);
strcat(str2,  "World!");

int length =  strlen (str2);
printf("string 1: %s\n",  str1);
printf("string 2: %s\n", str2);
printf("Length of string 2: %d\n", length);

if(strcmp(str1, str2) == 0)
{
    printf("String 1 and  String 2 are equal.\n");
}

else
{
    printf("Strind 1 and String 2 are equal.\n");
}

return 0;



}
