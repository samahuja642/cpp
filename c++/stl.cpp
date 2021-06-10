#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
bool f(int x,int y){
    return x > y;
}
void vector_demo(){
    // sorting 
    vector<int>v={1,2,3,4,1,2,5};
    sort(v.begin(),v.end());//O(N logN)
    // 1,1,2,2,3,4,5
    //binary_search O(logN)
    bool present=binary_search(v.begin(),v.end(),3);
    cout<<present<<endl;//true
    present=binary_search(v.begin(),v.end(),6);
    cout<<present<<endl;//false
    v.push_back(99);
    present=binary_search(v.begin(),v.end(),99);
    cout<<present<<endl;//true
    v.push_back(99);
    v.push_back(99);
    v.push_back(99);
    v.push_back(999);
    //lower bound and upper bound are strict
    // difference between upper bound and lower bound of a value tells us that how many times one value is repeating 
    vector<int>::iterator it=lower_bound(v.begin(),v.end(),99);//>=
    vector<int>::iterator it1=upper_bound(v.begin(),v.end(),99);//<
    cout<<*it<<" "<<*it1<<endl;
    cout<<it1 - it<<endl;
    sort(v.begin(),v.end(),f);
    // vector<int>::iterator it3;
    // for(it3=v.begin();it3!=v.end();it3++){
    //     cout<<*it3<<" ";
    // }
    // we can also do it like that as shown below
    for(int &x: v){//passing by reference
        x++;
    }
    for(int x: v){
        cout<<x<<" ";
    }
}
void set_demo(){
    set<int>s;//O(log N)
    s.insert(10);
    s.insert(15);
    s.insert(-5);
    s.insert(-1);
    for(int x:s){
        cout<<x<<" ";
    }
    auto it= s.find(-1);
    if(it==s.end()){
        cout<<"\nit is not present";
    }
    else{
        cout<<"\nit is present";
    }
    auto it2=s.upper_bound(-1);
    auto it3=s.upper_bound(0);
    cout<<*it2<<" "<<*it3<<endl;
    auto it4=s.lower_bound(-5);
    if(it4==s.begin()){
        cout<<"oops nothing like that exists"<<endl;
    }
}
void mapdemo(){
    map<int,int>a;
    a[1]=100;
    a[2]=200;
    a[3]=50;
    a[4]=250;
    a[12031154]=-50;
    map<char,int>chk;
    string x="samarth ahuja";
    for(char c:x){
        chk[c]++;
    }
    cout<<chk['a']<<" "<<chk['z']<<endl;
}
void powerstl(){
    // add[2,3]
    // add[10,20]
    // add[300,400]
    // add[401,450]
    // {a,b} ,{c,d},if a>c first one is greater and if they both are equal then compare b and d
    set<pair<int,int>>s;
    s.insert({2,3});
    s.insert({10,20});
    s.insert({300,400});
    s.insert({401,450});
    int point =11 ;
    auto it=s.upper_bound({point,INT_MAX});
    it--;
    pair<int ,int >current = *it;
    if(it==s.begin()){
        cout<<"it is not present";
    }
    else if(current.first<=point&&point<=current.second){
        cout<<"yes it is present in this interval "<<current.first<<" , "<<current.second<<endl;
    }
    else{
        cout<<"it is not present";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    powerstl();
    return 0;
}