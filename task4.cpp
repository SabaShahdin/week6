# include<iostream>
using namespace std;
string checkSpeed (float speed);
main()
{
    float speed;
    string speedCheck;
    cout<<"entre speed of the car...";
    cin>>speed;
    speedCheck = checkSpeed (speed);
    cout<<"speed of the car is... "<<speedCheck;
}
string checkSpeed (float speed)
{
    string speedInfo;
    if(speed <= 10)
    {
        speedInfo = "slow";
    }
    else if(speed > 10 && speed <= 50)
    {
        speedInfo = "average";
    }
    else if(speed > 50 && speed <= 150)
    {
        speedInfo = "fast";
    }
    else if(speed > 150 && speed >= 1000)
    {
        speedInfo = "ultra-fast";
    }
    else
    {
      speedInfo = "extremly fast";
    }
    return speedInfo;
}