#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float ans=0;
    int i=1;
    while((i*i)<=n){
        i++;
    }
    ans=i-1;
    while((ans*ans)<=n){
        ans+=0.1;
    }
    ans-=0.1;
    cout<<ans<<endl;
    return 0;
}