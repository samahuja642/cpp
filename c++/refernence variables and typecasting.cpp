#include<iostream>
using namespace std;
int c=75;
int main()
{
    // ****************************** build in datatypes *************************
    int a,b,c;
    cout<<"enter the value of a :";
    cin>>a;
    cout<<"enter the value of b :";
    cin>>b;
    c=a+b;
    cout<<"the value of a+b :"<<c<<endl;
    cout <<"the global value of c is "<<::c<<endl;
    // ********** float,double,long double litterals *************
    float d=34.4f;
    long double e=34.4l;
    cout<<"the memory of float is "<<d<<endl<<"the value of long double is "<<e<<endl;
    cout<<"the memory of 34.4 is "<<sizeof(34.4)<<endl<<"you can see here that 34.4 is by default working as a double"<<endl;
    cout<<"the memory of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the memory of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the memory of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"the memory of 34.4l is "<<sizeof(34.4l)<<endl;
    // *************reference variables*****************
    int x=4543;
    int &y=x;
    cout<<x<<endl<<y;
    // *************typecasting*****************
    int u=45;
    float v=46.54;
    cout<<"the value of u is "<<(float)u<<endl;
    cout<<"the value of u is "<<float(u)<<endl;
    cout<<"the value of u is "<<(int)v<<endl;
    cout<<"the value of u is "<<int(v)<<endl;
    return 0;
}