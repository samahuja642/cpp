#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x=0,y=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='N'){
            y++;
        }
        else if(s[i]=='S'){
            y--;
        }
        else if(s[i]=='W'){
            x--;
        }
        else if(s[i]=='E'){
            x++;
        }
    }
    cout<<abs(x)+abs(y);
    return 0;
}