#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a total numbers are given"<<endl;
    cin>>n;

    int arr[n]={0};
    cout<<"Now enter a number that you want";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    int max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The max number is "<<max;
}
