#include <iostream>
using namespace std;
class employee
{
  private:
    char empname[30];
    int empid;
    float basic_salary;
    float bonus;
public:
    void get_emp_details()
    {
    cout<<"enter employee name:";
    cin>>empid;
    cout<<"enter employee basic salary";
    cin>>basic_salary;
    cout<<"enter the bonus:";
    cin>>bonus;
    }
    double calculatetotalsalary()
    {
    return basic_salary+bonus;
    }
    void displayEmployeeDetails()
    {
        cout<<"* Employee Details **"<<endl;

        cout << "Employee Name: " << empname << endl;

        cout << "Employee ID: " << empid << endl;

        cout << "Basic Salary: Rs." << basic_salary << endl;

        cout << "Bonus: Rs." << bonus << endl;

cout << "Total Salary: Rs." << calculatetotalsalary() << endl;
cout<<"***********";
        }
        };

int main() {

employee emp1;

emp1.get_emp_details();

emp1.displayEmployeeDetails();

return 0;
}
