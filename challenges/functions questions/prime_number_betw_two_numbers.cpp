#include <iostream>
#include <cmath>
using namespace std;
void prime(int a, int b)
{
    
    for (int j = a; j <= b; j++)
    {
        int count=0;
        for (int i = 2; i <= sqrt(j); i++)
        {
            if(j%i==0){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<j<<" ";
        }
    }
}
int main()
{
    int a, b;
    cout << "enter a starting number:";
    cin >> a;
    cout << "enter a ending number:";
    cin >> b;
    prime(a,b);
    return 0;
}