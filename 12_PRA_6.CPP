#include<fstream.h>
#include<conio.h>
#include<string.h>
int count()
{ char a[10],b[3],ch[80];
  int count=0;
ofstream fout;
fout.open("Count.txt");
cout<<"\nEnter the content: ";
cin.getline(ch,80,'\n');
fout<<ch;
fout.close();
 ifstream fin;
 fin.open("Count.txt");
 while(!fin.eof())
  {
     fin.getline(a,10,' ');
       if (strlen(a)==2)
       {
	 if((strcmpi(a,"is")==0))
	  ++count;
       }
       if(strlen(a)==3)
       {
	 if(a[0]==' '|| a[0]=='.')
	 {
	     if((strcmpi(a,"is")==0))
	  ++count;
	  }
	}
  }
  return count;
}
void main()
{
  clrscr();
  int c;
  c=count();
  cout<<"\n The number of 'is' : "<<c;
  getch();
}