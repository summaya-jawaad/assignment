//program to check a carrefour customer gets a discount cause of bill
#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"enter your shopping amount in Rs: ";
    cin>>amount;
    if(amount>=5000)
    {
    	cout<<"        "<<endl;
    	cout<<"dear customer.."<<endl;
       cout<<"You get a 15% discount on your bill!"<<endl;
    }
    return 0;
}
