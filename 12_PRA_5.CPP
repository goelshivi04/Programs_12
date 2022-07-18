#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
void main()
{
fstream f1,f2;
char a[50];
char ch,ch1;
do
{ clrscr();

cout<<"\n\t1.Write Text In Input File";
cout<<"\n\t2.Count vowels, words and digits";
cout<<"\n\t3.Show Text with blank Spaces replaced with #";
cout<<"\n\n\t Enter Choice: ";
cin>>ch;
switch(ch)
{
case '1' :
f1.open("File_1.txt",ios::out);
cout<<"\n\tEnter The Text(Type full stop to end string): ";
gets(a);
f1<<a;
f1.close();
break;

case '2' :
char temp1;
int vow=0,digi=0,words=0;
f2.open("File_1.txt",ios::in);

while(!f2.eof())
{
f2.get(temp1);
if(temp1=='a'|| temp1=='e'||temp1=='i'||temp1=='o'||temp1=='u'||
temp1=='A'||temp1=='E'||temp1=='I'||temp1=='O'||temp1=='U')
vow++;
if(isdigit(temp1))
digi++;
if(temp1==' '||temp1=='.')
words++;
}
f2.close();
cout<<"\n\tNo of Vowels: "<<vow;
cout<<"\n\tNo of Digits: "<<digi;
cout<<"\n\tNo of Words : "<<words;
break;

case '3' :
char temp2;
f2.open("File_1.txt",ios::in);
f1.open("File_2.txt",ios::out);
while(!f2.eof())
{
f2.get(temp2);
if(temp2==' ')
{
f1<<'#';
}
else
{
f1<<temp2;
}
}
f2.close();
f1.close();
cout<<"\n\tEdited text is:\n\n\t";
f2.open("File_2.txt",ios::in);
while(f2)
{
f2.get(ch);
cout<<ch;
}
f2.close();
break;
}
cout<<"\n\n\t Do you want to continue(y/n): ";
cin>>ch1;
}while(ch1=='Y'||ch1=='y');
getch();
}