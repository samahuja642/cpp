#include<iostream>
using namespace std;
// dafault arguments are always at right side of the inputs
// b is the default argument here if user will not give any input it will give default value to b
int length(int l,int b=0){
    return l*b;
}
int main()
{
    cout<<length(5,4);
    return 0;
}