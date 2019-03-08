#include <stdio.h>
#include <stdlib.h>

int main()
{
    long amount=20000,deposit,withrow;
int choice,pin,k;
char transection='y';

void main()
{
clrscr();
while(pin !=1234)
{
printf("Enter your secret pin number:");
scanf("%d",&pin);
if (pin!=1234)
printf("Please Enter Valid Password\n");
}

do
{
gotoxy(2,3);textcolor(28);
cprintf("programmer by :Humayun Kabir.");
gotoxy(37,3);textcolor(28);
cprintf("id= 20171002011");
gotoxy(16,4);textcolor(28);
cprintf("pordip kumar");
gotoxy(37,4);textcolor(28);
cprintf("id= 20163003011");
gotoxy(16,5);textcolor(28);
cprintf("Pintu Hossain");
gotoxy(37,5);textcolor(28);
cprintf("id= 20163002011");
gotoxy(15,7);textcolor(25);
cprintf("********welcome to ATM Service*********\n");
gotoxy(3,9);textcolor(15);
cprintf("1. Check Balence\n");
gotoxy(3,11);textcolor(15);
cprintf("2. withrow Cash\n");
gotoxy(3,13);textcolor(15);
cprintf("3. Deposit Cash\n");
gotoxy(3,15);textcolor(15);
cprintf("4. Quit\n");
gotoxy(3,17);textcolor(15);
cprintf("*************?***************?**\n\n");
gotoxy(3,19);textcolor(15);
cprintf("Enter your choice:");
gotoxy(3,21);textcolor(15);
scanf("%d",&choice);
switch (choice)
{
    case 1:
    printf("\n Your Balence In R$: %5u",amount);
    break;

    case 2:
    printf("\n Enter the amount to withrow:");
    scanf("%5u",&withrow);
if (withrow % 100 !=0)
{
    printf("\n Please Enter the amount In multiples of 100");
}
else if(withrow>(amount-500))
{
    printf("\n Insufficent Balence");
}
else
{
    amount=amount-withrow;
    printf("\n\n Please Collect Cash");
    printf("\n Your current Balence is%5u",amount);
    }
    break;

    case 3:
    printf("\n Enter the amount to Deposit");
    scanf("%5u",&deposit);
    amount=amount + deposit;
    printf("Your Balence is %5u", amount);
    break;

    case 4:
    printf("\n Thank You Using ATM");
    break;

    default:
    printf("\n Invalid Choice");
}
printf("\n\n\n Do you wish to have another transection?(y/n):\n");
fflush(stdin);
scanf("%c",&transection);
if (transection == 'n' || transection =='N')
k=1;
}
while (!k);
printf("\n\n Thanks for using ATM service");
getch();

}
}
