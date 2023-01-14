# include<iostream>
using namespace std;
float lowestPrice (int numberOfKm , string time);
main()
{
    int numberOfKm;
    string time;
    float price;
    cout<<"entre number of km..";
    cin>>numberOfKm;
    cout<<"time is ....";
    cin>>time;
    price = lowestPrice (numberOfKm , time);
    cout<<"price is ....."<<price;

}
float lowestPrice (int numberOfKm , string time)
{
    float price;
    float priceOfTaxiOnDay;
    float  priceOfTaxiOnNight;
    float priceOfBus;
    float priceOfTrain;
    if(numberOfKm < 20 && time == "day")
    {
      priceOfTaxiOnDay = (numberOfKm * 0.79) + 0.70;
      price = priceOfTaxiOnDay;
    }
    else if(numberOfKm < 20 && time == "night")
    {
        priceOfTaxiOnNight = (numberOfKm * 0.90) + 0.70;
        price = priceOfTaxiOnNight;
    }
    else if(numberOfKm >= 20 && numberOfKm <100)
     {
        priceOfBus = numberOfKm * 0.09;
        price = priceOfBus;
     }
    else if(numberOfKm >= 100)
     {
        priceOfTrain = numberOfKm * 0.06;
        price = priceOfTrain;
     }
     return price;  
}
       