#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&b>=c){
        cout<<a<<"a is the greatest"<<endl;
    }
    else if(b>c&&c>=a){
        cout<<b<<"b is the greatest"<<endl;
    }
    else if(c>b&&b>=a){
        cout<<c<<"c is the greatest"<<endl;
    }
    else{cout<<"more than one are equal"<<endl;}
    return 0;
}//you can give inputs in terminal by < textfile_name.txt
//for > output.txt