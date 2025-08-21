#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter a number";
    cin>>n;
    if(n==0 || n==1){
        cout<<1;
    }

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of "<< n <<" is "<< fact;
}