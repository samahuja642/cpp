#include<iostream>
using namespace std;
int main()
{
    int x=1;
    int number;
    int total=0;
    cout<<"here your program is gettting started"<<endl;
    while(x<=5)
    {
        cout<<"enter a number:";
        cin>>number;
        total+=number;
        x++;
    }
    cout<<"your total is "<<total;
    return 0;
}