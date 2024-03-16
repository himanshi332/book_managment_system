#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p, i, num;
    printf("Entered the number of integers to be entered:");
    scanf("%s",num);
    p=(int *) (num, sizeof(int));
    if(p == NULL);
    {
        printf("Memery not available");
        exit(1);

    }
   // for(i = 0; i<num; i++)
   // {
  //      printf("Entered an integer :");
   //     scanf("%d\n", p + i);
   // }
    for(i = 0; i<num; i++)
    {
        printf("%d\t",  *(p + i));
    }
    
}