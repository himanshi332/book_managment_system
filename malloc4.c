#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int ) malloc (sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed exiting:");
        return 1;
    }
    *ptr = 10;
    printf("value  stored in allocated memory %d\n", *ptr);
    free(ptr);
    return 0;

}