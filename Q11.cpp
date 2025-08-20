#include<iostream>
#include<string>
using namespace std;

class Employee {
    private: 
        string firstName;
        string lastName;
        double monthlySalary;

    public:
        Employee(string fName, string lName, double sal){
            firstName = fName;
            lastName = lName;
            monthlySalary = sal;
        }

        void setSalary(double sal){
            if(sal<0) sal=0;
            monthlySalary = sal;
        }

        double getYearlySalary() const{
            return monthlySalary*12;
        }

        void display() const{
            cout<<"Name: "<<firstName<<" "<<lastName<<endl;
            cout<<"Monthly salary: "<<monthlySalary<<endl;
            cout<<"Yearly Salary: "<<getYearlySalary()<<endl;
            cout<<endl;
        }

        void giveRaise(double percent){
            monthlySalary += monthlySalary * (percent/100);
        }
};

int main(){
    Employee emp1("xyz","bhj",1500);
    Employee emp2("jon","kjl",4500);

    cout<<"Initial Salaries "<<endl;

    emp1.display();
    emp2.display();

    emp1.giveRaise(10);
    emp2.giveRaise(10);

    cout<<"After 10% hike"<<endl;
    emp1.display();
    emp2.display();

    return 0;
}