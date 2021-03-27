#include<iostream>
using namespace std;
class sally{
    public:
    ~sally(){
        cout<<"hey you killed me. why?"<<endl;
    }
};
int main()
{
    sally a;
    return 0;
}