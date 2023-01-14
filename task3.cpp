# include<iostream>
using namespace std;
string checkTitle (char gender , int age);
main()
{
    char gender;
    int age;
    string title;
    cout<<"entre your gender....";
    cin>>gender;
    cout<<"entre your age....";
    cin>>age;
    title = checkTitle (gender , age);
    {
      cout<<"title is ..."<<title;
    }

}
string checkTitle (char gender , int age)
{
    string title;
    if(gender == 'm'&&  age >= 16)
    {
        title = "Mr.";
    }
    else if(gender == 'm' && age< 16)
    {
        title = "Master";
    }
    else if (gender == 'f' && age >= 16)
    {
        title = "Ms.";
    }
    else if(gender == 'f' && age < 16)
    {
        title = "Miss.";
    }
    else
    {
        title = "invalid input";
    }
    return title;
}