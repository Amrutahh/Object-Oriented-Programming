/*4.	Create a class called 'TIME' that:
•	Has three integer data members for hours, minutes, and seconds.
•	A constructor to initialize the object to zero.
•	A constructor to initialize the object to some constant value.
•	A member function to add two TIME objects.
•	A member function to display time in HH:MM:SS format.
Write a main function to create two TIME objects, add them, and display the result in HH:MM:SS format.*/
#include<iostream>
using namespace std;

class TIME
{
 private:
 int Hours, Minutes, Seconds;
  public:
  TIME()
 {
  Hours=0;
  Minutes=0;
  Seconds=0;
 }
TIME(int a,int b,int c)
 {
  Hours=a;
  Minutes=b;
  Seconds=c;
 }

void getdata()
{
  cout<<"\nENTER TIME: Hours, Minutes and seconds";
  cout<<"\nEnter the hours:";
  cin>>Hours;
  cout<<"Enter Minutes:";
  cin>>Minutes;
  cout<<"Enter Seconds:";
  cin>>Seconds;
}

 void display()

 {
  cout<<"\n"<<Hours<<":"<<Minutes<<":"<<Seconds<<endl;

}

 void addtime( TIME T1, TIME T2)
 {
    Hours=T1.Hours+T2.Hours;
    Minutes=T1.Minutes+T2.Minutes;
    Seconds=T1.Seconds+T2.Seconds;
 }
 void Normalize()
 {
     Minutes= Minutes + Seconds / 60;
     Seconds = Seconds % 60;

     Hours= Hours + Minutes / 60;
     Minutes= Minutes % 60;
 }
};

int main()

{
 TIME T1, T2, T;
 cout<<"\nEnter T1";                  //default constructor
 T1.getdata();
 cout<<"\n T1:";
 T1.display();
 cout<<"\nEnter T2:";
 T2.getdata();
  cout<<" \nT2:";
 T2.display();

 T.addtime(T1, T2);
 T.Normalize();
 cout<<"\nTotal Time is:";
 T.display();


 TIME T4(10,60,60);
 Time T5(10,60,60);
 T.addtime(T4,T5);
 T.normalize();
 T.display();


 return 0;
}
