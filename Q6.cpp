#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter rows and columns of first matrix"<<endl;
    cin>>r1>>c1;
    cout<<"Enter rows and columns of second matrix"<<endl;
    cin>>r2>>c2;

    if(c1!=c2){
        cout<<"Matrix multiplication not possible!"<<endl;
        return 0;
    }

    int a[10][10],b[10][10],result[10][10]={0};

    cout<<"Enter element matrix of first matrix"<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter element of second matrix"<<endl;

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }

    // matrix multiplication
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                result[i][j]+= a[i][k]* b[k][j];
            }
        }
    }

    cout<<"Resultant matrix"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}