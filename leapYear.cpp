#include<iostream>
using namespace std;

int main()
{
    int year;
    cin>>year;

    if(year % 400 ==0)
    {
        cout<<year<<" is Leap Year."<<endl;
    }
    else if(year % 100 ==0)
    {
        cout<<year<<" is Leap Year."<<endl;
    }
    else if(year % 4 ==0)
    {
        cout<<year<<" is Leap Year."<<endl;
    }
    else
    {
        cout<<year<<" is not Leap Year."<<endl;
    }

    return 0;
}
