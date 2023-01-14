# include<iostream>
using namespace std;
bool greaterNumber (int num1 , int num2 , int num3);
main()
{
    int num1;
    int num2;
    int num3;
    bool result;
    cout<<"entre first number....";
    cin>>num1;
    cout<<"entre seconf number....";
    cin>>num2;
    cout<<"entre third  number....";
    cin>>num3;
     result = greaterNumber (num1 , num2 , num3);
     if (result == 1)
     {
        cout<<"yes";
     }
    else
    {
        cout<<"no";
    } 
}
bool greaterNumber (int num1 , int num2 , int num3)
{
    bool result;
    if(num1 == num2  && (num1 == num3  &&  num2 == num3) )
    {
        result = true;
    }
    else 
    {
        result = false;
    }
    return result;
}