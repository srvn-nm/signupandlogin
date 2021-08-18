#include <string.h>
#include <stdio.h>
char fullName[50];
char lastName[50];
int age;
char city[50];
int choice;
char password[10];
char checkedName[50];
char checkedLastName[50];
char checkedPassword[10];
char checkedCity[50];
char checkedPassword[10];
void menu(){
    printf("\n\n1)sign up\n2)login\n3)show information\n4)change information\n5)exit\n\n");
    scanf("%d",&choice);
    switch (choice) {
    case 1:
        printf("please enter your fullname here: \n");
        scanf("%s",&fullName);
        printf("please enter your lastname here: \n");
        scanf("%s",&lastName);
        printf("please enter your age here: \n");
        scanf("%d",&age);
        printf("please enter your city here: \n");
        scanf("%s",&city);
        printf("please enter your password here: \n");
        scanf("%s",&password);
        printf("please enter your password again here to check: \n");
        scanf("%s",&checkedPassword);
        while (strcmp(password,checkedPassword) != 0){
            printf("\nyou enter your password wrong!\nplease enter your password again here: \n");
            scanf("%s",&password);
            printf("please enter your password again here to check: \n");
            scanf("%s",&checkedPassword);
        }
        printf("\nyou signed up successfully!\n\n");
        break;
    case 2:
        printf("please enter your fullname here: \n");
        scanf("%s",&checkedName);
        while (strcmp(checkedName , fullName) != 0){
            printf("please enter your fullname here: \n");
            scanf("%s",&checkedName);
        }
        printf("please enter your lastname here: \n");
        scanf("%s",&checkedLastName);
        while (strcmp(checkedLastName , lastName) != 0){
            printf("please enter your lastname here: \n");
            scanf("%s",&checkedLastName);
        }
        printf("please enter your password here: \n");
        scanf("%s",&checkedPassword);  
        while (strcmp(checkedPassword , password) != 0){
            printf("please enter your password here: \n");
            scanf("%s",&checkedPassword);  
        }
        printf("\nyour login information was correct! You logged in successfully!\n\n");
        break;
    case 3:
        printf("\n\nthere is your information : \n\nyour fullname: %s\nyour lastname: %s\nyour age: %d\nyour city: %s\n\n",fullName,lastName,age,city);
        break;
    case 4:
        printf("\n\nthere is your information : \n\n1)name: %s\n2)lastname: %s\n3)age: %d\n4)city: %s\n5)password: %s\n\n",fullName,lastName,age,city,password);
        printf("which one do you want to change? enter its number here:\n\n");
        int choice2;
        scanf("%d",&choice2);
        switch (choice2){
        case 1:
            printf("\nenter your new fullname : \n");
            scanf("%s",&checkedName);
            strcpy(fullName,checkedName);
            printf("your information successfully changed!\n\n");
            printf("\n\nthere is your new information : \n\n1)name: %s\n2)lastname: %s\n3)age: %d\n4)city: %s\n5)password: %s\n\n",fullName,lastName,age,city,password);
            break;
        case 2:
            printf("\nenter your new lastname : \n");
            scanf("%s",&checkedLastName);
            strcpy(lastName,checkedLastName);
            printf("your information successfully changed!\n\n");
            printf("\n\nthere is your new information : \n\n1)name: %s\n2)lastname: %s\n3)age: %d\n4)city: %s\n5)password: %s\n\n",fullName,lastName,age,city,password);
            break;
        case 3:
            printf("\nenter your new age : \n");
            scanf("%d",&age);
            printf("your information successfully changed!\n\n");
            printf("\n\nthere is your new information : \n\n1)name: %s\n2)lastname: %s\n3)age: %d\n4)city: %s\n5)password: %s\n\n",fullName,lastName,age,city,password);
            break;
        case 4:
            printf("\nenter your new city : \n");
            scanf("%s",&checkedCity);
            strcpy(city,checkedCity);
            printf("your information successfully changed!\n\n");
            printf("\n\nthere is your new information : \n\n1)name: %s\n2)lastname: %s\n3)age: %d\n4)city: %s\n5)password: %s\n\n",fullName,lastName,age,city,password);
            break;
        case 5:
            printf("\nenter your new password : \n");
            scanf("%s",&checkedPassword);
            strcpy(password,checkedPassword);
            printf("your information successfully changed!\n\n");
            printf("\n\nthere is your new information : \n\n1)name: %s\n2)lastname: %s\n3)age: %d\n4)city: %s\n5)password: %s\n\n",fullName,lastName,age,city,password);
            break;
        }
        break;
    case 5:
        break;
    }
}
int main(){
    while (1) {
        menu();
       if (choice == 5){
           printf("GoodBye dear %s %s ^-^ !",fullName,lastName);
            return 0;
       }  
    }
}