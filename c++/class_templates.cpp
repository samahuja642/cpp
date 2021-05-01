#include<iostream>
using namespace std;
template<class T>
class something{
    public:
    T a[2];
    T add();
    something();
};
template<class T>
something<T>::something(){
    cin>>a[0]>>a[1];
}
template<class T>
T something<T>::add(){
    return a[0]+a[1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    something<float> floatsomething;
    cout<<floatsomething.add();
    return 0;
}