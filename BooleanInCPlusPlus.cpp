#include<iostream>
#include<stdbool.h>

using namespace std;

int main()
{
    int test1 , test2;

    cout<<"Enter Number of First Test: "<<endl;
    cin>>test1;

    cout<<"Enter Number of Second Test: "<<endl;
    cin>>test2;

    bool result=test1>90 && test2>90;

    if(result)
    {
        cout<<"You did Homework "<<endl;
    }
    else
        cout<<"You have Not done Homework "<<endl;

    return 0;
}
