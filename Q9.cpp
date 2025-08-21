#include<iostream>
using namespace std;

void toBinary(int n){
    if(n==0) return;
    toBinary(n/2);
    cout<<n%2;
}

void toOctal(int n){
    if(n==0) return;
    toOctal(n/8);
    cout<<n%8;
}

void toHex(int n){
    if(n==0) return;
    toHex(n/16);
    int rem = n%16;
    if(rem<10) cout<<rem;
    else cout<< char('A'+(rem-10));
}

int main(){
    cout<<"Binary equivalent ";
    toBinary(8);
    cout<<endl;
    cout<<"Octal equivalent ";
    toOctal(8);
    cout<<endl;
    cout<<"Hex equivalent ";
    toHex(16);
    cout<<endl;
}