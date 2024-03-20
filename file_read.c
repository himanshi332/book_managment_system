#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char line[30];
    char userName[30] = "manshi";
    char name[30];
    long int pos = 0;
    FILE* file = fopen("read.txt", "r+");
    fgets(line, 30 , file);
    pos = ftell(file);
    fgets(name, 30, file);
    // fgets(name, 60, file);
    strcat(line, ", zoology");
    fseek(file,  -strlen(line), SEEK_CUR);
    fprintf(file, "%s", line);
    fclose(file);
    // printf("%s", name);
   return 0;
}    


// while( fgets(line, 50, file) != NULL) {
//     char name[60];
//     sscanf(line, "%[^,]", name);
//     if(strcmp(userName, name) == 0) {
//         printf("%s", name);
//         exit(0);
//     }
//     fseek(file, -strlen(line), SEEK_CUR);
//     fprintf(file, "%s", "name");
//    }