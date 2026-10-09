//program for a student eligible for scholarship
#include<iostream>
using namespace std;
int main()
{
    int marks,attendance;
    cout<<"-----SCHOLARSHIP----- "<<endl;
    cout<<"    "<<endl;
    cout<<"enter your marks= "<<endl;
    cin>>marks;
    cout<<"enter your attendance percentage: ";
    cin>>attendance;
    if(marks>=90&&attendance>=75)
    {
        cout<<"you qualify for the scholarship! congrats!"<<endl;
    }
    return 0;
}
