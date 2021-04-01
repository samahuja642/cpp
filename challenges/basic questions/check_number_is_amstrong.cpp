#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number to check amstrong:";
    cin>>n;
    int a=n;
    int sum_cube_digits=0;
    int i=10;
    while(n!=0){
        sum_cube_digits+=((n%i)*(n%i)*(n%i));
        n=(n/i);
    }
    if(sum_cube_digits==a){
        cout<<"number is ambigious"<<endl;
    }
    else{
        cout<<"number is not ambigious"<<endl;
    }
    return 0;
}