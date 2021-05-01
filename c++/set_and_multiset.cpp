#include<iostream>
#include<set>
using namespace std;
// set is sorted
// set provides a very quick search
// binary tree

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    set<int>s;
    for(int i=0;i<10;i++){
        s.insert(10-i);
    }
    set<int>::iterator it;
    it=s.find(6);
    s.erase(it);
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    if(!s.count(12)){
        s.insert(12);
        cout<<"done";
    }
    else{
        cout<<"already there";
    }
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    s.clear();
    cout<<s.size();
    
    return 0;
}