#include<stdio.h>
#include<conio.h>
void main()
{
    int flag = 0, i;
    char s1[] = "Hello";
    char s2[] = "hello";
    for(i =0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if(s1[i]!= s2[i]){

            flag =1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("\n string are not same");
    }
    else{
          
          printf("string are same:");
    }
    getch();


}
