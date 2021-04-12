#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // loop for rows 1 to n
    for(int i=1;i<=n;i++){
        //for spaces 
        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        // increasing number
        int value=i;
        for(int j=1;j<=i;j++){
            cout<<value;
            value=value+1;
        }
        // decreasing number
        value=value-2;
        for(int j=1;j<=i-1;j++){
            cout<<value;
            value=value-1;
        }
        // print a new line
        cout<<endl;
    }
    return 0;
}