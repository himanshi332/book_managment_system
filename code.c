#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* file;
    file=fopen("code.txt", "r");
    if(file==NULL){

        perror("Error opening file");
        return 1;
    }
    
    long int position = ftell(file);
    if(position == -1){

        perror("Error getting file position");
        fclose(file);
        return 1;  
    }
    printf("Current file position: %1d\n", position);
    fclose(file);
    return 0;
}