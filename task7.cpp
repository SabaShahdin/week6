# include<iostream>
using namespace std;
float checkCost (string city , string product , float quantity);
main()
{
    float quantity;
    string city;
    string product;
    float price ;
    cout<<"entre quantity you want to buy..";
    cin>>quantity;
    cout<<"entre city where you want to buy...";
    cin>>city;
    cout<<"entre product which you want to buy..";
    cin>>product;
    price = checkCost (city , product  , quantity);
    cout<<"price of  "<<quantity <<product<<"is..."<<price;

}
float checkCost (string city , string product , float quantity)
{
    float price;
    if(product == "coffee" && city == "sofia")
    {
        price = quantity * 0.50;
    }
    else if(product == "water" && city == "sofia")
    {
        price = quantity * 0.80;
    }
    else if(product == "beer" && city == "sofia")
    {
        price = quantity * 1.20;
    }
    else if(product == "sweets" && city == "sofia")
    {
        price = quantity * 1.45;
    }
    else if(product == "peanuts" && city == "sofia")
    {
        price = quantity * 1.60;
    }
    else  if(product == "coffee" && city == "plovdiv")
    {
        price = quantity * 0.40;
    }
    else  if(product == "water" && city == "polvdiv")
    {
        price = quantity * 0.70;
    }
    else if(product == "beer" && city == "polvdiv")
    {
        price = quantity * 1.15;
    }
    else if(product == "sweets" && city == "polvdiv")
    {
        price = quantity * 1.30 ;
    }
    else if(product == "peanuts" && city == "polvdiv")
    {
        price = quantity * 1.50;
    }
    else if(product == "coffee" && city == "varna")
    {
        price = quantity * 0.45;
    }
    else if(product == "water" && city == "varna")
    {
        price = quantity * 0.70;
    }
    else if(product == "beer" && city == "varna")
    {
        price = quantity * 1.10;
    }
    else if(product == "sweets" && city == "varna")
    {
        price = quantity * 1.35;
    }
    else if(product == "peanuts" && city == "varna")
    {
        price = quantity * 1.55;
    }
    else
    {
        price == 0 ;
    }
      return price;
 }

