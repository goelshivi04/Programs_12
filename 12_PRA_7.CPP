#include<fstream.h>
#include<conio.h>
void puretext()
{
char ch[20],a,n[20];
ofstream fout("MYNOTES.TXT");
cout<<"\nEnter the content: ";
cin.getline(ch,80,'\n');
fout<<ch;
fout.close();

ifstream fin;
fin.open("MYNOTES.TXT");
while(!fin.eof())
{ fin>>a;
  if(a=='K')
    a='C';
  if(a=='k')
    a='c';
}
fin.close();

ifstream f;
f.open("MYNOTES.TXT");
while(!f.eof())
{ f.getline(n,10,' ');
cout<<n<<" ";    }
f.close();
}
void main()
{ clrscr();
  puretext();
  getch();
}