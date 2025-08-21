#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int a=0;
    int b=1;
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n==1){
        sum=0;
    }
    if(n==2){
        sum=1;
    }
    for(int i=3;i<=n;i++){
        sum=a+b; //1
        a=b;     //1
        b=sum;   //1
    }
    cout<<"The Fibonacci series is "<<sum;
}