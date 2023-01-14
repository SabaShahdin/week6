# include <iostream>
# include <cmath>
using namespace std;

main()
{
    string year;
    int noOfHoliday;
    int travelWeekend;
    int volleyBallOnHolidays;
    int freeWeekends ;
    int playOnWeekends;
    int totalPlay;
    int playInLeapYear;
    int totalPlayInLeapYear;
    cout<<"entre the type of year...";
    cin>>year;
    cout<<"entre no of holidays he has in an year...";
    cin>>noOfHoliday;
    cout<<"entre travel weekends...";
    cin>>travelWeekend;
    volleyBallOnHolidays = noOfHoliday * (0.667);
    int noOfWeekend = 48 ;
    freeWeekends = 48 - travelWeekend;
    playOnWeekends = freeWeekends * ( 0.75);
    totalPlay = volleyBallOnHolidays + playOnWeekends + travelWeekend;
    totalPlay = ceil(totalPlay);
    if(year == "normal")
    {
        cout<<"he plays volley ball "<<totalPlay<<"time in a year";
    }
    if(year == "leap")
    {
        playInLeapYear = totalPlay * 0.15;
        totalPlayInLeapYear = totalPlay + playInLeapYear;
        cout<<"he plays volley ball "<<totalPlayInLeapYear<<" time in a leap year";
    }
    
}