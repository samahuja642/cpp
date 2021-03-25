#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string sentence="aklsjflsf";
    // conver into uppercase
    cout<<'a'-'A'<<endl;
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i]>='a'&&sentence[i]<='z'){
            sentence[i]-=32;
        }
    }
    cout<<sentence<<endl;
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i]>='A'&&sentence[i]<='Z'){
            sentence[i]+=32;
        }
    }
    cout<<sentence<<endl;

    return 0;
}