#include<iostream>
#include<string>
using namespace std;
#include<map>

int main(){
    map<char,int>mp;
    string str;
    cout<<"Enter a string"<<endl;
    cin>>str;
    for(char ch:str){
        if(ch>='a' && ch<='z'){
            ch=ch-'a'+'A';
        }
        if(ch>='A' && ch<='Z'){
            mp[ch]++;
        }
    }

    for(auto x:mp){
        cout<<x.first<<" : "<<x.second<<endl;
    }

    
    
    
}