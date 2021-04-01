#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int i=10;
    while(n/i!=0){
        cout<<(n%i);
        n=(n/i);
    }
    cout<<n;
    return 0;
}