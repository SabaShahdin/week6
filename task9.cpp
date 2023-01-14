# include<iostream>
using namespace std;
bool isSimilar  (string num1 , string num2 );
main()
{
    string num1;
    string num2;
    bool result;
    cout<<"entre first string....";
    cin>>num1;
    cout<<"entre seconf string....";
    cin>>num2;
     result = isSimilar  (num1 , num2);
     if (result == 1)
     {
        cout<<"yes";
     }
    else
    {
        cout<<"no";
    } 
}
 bool isSimilar (string num1 , string num2 ) 
{
    bool result;   
    if(num1 == num2  && num2 == num1 )
    {
        result = true;
    }
    else 
    {
        result = false;
    }
    return result;
}