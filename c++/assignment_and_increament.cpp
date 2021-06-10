#include<iostream>
using namespace std;
int main()
{
    int x=34;
    x+=6;
    cout<<x<<endl;
    int y=5;
    cout<<"this is the pre increment operator"<<++y<<endl;
    cout<<"this is the post increment operator"<<y++<<endl;
    return 0;
}