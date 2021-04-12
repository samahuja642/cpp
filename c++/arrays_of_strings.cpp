#include<iostream>
#include<vector>
#include<string>
#include<array>
using namespace std;
int main()
{
    // method 01 using pointers
    // const char *colour[4]={"yellow","red","green","blue"};
    // for(int i=0;i<4;i++){
    //     cout<<colour[i]<<endl;
    // }


    // method 02 using 2-D arrays
    // char colour[4][10]={"yellow","red","green","blue"};
    // for(int i=0;i<4;i++){
    //     cout<<colour[i]<<endl;
    // }


    // method 03 using string
    // string colour[4]={"yellow","red","green","blue"};
    // for(int i=0;i<4;i++){
    //     cout<<colour[i]<<endl;
    // }


    // method 04 using vector class
    // vector <string> colour {"yellow","red","blue"};
    // colour.push_back("green");
    // for(int i=0;i<colour.size();i++){
    //     cout<<colour[i]<<endl;
    // }


    // method 05 using array class
    array <string,4>colour{"yellow","red","green","blue"};
     for(int i=0;i<colour.size();i++){
        //  if this is used as [0][i] then it will treat 1st array and subsequent i is varying in that only.
        // in this case array is changing and first element of every array is printed
        // cout<<colour[i][0]<<endl;
        cout<<colour[i]<<endl;
    }
    return 0;
}