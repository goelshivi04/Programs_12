#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class bank
{
char name[20];
long int acc_no;
char acc_type[20];
float bal;
public:
void details(int ano,char n[],char atype[],float b)
{
strcpy(name,n);
acc_no=ano;
strcpy(acc_type,atype);
bal=b;
}
void withdraw();
void deposit()
{
float amt;
cout<<"\nEnter amount to be deposited: ";
cin>>amt;
bal=bal+amt;
cout<<"Available Balance: "<<bal;
}

void display()
{
cout<<"\nAccount number: "<<acc_no;
cout<<"\nName of the customer: "<<name;
cout<<"\nAccount type: "<<acc_type;
cout<<"\nAvailable Balance: "<<bal;
}
~bank()
{  cout<<"\nThank You for Banking with us"; }
};

void bank::withdraw()
{
float amt;
do{
cout<<"\nEnter amount to be withdrawn: ";
cin>>amt;
if(amt<=bal)
{bal=bal-amt;
break;}
else
cout<<"\nInsufficent balance ";


cout<<"\nBalance amount: "<<bal;
}while(amt>bal);
}

void main()
{
int no;
char cust_name[20],atype[10],type;
float amt;
bank b;
clrscr();
cout<<"\nEnter Account no.: ";
cin>>no;
cout<<"\nEnter Name: ";
gets(cust_name);
cout<<"\nEnter account type(S for savings and C for Current): ";
cin>>type;
if(type=='S'|| type=='s')
 strcpy(atype,"Savings");
if(type=='C' || type=='c')
 strcpy(atype,"Current");
cout<<"\nEnter balance amount: ";
cin>>amt;
while(amt<1000)
{
  cout<<"\nMinimum balance is Rs.1000";
  cout<<"\nEnter balance amount: ";
  cin>>amt;
}
b.details(no,cust_name,atype,amt);
b.deposit();
b.withdraw();
cout<<"\n\n\nDetails of Account:";
b.display();
getch();
}