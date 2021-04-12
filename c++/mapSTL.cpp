#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int>marksmap;
    marksmap["samarth"]=93;
    marksmap["sam"]=45;
    marksmap.insert({{"kuru",158},{"kyuara",123}});
    map<string,int>::iterator itr;
    for(itr=marksmap.begin();itr!=marksmap.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<"the size of map is "<<marksmap.size()<<endl;
    cout<<"the maximum size of map is "<<marksmap.max_size()<<endl;
    cout<<"the empty's return value is "<<marksmap.empty()<<endl;
    return 0;
}