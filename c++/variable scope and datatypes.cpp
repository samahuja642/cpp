#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    cout<<glo;
}
int main()
{
    int glo=5;
    int a=5;
    int b=6;
    float pi=3.14;
    cout<<"this is variables scope and datatypes code\n";
    cout<<"value of a is "<<a;
    cout<<"\nvalue of b is "<<b;
    cout<<"\nvalue of pi is "<<pi<<"\n";
    sum();
    cout<<"\n"<<glo;
    char cha;
    cin>>cha;
    cout<<cha;
    bool t= a==b;
    cout<<t;

    return 0;
}