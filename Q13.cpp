#include<iostream>
#include<cstring>
#include<unordered_map>


using namespace std;
int main(){
    string arr[]={"apple", "banana", "orange", "apple", "grape", "banana"};
    int n= sizeof(arr)/sizeof(arr[0]);
    unordered_map<string,int>mp;

    for(int i=0;i<n;i++){
        mp[i]++;
    }

    for(auto x:mp){
        if(x.second>1){
            cout<<x.first<<endl;
        }
    }

    

    return 0;
}



