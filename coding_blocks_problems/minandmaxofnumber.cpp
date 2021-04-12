#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int min=INT_MAX;
    int max=INT_MIN;
    int no;
    for(int i=0;i<n;i++){
        cin>>no;
        if(no<min){
            min=no;
        }
        if(no>max){
            max=no;
        }
        cout<<"min so far till now is "<<min<<endl;
        cout<<"max so far till now is "<<max<<endl;
    }
    return 0;
}