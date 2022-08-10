#include<iostream>
using namespace std;
int main() {
	int sum=0;
    int n;
	while(true){
		cin>>n;
		sum+=n;
		if(sum<0){
			break;
		}
		cout<<n<<endl;
	}
	return 0;
}