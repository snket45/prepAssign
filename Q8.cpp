#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        string rollNo;
        float marks;

    void readData(){
        cout<<"Enter name ";
        cin>>name;

        cout<<"Enter roll number";
        cin>>rollNo;

        cout<<"Enter marks";
        cin>>marks;
    }

    void displayData(){
        cout<<"\nStudent Details:\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number "<<rollNo<<endl;
        cout<<"Marks "<<marks<<endl;
    }

};

int main(){
    Student s;
    s.readData();
    s.displayData();
    return 0;
}
