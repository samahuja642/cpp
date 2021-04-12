#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int n;
	while(t--){
	cin>>n;
	int p=1;
	int ans=0;
	int r;
	while(n>0){
		r=n%10;
		ans=ans+r*p;
		p*=2;
		n/=10;
	}
	cout<<ans<<endl;
	}
	return 0;
}