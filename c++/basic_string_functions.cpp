#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    a.push_back('s');
    // it will push a copy to the last of the string
    cout<<a<<endl;
    a.pop_back();
    // pop_back will delete characters from last 
    cout<<a<<endl;
    a.resize(5);
    cout<<a<<endl;
    cout<<"capacity of string is "<<a.capacity()<<endl;
    cout<<"length of the string is "<<a.length()<<endl;
    a.shrink_to_fit();
    cout<<"the new capacity of string is now "<<a.capacity()<<endl;
    // begin(),end(),rbegin(),rend()   --->>iterator functions
    // append(other_string),erase(starting_index,length),substr(starting_index,length)
    string b="that's what it is ";
    b.append(a);
    cout<<b<<endl;
    b.erase(1,4);//index , length that should be deleted
    cout<<b<<endl;
    cout<<b.substr(1,6)<<endl;
    // find("for") and replace("are the")
    // rfind() is used to find last iteration of the term 
    string c="geekforgeeks";
    int index = c.find("for");//find will return index at which it was found
    c.replace(index,3,"are the ");
    cout<<c<<endl;
    // iterator can only be defined like that
    std::string::reverse_iterator i;
    for(i=c.rbegin();i!=c.rend();i++){
        cout<<*i;
    }
    cout<<endl;
    std::string::iterator j;
    for(j=c.begin();j!=c.end();j++){
        cout<<*j;
    }
    cout<<endl;
    // swap function takes only one argument and swap s1 and s2 two strings
    string s1,s2;
    cin>>s1>>s2;
    s1.swap(s2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    // copy function will copy from index 0 to length of 5 from s1 string to ch
    char ch[13]="ahuja's";
    s1.copy(ch,5,0);
    cout<<ch<<endl;
    return 0;
}