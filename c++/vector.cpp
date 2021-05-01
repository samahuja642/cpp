#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    vector<int> v(10);
    for(int i=0;i<v.size();i++){
        v[i]=i*10;
        cout<<v[i]<<endl;
    }
    if(v.empty()==0){
        cout<<"vector is not empty"<<endl;
    }
    else{
        cout<<"vector is empty"<<endl;
    }
    v.push_back(-1);
    cout<<v[10]<<endl;
    v.resize(15);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    vector<int>v1=v;
    return 0;
}