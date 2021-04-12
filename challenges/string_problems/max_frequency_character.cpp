#include<iostream>
using namespace std;
int main()
{
    string sen;
    cin>>sen;
    int a[26]={0};
    int j,k,max=0;
    for(int i=0;i<sen.length();i++){
        j=sen[i]-'a';
        a[j]++;
        if(a[j]>max){
            max=a[j];
            k=j;
        }
    }
    char s=k+'a';
    cout<<s;
    return 0;
}