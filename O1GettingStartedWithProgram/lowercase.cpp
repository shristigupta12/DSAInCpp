#include<iostream>
using namespace std;
int main() {
	char ch;
	cin>>ch;
	if(int(ch)>=65 && int(ch)<=90){
		cout<< "UPPERCASE";
	}
	else if(int(ch)>=97 && int(ch)<=122){
		cout<<"LOWERCASE";
	}else{
		cout<<"INVALID";
	}
	return 0;
}