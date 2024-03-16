#include<stdio.h>
#include<string.h>

struct userData {
    char name[40];
    char bookName[40];
};

typedef struct userData UserData;
int main() {
    UserData u1, u2, u3, u4, u5;

    strcpy(u1.name, "Vivek");
    strcpy(u1.bookName, "Maths");

    strcpy(u2.name, "Manshi");
    strcpy(u2.bookName, "English");

    strcpy(u3.name, "Shivam");
    strcpy(u3.bookName, "Physics");

    strcpy(u4.name, "Lado");
    strcpy(u4.bookName, "Chemistry");

    strcpy(u5.name, "Rishu");
    strcpy(u5.bookName, "Biology");

    UserData dataArray[] = {u1, u2, u3, u4, u5};
    int dataLength = sizeof(dataArray) / sizeof(u1);

    for( int i=0; i< 5; i++) {
        printf("%s, %s\n", dataArray[i].name, dataArray[i].bookName);
    }
    
    
    return 0;
}