# include <iostream>
# include<iomanip>
# include<cmath>
using namespace std;

main()
{
    float budget;
    string catogary;
    int noOfPeople;
    float budgetOnTransport;
    float moneyAfterTransport;
    float  priceOfTickets ;
    float leftPrice;
    cout<<"entre your budget..";
    cin>>budget;
    cout<<"entre the catogary...";
    cin>>catogary;
    cout<<"entre number of people in group...";
    cin>>noOfPeople;
   if(noOfPeople <= 4)
    {
      budgetOnTransport =  budget * 0.75 ;
      moneyAfterTransport = budget - budgetOnTransport;
    }
     else if(noOfPeople >=5 && noOfPeople <= 9)
    {
      budgetOnTransport =  budget * 0.60 ;
      moneyAfterTransport = budget - budgetOnTransport;
    }
    else if(noOfPeople >= 10 && noOfPeople <= 24)
    {
      budgetOnTransport =  budget * 0.50 ;
      moneyAfterTransport = budget - budgetOnTransport;
    }
    else if(noOfPeople >= 25 && noOfPeople <= 49)
    {
      budgetOnTransport =  budget * 0.40 ;
      moneyAfterTransport = budget - budgetOnTransport;
    }
    else if(noOfPeople >= 50)
    {
      budgetOnTransport =  budget * 0.25 ;
      moneyAfterTransport = budget - budgetOnTransport;
    }
      if(catogary == "normal")
      {
        priceOfTickets  = noOfPeople * 249.99;
      }
      if(catogary == "vip")
      {
        priceOfTickets  = noOfPeople * 499.99;
      }
     if(priceOfTickets <= moneyAfterTransport)
        {
           leftPrice = moneyAfterTransport - priceOfTickets;
           cout<<setprecision(2)<<leftPrice;
          cout<<"Yes! You have "<<leftPrice<<" left.";
        }
     if(priceOfTickets >= moneyAfterTransport)
        {
           leftPrice = priceOfTickets - moneyAfterTransport;
           cout <<"Not enough money! You need "<< leftPrice<<" left";
        }
}
