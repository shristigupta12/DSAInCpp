#include<iostream>
#include<cstring>

using namespace std;

bool compare(char a[], char b[]){
    int i=0;
    int j=0;
    while(a[i]!='\0' and b[j]!='\0'){
        if(a[i]!=b[j]){
            break;
        }
        i++;
        j++;
    }
    if(a[i]=='\0' and b[j]=='\0'){
        return true;
    }
    return false;
}

void concat(char a[], char b[]){
    int i = strlen(a);
    int j = 0;
    while(b[j]!='\0'){
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]=b[j];
}

int main() {
    char a[500];
    char b[500];
    cin.getline(a, 500);
    cin.getline(b, 500);

    concat(a,b);
    cout<<a<<endl;
    //or
    strcat(a,b);  
    cout<<a<<endl;

    if(compare(a,b)){
        cout<<"Match"<<endl;
    }else{
        cout<<"Not a match"<<endl;
    }
    //or
    if(strcmp(a,b)==0){
        cout<<"Match"<<endl;
    }else{
        cout<<"Not a match"<<endl;
    }
    return 0;
}