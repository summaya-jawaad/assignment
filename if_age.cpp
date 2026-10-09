//program to enter age then it will tell you if youre adult or kid
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age=";
    cin>>age;
    if(age>=18)
        cout<<"you are an adult.";
    if(age<18)
        cout<<"you are a kid.";
    return 0;
}
