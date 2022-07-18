#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{ clrscr();
  char c;
  ofstream f1,f2,f3;
  ifstream F1,F2,F3;
  f1.open("UPPER.TXT");
  f2.open("LOWER.TXT");
  f3.open("OTHERS.TXT");
  cout<<"\nEnter contents to store in file(Type full stop to end string): ";
  while((c=getchar())!='.')
  {
     if(isupper(c))
      f1<<c;
     else if(islower(c))
      f2<<c;
     else
      f3<<c;
  }
  f1.close();
  f2.close();
  f3.close();
  F1.open("UPPER.TXT");
  cout<<"\nContents of file UPPER.TXT : ";
  while(F1>>c)
  {
    cout<<c;
  }
  F1.close();
  F2.open("LOWER.TXT");
  cout<<"\nContents of file LOWER.TXT : ";
  while(F2>>c)
  {
    cout<<c;
  }
  F2.close();
  F3.open("OTHERS.TXT");
  cout<<"\nContents of file OTHERS.TXT : ";
  while(F3>>c)
  {
    cout<<c;
  }
  F3.close();
getch();
}
