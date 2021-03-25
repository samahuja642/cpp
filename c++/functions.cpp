#include <iostream>
using namespace std;
void printsomething(); //instead of using it we make function before making main main function
int main()
{
	printsomething();
	return 0;
}
void printsomething()
{
	cout << "hi i am here" << endl;
}
