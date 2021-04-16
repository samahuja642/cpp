#include<iostream>
#include<bits/stdc++.h>
// better than the second one
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            i++;
        }
        else{
            cout<<"unique number is ";
            cout<<a[i]<<endl;
            break;
        }
    }
    return 0;
}