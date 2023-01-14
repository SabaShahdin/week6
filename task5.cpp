# include<iostream>
using namespace std;
float totalIncome(string screen , int rows, int columns);
main()
{
    int rows;
    int columns;
    string screen;
    float price;
    cout<<"entre number of rows..";
    cin>>rows;
    cout<<"entre number of columns...";
    cin>>columns;
    cout<<"entre scree type...";
    cin>>screen;
    price = totalIncome(screen , rows ,columns);
    cout<<"price of the cinema is..."<<price;

}
float totalIncome(string screen , int rows, int columns)
{
    float price;
    float area;
    area = rows * columns;
    if(screen == "premiere")
    {
      price = area * 12.00;
    }
    else if(screen == "normal")
    {
       price = area * 7.50;  
    }
    else if(screen == "discount")
    {
        price = area * 5.00;
    }
    return price;
}