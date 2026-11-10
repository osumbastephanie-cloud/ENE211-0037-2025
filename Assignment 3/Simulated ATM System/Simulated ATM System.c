#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int login(){
char correctpassword [] = "6592";
char correctusername  [50] = "Stephanie";
char username [50];
char password [50];
int max_attempts = 3;

for (int attempt =1; attempt<= max_attempts; attempt++){
printf("Kindly insert your username:");
scanf("%49s", username);
printf("Kindly insert your password:");
scanf("%49s",  password);
if (strcmp(username, correctusername)== 0 && strcmp(password, correctpassword) == 0)
{
     printf("Login successful!\n");
     return 1;
}
else {
printf("Incorrect password.Please try again.\n");
}

}
printf("Maximum attempts exceeded. Access denied.\n");
return 0;
}
void checkBalance (double balance){
 printf("Selected: Balance Inquiry\n");
printf("Your balance is:K.Sh %lf", balance);
 }
 void deposit(double *balance){
 double amount;
 printf("Selected: Deposit\n");
printf("Kindly state amount.");
if (scanf("%lf", &amount) == 1 && amount> 0){
*balance += amount;
printf("Successfully deposited K.Sh %.2f\n", amount);
printf("Updated balance: K.Sh %.2f\n", *balance);
}
else {
printf("Invalid deposit amount.\n");
}
}
void withdraw(double *balance){
double amount;
printf("Selected: Withdraw\n");
printf("How much would you like to withdraw?");
if (scanf("%lf", &amount)== 1 && amount > 0){
if(amount<= *balance){
*balance -=amount;
printf("Successfully withdrew K.Sh %.lf\n", amount);
printf("Updated balance: K.Sh %.lf\n", *balance);
    }
else {
    printf("Insufficient balance!Transaction failed.\n");
}
}
else {
    printf("Invalid withdrawal amount.\n");
}
}
int main (){
if (login() !=1){
return 0;
}
int choice = 0;
double balance = 27000.00;
while (choice !=4){
printf("\n--- ATM MENU---\n");
printf("1. Balance Inquiry\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Exit\n");
printf("Enter your choice(1-4):");

if(scanf("%d", &choice) !=1){
   printf("Invalid entry. Exiting program...\n");
   break;
}
  switch (choice){
case 1:
    checkBalance(balance);
break;
case 2:
    deposit(&balance);
break;
case 3:
    withdraw(&balance);
break;
case 4:
printf("Exiting... Have a nice day!\n");
break;
default:
printf("Invalid selection! Please enter a number from 1 to 4.\n");
  }
}
return 0;
}


