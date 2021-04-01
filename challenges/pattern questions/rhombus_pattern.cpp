#include<iostream>
using namespace std;
int main()
{
    for(int i=4;i>=0;i--){
        for(int j=5+i;j>0;j--){
        if(j>5){
            cout<<" ";
        }
        else{
            cout<<"* ";
        }
        }cout<<endl;
    }
    return 0;
}