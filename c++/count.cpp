#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    vector<int>v{1,2,3,4,5,62,3,3,3,1};
    cout<<count(v.begin(),v.end(),3);
    return 0;
}