#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
  
    int n;

    cout<<"Enter number of student (max 10)";
    cin>>n;

    vector<string>nameOfStudent(n);

    cout<<"Enter the "<<n<<" names "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>nameOfStudent[i];
    }

    sort(nameOfStudent.begin(),nameOfStudent.end());

    cout<<endl<<"Sorted arrays "<<endl;

    for(int i=0;i<n;i++){
        cout<<nameOfStudent[i]<<endl;
    }

    return 0;
}