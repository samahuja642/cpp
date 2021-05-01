#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum,maxsum=INT_MIN;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            sum+=a[k];
        }
        if(maxsum<sum){
            maxsum=sum;
        }
        sum=0;
    }
    }
    cout<<maxsum<<endl;
    return 0;
}