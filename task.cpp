# include<iostream>
using namespace std;
int isGreater(int num1 , int num2 , int num3);
main()
{
    int num1;
    int num2;
    int num3;
    int result;
    cout<<"entre first number";
    cin>>num1;
    cout<<"entre second number";
    cin>>num2;
    cout<<"entre third number";
    cin>>num3;
    result = isGreater(num1 , num2 , num3);
    if(result == 0)
    {
        cout<<" invalid input  ";
    }
    else
    {
      cout<<"greater number is   "<<result;
    }
}
int isGreater(int num1 , int num2 , int num3)
{   int greater;
    if(num1 > num2  && num1>num3)
    {
       greater =  num1; 
    }
    else if(num2 >num1 && num2>num3)
    {
        greater = num2;
    }
    else if(num3>num1 &&num3>num2)
    {
        greater =  num3;
    }
    else
    {
        greater = 0;
    }
    return greater;
}