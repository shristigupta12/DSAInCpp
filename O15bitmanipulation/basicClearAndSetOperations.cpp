#include<iostream>

using namespace std;

void clearBit(int &n, int i){
    int mask = (1<<i);
    mask = (~mask);
    n = (n&mask);
}
void setBit(int &n, int i, int v){
    clearBit(n, i);
    n = (n|(v<<i));
}

int main() {
    int n = 16;
    setBit(n, 3, 1);
    cout<<n<<endl;
    return 0;
}