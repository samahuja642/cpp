#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    switch(age){
        case 16:
        cout<<"you can drive now"<<endl;
        break;
        case 18:
        cout<<"you can buy lottery ticket"<<endl;
        break;
        case 21:
        cout<<"do your work now you are mature now"<<endl;
        break;
        default:
        cout<<"sorry you didn't need to do anything";
    }
    return 0;
}