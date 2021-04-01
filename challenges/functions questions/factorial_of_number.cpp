#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    if(n==0||n==1){
        fact*=1;
    }
    else{
        fact*=n*factorial(n-1);
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter a number whose factorial you want to find:";
    cin>>n;
    cout<<factorial(n);
    return 0;
}