#include<stdio.h>
#include<stdlib.h>
int main()
{
int class1;
int b;  //No. of seats in 1st class
int a;  //no of seaats in econmy class
char ch;

printf("\n\t\t\t    Welcome to the Railway Ticket Management System   \n");
printf("Press 1 for First class Seat Reservation\n");
printf("\n\nPress 2 for Economy Class Seat Reservation! \n ");
scanf("%d", &class1);

switch(class1)
{
case 1:
{
printf("\n Enter your seat Number in First class:-");
scanf("%d",&a);
if (a < 100)
{
printf("\n\t\t\t\t\t\t\t\t   Your Ticketing Details   \t\t\t\t\t\n");
printf("Your Class: First Class",class1);
printf("\nYour Seat Number:- %d \n\n", a);
}
else
{
printf("\n seats full do you wanna resreved in Economy");
scanf("%c",&ch);
if(ch =='y'||ch == 'Y')

{
printf("\nYour ticket has been booked in Economy Class");
printf("\nYour Seat Number:- %d \n\n",a);
}
break;
}
case 2:
{
printf("\n Enter your seat Number in Economy class:");
scanf("%d",&b);
if (b >= 101 || b < 200)
{
printf("\n\t\t Your Ticketing Details  \n");
printf("Your Class: economy Class",class1);
printf("\nYour Seat Number:- %d", b);
}
else
{
printf("\n Sorry seats full do you wanna resreved in First class(Y or N) ?:-");
scanf(" %c",&ch);
if(ch =='y'||ch=='Y')

{
printf("\nYour ticket has been booked in Economy Class");
printf("\nYour Seat Number:- %d",a);
}
break;

default:
printf("\n Sorry There is an Error ! Please choose given Option \n\n\t\t\t Thank You");
break;

}
}

return 0;//EXIT
}
}
}