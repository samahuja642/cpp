#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout<<"enter n in nCr:";
    cin>>n;
    cout<<"enter r in nCr:";
    cin>>r;
    int a=n-r;
    n=factorial(n);
    r=factorial(r);
    a=factorial(a);
    cout<<n/(r*a)<<endl;
    return 0;
}