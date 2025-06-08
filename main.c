#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

/*    printf("Little bit crazy\n");
    printf("maybe a lot more than little bit\n");

    int age = 25;
    printf("well well, you're %d already\n", age);

    int year = 2063;
    printf("and it's %d too\n", year);

    float gpa = 3.83;
    printf("My ongoing GPA has been %.2f for the first year\n", gpa);

    char name[] = "let's go bruh";
    printf("Hello %s\n", name);

    char food[] = "pizza";
    printf("Your favoirute food is %s\n", food);

    bool isOnline = false;
    if (isOnline){
        printf("%s is now online\n", name);
    }
    else {
        printf("%s is now offline\n", name);
    }
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your name is %s and age is %d", name, age);

    fgets(name, sizeof(name), stdin);

*/

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;


    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou bought %d %s", quantity, item);
    printf("Your total is: %c%.2f\n", currency, total);

    return 0;
}