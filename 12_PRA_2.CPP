#include<iostream.h>
#include<conio.h>

class cricket
{
  private:
  int target_score,overs_bowled,extra_time,penalty;
  void cal_penalty()
  {
    if(extra_time<=10)
    penalty=1;
    else if(extra_time<=20 && extra_time>10)
    penalty=2;
    else
    penalty=3;
  }

  public:
  void extradata();
  void dispdata();
}c[5];

void cricket::extradata()
{
   cout<<"\nEnter Target Score: ";
   cin>>target_score;
   cout<<"\nEnter no of overs bowled: ";
   cin>>overs_bowled;
   cout<<"\nEnter extra time: ";
   cin>>extra_time;
   cal_penalty();
}

void cricket::dispdata()
{
   cout<<"\nTarget Score: "<<target_score;
   cout<<"\nOvers Bowled: "<<overs_bowled;
   cout<<"\nExtra Time: "<<extra_time;
   cout<<"\nPenalty: "<<penalty<<endl;
}

void main()
{
  int i;
  for(i=0;i<5;i++)
  {
    clrscr();
    c[i].extradata();
  }
  clrscr();
  for(i=0;i<5;i++)
  {
    c[i].dispdata();
    getch();
  }
}








