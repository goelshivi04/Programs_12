#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
class employee
{ int code;
  char name[20];
  float salary;
  public:
void input();
void display();
float retsal()
{
return salary;
}
}e;
void employee::input()
{
cout<<"\n\tEnter employee code: ";
cin>>code;
cout<<"\tEnter employee name: ";
gets(name);
cout<<"\tEnter salary: ";
cin>>salary;
}
void employee::display()
{
cout<<"\n\nEmployee code: "<<code;
cout<<"\nEmployee name: "<<name;
cout<<"\nEmployee salary: "<<salary;

}
void create()
{ int n,i;
fstream f1;
f1.open("employee.dat",ios::out|ios::binary);
cout<<"\n\tEnter no. of records to be entered: ";
cin>>n;
for(i=0;i<n;i++)
{
e.input();
f1.write((char*)&e,sizeof(employee));
}
f1.close();
}

void salary()
{ ifstream f2;
 f2.open("employee.dat",ios::in);
 f2.seekg(0,ios::beg);
 while( f2.read((char *)&e,sizeof(e)))
 {
   if(e.retsal()>10000.0 && e.retsal()<20000.0)
      e.display();
 }
 f2.close();
}

void main()
{
 char ch,ch1;
 do
{ clrscr();
cout<<"\n\t1.Add employee record";
cout<<"\n\t2.Details of employee whose salary is between 10000 and 20000";
cout<<"\n\t3.Exit";
cout<<"\n\n\t Enter choice: ";
cin>>ch;
switch(ch)
{
case '1' :
create();
break;

case '2' :
salary();
break;

case '3':
exit(0);

default:
cout<<"\nIncorrect Choice";
}

cout<<"\n\n Do you want to continue(Y/N):  ";
cin>>ch1;
}while(ch1=='Y'||ch1=='y');
getch();

}