#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class student
{
 private:
  char name[20];
  int rno;
  float per;
 public:
  void stream();
  void input();
  void display();
}s[5];

void student::stream()
{
 if(per>=96)
 cout<<"\nStream alloted: Computer Science ";
 else if(per>=91 && per<=95)
 cout<<"\nStream alloted: Electronics ";
 else if(per>=86 && per<=90)
 cout<<"\nStream alloted: Mechanical ";
 else if(per>=81 && per<=85)
 cout<<"\nStream alloted: Electrical ";
 else
 cout<<"\nSorry!! No stream alloted ";
}

void student::input()
{
  cout<<"\nEnter name: ";
  gets(name);
  cout<<"\nEnter roll no: ";
  cin>>rno;
  cout<<"\nEnter percentage: ";
  cin>>per;
}

void student::display()
{
  cout<<"\n\nRoll no: "<<rno;
  cout<<"\nName: "<<name;
  cout<<"\nPercentage: "<<per<<"%";
}

void main()
{
 clrscr();
 int n,r=0,i;
 char ch='y';
 do
{clrscr();
 cout<<"\n   MAIN MENU     ";
 cout<<"\n1.Enter details ";
 cout<<"\n2.Check Stream alloted ";
 cout<<"\n3.Display details ";
 cout<<"\n4.Exit";
 cout<<"\nEnter your choice: ";
 cin>>n;

  switch(n)
 {
   case 1:
   cout<<"\nEnter total number of records: ";
   cin>>r;
   for(i=0;i<r;i++)
   s[i].input();
   break;

   case 2:
   for(i=0;i<r;i++)
   {
    s[i].display();
    s[i].stream();
    getch();
   }
   break;

   case 3:
   for(i=0;i<r;i++)
   {
     s[i].display();
     s[i].stream();
     getch();
   }
   break;

   case 4:
   exit(0);

   default:
   cout<<"\nIncorrect choice ";
 }
 cout<<"\n \n Do you want to continue(y/n): ";
 cin>>ch;
 }while(ch=='y'|| ch=='Y');
 getch();
 }



















