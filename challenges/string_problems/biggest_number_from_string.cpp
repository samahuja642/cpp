#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sent;
    cin>>sent;
    sort(sent.begin(),sent.end(),greater <int>() );
    cout<<sent<<endl;
    return 0;
}