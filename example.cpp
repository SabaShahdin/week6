# include<iostream>
using namespace std;

main()
{
    int price;
    string brand;
    cout<<"entre price of the dress   ";
    cin>>price;
    cout<<"entre the brand of the dress  ";
    cin>>brand;
    if(price <= 1500  &&  brand =="outfitters")
    {
       cout<<" buy the dress "<<endl;  
    }
    else
    {
        cout<<" dont buy the dress "<<endl;
    }
}