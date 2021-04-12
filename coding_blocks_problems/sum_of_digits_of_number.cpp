#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=10;
    int sum=0;
    while(n){
        sum+=n%i;
        n=n/i;
    }
    cout<<sum<<endl;
    return 0;
}