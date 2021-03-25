#include<iostream>
using namespace std;
void print(int a){
    cout<<"this is the integer argument print function "<<a;
}
void print(float b){
    cout<<"this is the float argument print function "<<b;
}
int main()
{
    int a=35;
    float b=56;
    print(a);
    cout<<endl;
    print(b);
    return 0;
}