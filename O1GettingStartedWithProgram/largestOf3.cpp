#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin>>a;
	cin>>b;
	cin>>c;
	int max = a;
	if(b>a && b>c){
		max = b;
	}
	if(c>a && c>b){
		max = c;
	}
	cout<<max;
	return 0;
}