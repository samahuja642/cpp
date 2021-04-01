#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number to check that it is prime or not:";
    cin>>n;
    int count=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==1){
        cout<<"it is not a prime number"<<endl;
    }
    else{
        cout<<"it is a prime number"<<endl;
    }
    return 0;
}