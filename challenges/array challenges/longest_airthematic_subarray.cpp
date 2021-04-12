// complexity		--      O(n)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=-199,count=1,maxcount=-1;
    for(int i=0;i<n-1;i++){
        if(count>maxcount){
            maxcount=count;
        }
        if(pd=a[i+1]-a[i]){
            count++;
        }
        if(pd!=a[i+1]-a[i]){
            count=1;
        }
    }
    cout<<maxcount<<endl;
    return 0;
}