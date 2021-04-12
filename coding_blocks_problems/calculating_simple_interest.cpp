#include<iostream>
using namespace std;
int main()
{
    int p,r,t;
    cout<<"enter value of principle rate and time\n";
    cin>>p>>r>>t;
    float simple_interest=(p*r*t)/100;
    cout<<"simple interest is "<<simple_interest<<endl;
    return 0;
}