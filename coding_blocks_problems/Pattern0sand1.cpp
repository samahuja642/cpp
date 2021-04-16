#include<iostream>
using namespace std;
int main(){
    // for faster program
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //
    int n;
    cin>>n;
    int crap;
    for(int i=1;i<=n;i++){
        if(i&1==1){
            crap=1;
        }
        else{
            crap=0;
        }
        for(int j=1;j<=(2*i-1);j++){
                cout<<crap;
            if(crap==0){
                crap=1;
            }
            else if(crap==1){
                crap=0;
            }
        }
        cout<<endl;
    }
    return 0;
}