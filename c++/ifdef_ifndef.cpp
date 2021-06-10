#include<iostream>
#define max 2
using namespace std;
int main(){
    #ifdef max
    cout<<"what the hell!"<<endl;
    #else
    cout<<"how are u?"<<endl;
    #endif
    #ifndef min
    cout<<"where are you?"<<endl;
    #else
    cout<<"are u in bangalore?"<<endl;
    #endif
    return 0;
}