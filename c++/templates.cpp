#include<iostream>
using namespace std;
// int add(int a,int b){
//     return a+b;
// }
// float add(float a,float b){
//     return a+b;
// }
// you can use two functions for the same work but why if can do it using templates
template <typename T>
T add(T a,T b){
    return a+b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int x=10;
    int y=20;
    float a=20.20;
    float b=10.20;
    cout<<add(x,y)<<endl;
    cout<<add(a,b);
    return 0;
}