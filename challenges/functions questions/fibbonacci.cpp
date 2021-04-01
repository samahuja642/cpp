#include<iostream>
using namespace std;
void fibb(int n){
    int a=0,b=1,temp;
    cout<<a<<" "<<b<<" ";
    while((a+b)<=n){
        cout<<(a+b)<<" ";
        temp=b;
        b=a+b;
        a=temp;
    }
}
int main()
{
    int n;
    cout<<"enter a number till where you want fibbonacci series:";
    cin>>n;
    fibb(n);
    return 0;
}