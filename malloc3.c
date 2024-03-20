#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the number of elements");
    scanf("%d\n", &n);
    ptr =(int*) malloc ( n* sizeof(int));
    if (ptr == NULL)
    {
        printf("Memery allocation failed exiting:");
        return 1;
    }
    printf("elements entered:");
    for(int i = 0; i < n ; i++)
    {
       printf("%d", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;



}