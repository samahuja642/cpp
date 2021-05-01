#include<iostream>
#include<map>
using namespace std;
//it can't be editted it will disturb the structure of tree.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    pair<char,int>x;
    map<char,int>m;
    for(char ch='a';ch<='z';ch++){
        x.first=ch;
        x.second=(int)ch;
        m.insert(x);
    }
    map<char,int>::iterator it=m.begin();
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second;
    }
    it=m.find('j');
    cout<<it->second;
    return 0;
}