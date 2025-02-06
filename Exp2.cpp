#include<iostream>
#include<string>
using namespace std;

class employee
{
    public:
        int id;
        string name;
        float basic_salary;
        float bonus;


        float calculatetotalsalary()
        {
            return basic_salary + bonus;
        }
        void display()
        {
            cout<<"employee id:"<<id<<endl;
            cout<<"employee name:"<<name<<endl;
            cout<<"basic salary"<<basic_salary<<endl;
            cout<<"bonus"<<bonus<<endl;
            cout<<"total salary"<<calculatetotalsalary()<<endl;
        }
};


                int main()
              {
                 employee emp;
                  cout<<"enter employee id";
                  cin>> emp.id;
                  cout<<"enter employee name";
                   cin.ingnore();
                   getline(cin, emp.name);
                  cin>>emp.name;
                  cout<<"enter basic salary";
                  cin>>emp.basic_salary;
                  cin>>emp.basic_salary;
                  cout<<"enter bonus";
                  cin>>emp.bonus;

                  emp.display();

                  return 0;
              }
