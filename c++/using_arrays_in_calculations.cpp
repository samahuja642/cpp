#include<iostream>
using namespace std;
int main()
{
    int tuna[5]={20,53,54,57,890};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=tuna[i];
    }
    cout<<sum<<endl;
    return 0;
}