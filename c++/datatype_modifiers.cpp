// long ,short,signed,unsigned
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    // long long is preferred over long long 
    int x=INT_MAX;
    cout<<sizeof(x)<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    // this is called wrap around
    // it is also called integer overflow
    x=x+1;
    cout<<x<<endl;
    return 0;
}