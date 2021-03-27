#include<iostream>
using namespace std;
class temp{
    int a=20;
    public:
    void function(){
        a=54;
    }
    void print(){
        cout<<"that's only shit a="<<a<<endl;
    }
    // const void function2(){
    //     a=489;
    // }
    void print2() const{
        cout<<"that's only shit a="<<a<<endl;
        cout<<"that is constant function";
    }

};
int main()
{
    temp f;
    f.function();
    f.print();
    const temp g;
    // const g.function2();
    const g.print2();
    return 0;
}