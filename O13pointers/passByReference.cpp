#include<iostream>

using namespace std;

void withoutReferenceUpdate(int x){
    x = x+1;
}
void withReferenceUpdate(int *x){
    *x = *x+1;
}

int main() {
    int a = 10;

    withoutReferenceUpdate(a);
    cout<<a<<endl;

    withReferenceUpdate(&a);
    cout<<a<<endl;
    
    return 0;
}