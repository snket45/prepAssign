#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character";
    cin>>c;
    if(c>='A' && c<='Z'){
        cout<<"You entered uppercase character";
    }
    else if(c>='a' && c<='z'){
        cout<<"You entered lowercase character";
    }
    else if(c>='0' && c<='9'){
        cout<<"You entered number";
    }
    else{
        cout<<"You enterd other character";
    }
}