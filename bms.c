#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define LOGIN 1
#define REGISTER 2
#define STUDENT_LIST 3
#define ADD_BOOK 4

void saveUserData(char *name, char *password) {
    printf("your name: %s\n", name);
    printf("your password: %s\n", password);
    FILE *file = fopen("user_data.csv", "a");
    if (file != NULL) {
        fprintf(file, "%s,%s\n", name, password);
        fclose(file);
    }
    else {
        printf("Error in opening file!");
    }
}

int validatePassword(char *password, char *confirmPassword) {
    int result = strcmp(password, confirmPassword);
    if (result == 0)
        return 1;
    else
        return 0;
}

char* getNameFromLine(char* line) {
    char* name = (char *) malloc(sizeof(char) * 20);
    sscanf(line, "%[^,]", name);
    return name;
}

int validateUser(char* name, char* password) {
    FILE *file = fopen("user_data.csv", "r");
    int result = 0;
    if (file != NULL) {
        char line[20];
        while (fgets(line, sizeof(line), file) != NULL) {
            char* dbName = getNameFromLine(line);
            if(strcmp(dbName, name) == 0) {
                result = 1;
                exit;
            }
        }
        fclose(file);
        return result;
    }
    else {
        printf(" Error in open file!");
    }
}

void displayStudent() {
    FILE *file = fopen("user_data.csv", "r");
    if (file != NULL) {
        char line[20];
        while (fgets(line, sizeof(line), file) != NULL) {
            char* name = getNameFromLine(line);
            printf("%s\n", name);
        }
        fclose(file);
    }
    else {
        printf(" Error in open file!");
    }
}

void displayPrompt() {
    printf("1. Login\n");
    printf("2. Register\n");
    printf("3. Student List\n");
    printf("4. Add Book\n");
}

void handleLogin() {
    char name[20];     // = "Abhishek";
    char password[20]; // = "abhi123";

    printf("Enter your name\n");
    scanf("%s", &name);
    printf("Enter your pasword\n");
    scanf("%s", &password);
    int isUserExist = validateUser(name, password);
    if(isUserExist) { 
        int options;
        printf("1. Book Assigned\n");
        printf("2. Available Book List\n");
        scanf("%d", &options);

        if(options == 1) {

            //Book assigned

        } else if(options == 2) {
            // show all available books
            char bookName[40];
            FILE* file = fopen("books.csv", "r");
            char line [50];

            while(fgets(line, 50, file) != NULL) {
                printf("%s", line);
            }
            printf("\nEnter book name to assign");
            scanf("%s", &bookName);
            printf("%s\n", bookName);

            FILE* file1= fopen("user_data.csv", "a+");
            if(file1 != NULL) {
                char lineNew[40];
                while(fgets(lineNew, sizeof(lineNew), file1 ) != NULL) { 
                    char* fname = getNameFromLine(lineNew);
                    if(strcmp(name, fname) == 0) {
                        printf("%s\n", fname);
                        fprintf(file1, ", %s", bookName);
                    }
                } 
            } else {
                printf("Error in open file");
            }                                                   
        }

    } else {
        printf("User does not exist!");
    }
}

void handleRegister() {
    char name[20];     // = "Abhishek";
    char password[20]; // = "abhi123";
    char confirmPassword[20];

    printf("Enter your name\n");
    scanf("%s", &name);
    printf("Create your pasword\n");
    scanf("%s", &password);
    printf("Confirm your pasword\n");
    scanf("%s", &confirmPassword);
    int validPassword = validatePassword(password, confirmPassword);
    if (validPassword) {
        saveUserData(name, password);
        printf("Registered succefully\n");
        printf("Enter for login");
    }
    else {
        printf("Password and confirm password should be equal");
    }
}

void addBook(char*  bookName, char* fileName) {
    FILE* file = fopen(fileName, "a");
    if(file == NULL) printf("Not able to add book name!");
    else {
        fprintf(file, "\n%s", bookName);
    }
    fclose(file);
}

void handleAddBook() {
    char bookName[40];
    printf("Enter Book name please\n");
    scanf("%s", &bookName);
    addBook(bookName, "books.csv");
    printf("Book added succefully!");
}

void handleAction(int action) {
    switch (action) {
    case LOGIN:
        handleLogin();
        break;
    case REGISTER:
        handleRegister();
        break;
    case STUDENT_LIST:
        displayStudent();
        break;
    case ADD_BOOK:
        handleAddBook();
        break;
    default:
        printf("Please select any option");
        break;
    }

}

void createFile(char* fileName) {
    FILE* file = fopen(fileName, "w");
    if(file == NULL) {
        printf("Error in creating file");
   }
}

int main() {
    int action;    
    // createFile("books.csv");
    displayPrompt();
    scanf("%d", &action);
    handleAction(action);
    return 0;
}
