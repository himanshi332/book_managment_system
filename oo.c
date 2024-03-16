#include<stdio.h>
int main()
{
    FILE* file;
    file = fopen("name.txt", "r");
    char hindi[40]; 
    fgets(hindi, 40, file);
    {

    printf("%s\n", hindi);
    scanf("%s\n", &hindi);
    fclose(file);

    }

return 0;


}
