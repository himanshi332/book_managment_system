#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   FILE* file;
   char line[40];
   char new_book_name[40] = "BookName";
   file =  fopen("new.txt", "r+");
   if(file == NULL){
   fgets(line, 40, file);
   printf("%s\n", line);
   scanf("%s\n",&line);
   fseek(line, strlen(line), SEEK_CUR);
   fprintf(file, "%s\n", ", BookName");
   fclose(file);
   }
   return 0;



}
