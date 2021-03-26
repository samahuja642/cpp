#include<iostream>
using namespace std;
int main()
{
    int a[5][4]={{2,3,4,1},{5,64,37,95},{5,2,4,4},{5,4,7,5},{5,6,3,9}};
    // cout<<a[2][1];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}