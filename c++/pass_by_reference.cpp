#include<iostream>
using namespace std;
void passbyreference(int *x){
    *x=68;
}
void passbyvalue(int x){
    x=54;
}
int main()
{
    int s=10;
    passbyvalue(s);
    cout<<s<<endl;
    passbyreference(&s);
    cout<<s<<endl;
    cout<<"this is because i have passed s by reference and it changed the value at that address\n";
    return 0;
}