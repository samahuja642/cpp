#include<iostream>
#include<typeinfo>
using namespace std;
class base{};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    auto x=2;
    auto y=3.4;
    auto z=new base();
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(z).name()<<endl;
    return 0;
}