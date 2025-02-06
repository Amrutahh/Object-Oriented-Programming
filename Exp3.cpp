
#include<iostream>
using namespace std;

class WeatherReport
{
private:
    int day_month,high_temp,low_temp,amount_rain,amount_snow;
public:
    WeatherReport() //Default Contrcutor
    {
        day_month=0;
        high_temp=0;
        low_temp=0;
        amount_rain=0;
        amount_snow=0;
    }

    void accept()
    {
        cout<<"\nEnter the day of month: ";
        cin>>day_month;
        cout<<"\nEnter the high temperature: ";
        cin>>high_temp;
        cout<<"\nEnter the low temperature: ";
        cin>>low_temp;
        cout<<"\nEnter the amount of rain: ";
        cin>>amount_rain;
        cout<<"\nEnter the amount of snow: ";
        cin>>amount_snow;
    }

    void display()
    {
        cout<<"\n"<<day_month<<"\t"<<high_temp<<"\t"<<low_temp<<"\t"<<amount_rain<<"\t"<<amount_snow<<endl<<endl<<"\n";
    }

    void average(WeatherReport w[31], int n)
    {
        int sumht=0, sumlt=0, sumrain=0, sumsnow=0, i;
        float aht, alt, arain, asnow;

        for (i=0;i<n;i++)
        {
            sumht=sumht+w[i].high_temp;
            sumlt=sumlt+w[i].low_temp;
            sumrain=sumrain+w[i].amount_rain;
            sumsnow=sumsnow+w[i].amount_snow;
        }

        alt=sumlt/n;
        aht=sumht/n;
        arain=sumrain/n;
        asnow=sumsnow/n;

        cout<<"\nAverage of Rain:"<<arain;
        cout<<"\nAverage of Snow:"<<asnow;
        cout<<"\nAverage of High Temperature:"<<aht;
        cout<<"\nAverage of Low Temperature:"<<alt<<endl;
    }
};

int main()
{
    int choice, n=0, i;
    WeatherReport w[31]; //Maximum 31 days for a month
    WeatherReport w1;

    do
    {
      cout<<"\n\n......................Weather Report......................";
      cout<<"\n Enter Your Choice: ";
      cout<<"\n 1.Enter Weather Data"<<"\n 2.Display Weather Report"<<"\n 3. Get Average Weather Report"<<"\n 4.Exit"<<endl;
      cin>>choice;

      switch(choice)
      {
      case 1:
        cout<<"\nEnter the number of days: ";
        cin>>n;
        cout<<"\n.....................Enter the Data...................";
        for(i=0;i<n;i++)
        {
            w[i].accept();
        }
        break;

        case 2:
       cout<<"\n Day of Month"<<" "<<"High temp"<<" "<<"Low temp"<<" "<<"Amount Rain"<<" "<<"Amount snow";
       for(i=0;i<n;i++)
        {
            w[i].display();
        }
         break;

        case 3:
            w1.average(w,n);
            break;
      }
    }  while(choice!=4);
       return 0;
}















