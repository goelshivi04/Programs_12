#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<iomanip.h>

class donor
{ char name[30];
char add[30];
char bgrp[5];
public:
void input();
void display();
char *getbgrp()
{
return bgrp;
}
void t_display();
};
void donor::input()
{
cout<<"\n\tEnter Donor Name: "; gets(name);
cout<<"\tEnter address: "; gets(add);
cout<<"\tEnter Blood Group: "; gets(bgrp);
}
void donor::display()
{
cout<<"\n\n\tDonor Name: "<<name;
cout<<"\n\tAddress: "<<add;
cout<<"\n\tBlood Group: "<<bgrp;

}
int a=1;
void donor::t_display()
{
  cout<<setw(5)<<a<<setw(15)<<name<<setw(15)<<add
     <<setw(15)<<bgrp<<setw(10)<<endl;
  ++::a;
}
void main()
{ donor d;
int n,i,j;
fstream f1,f2;
char ch,ch1;
do
{ clrscr();
cout<<"\n\t1.Add donars records in a file";
cout<<"\n\t2.Search Records from the file";
cout<<"\n\t3.List Records in tabular form";
cout<<"\n\t4.Exit";
cout<<"\n\n\t Enter choice: ";
cin>>ch;
switch(ch)
{
case '1' :
f1.open("blood_bank.dat",ios::out|ios::binary);
cout<<"\n\tEnter no. of records to be entered: ";
cin>>n;
for(i=0;i<n;i++)
{
d.input();
f1.write((char*)&d,sizeof(donor));
}
f1.close();
break;

case '2' :
cout<<"\n\tEnter Blood Group to be searched: ";
char b[5],flag=0;
gets(b);
f2.open("blood_bank.dat",ios::in);
while(f2)
{ f2.read((char *)&d,sizeof(donor));
if(!f2)
break;
if (strcmp(b,d.getbgrp())==0)
{ d.display();
flag=1;
}
}
if(flag==0)
{ cout<<"\n\t ";
cout<<" RECORD NOT FOUND ";
}
f2.close();
break;


case '3' :
f2.open("blood_bank.dat",ios::in);

cout<<"------------------------------------------------------------"<<endl;
cout<<setw(5)<<" S.No"<<setw(15)<<"Name"<<setw(15)<<"Address"
     <<setw(20)<<"Blood Group"<<setw(12);
cout<<"\n-------------------------------------------------------------"<<endl;
while(f2)
{ f2.read((char *)&d,sizeof(donor));
if(!f2)
break;
d.t_display();
}
f2.close();
cout<<"-------------------------------------------------------------";

break;

case '4':
exit(0);

default:
cout<<"\nIncorrect Choice";
}

cout<<"\n\n Do you want to continue(Y/N):  ";
cin>>ch1;
}while(ch1=='Y'||ch1=='y');
getch();
}


