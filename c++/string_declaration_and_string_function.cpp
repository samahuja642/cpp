#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // ways for declaration
    string a(5,'n');
    cout<<a<<endl;
    string b;
    getline(cin,b);
    cout<<"my name is "<<b<<endl;
    string s1="fam";
    string s2="ily";
    s1.append(s2);
    cout<<s1<<endl;
    // istead of that we can do like that also
    s1=s1+s2;
    cout<<s1<<endl;
    string x;
    string y;
    cin>>x;
    cin>>y;
    if(!x.compare(y)){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"strings are not equal"<<endl;
    }
    x.clear();//this function is to clear string
    if(x.empty()){
        cout<<"string is empty"<<endl;
    }
    else{
        cout<<"string is not empty"<<endl;
    }
    if(y.empty()){
        cout<<"string is empty"<<endl;
    }
    else{
        cout<<"string is not empty"<<endl;
    }
    string str="nincompoop";
    str.erase(3,3);
    cout<<str<<endl;
    cout<<str.find("poop")<<endl;
    // find function will tell us that where is starting point index of string.
    str.insert(3,"lool");
    cout<<str<<endl;
    cout<<str.size()<<endl;//length() size() can be replaced as they work same.
    string g=str.substr(6,4);
    cout<<g<<endl;
    string integer="785";
    int intg=stoi(integer);
    cout<<intg+5<<endl;
    int r=55;
    cout<<to_string(r)+"22"<<endl;
    sort(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}