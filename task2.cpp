# include<iostream>
using namespace std;
float discount (float amount , string day , string month);
main()
{
    float amount;
    string day;
    string month;
    float payable;
    cout<<"entre amount payable..";
    cin>>amount;
    cout<<"entre day ..";
    cin>>day;
    cout<<"entre month ...";
    cin>>month;
    payable = discount (amount , day , month);
    cout<<"discount is .."<<payable ;
}
float discount (float amount , string day , string month)
{
    float payable;
    if (day == "sunday" && ( month == "october" || month == "march" || month == "august"))
    {
        payable = amount - (amount * 0.10);
    }
    else if(day == "monday" && (month == "november" || month == "december"))
    {
        payable = amount - (amount * 0.05);
    }
    else
    {
       payable = amount;
    }
    return payable;
}