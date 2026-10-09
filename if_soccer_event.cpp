//program to check if person is allowed to participate in a soccer event
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"-----SOCCER EVENT!----- ";
    cout<<"    ";
    cout<<"enter your age: ";
    cin>>age;
    if(age>=18)
    {
        cout<<"yes! you are eligible to participate in the soccer event."<<endl;
    }
    return 0;
}
