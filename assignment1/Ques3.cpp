#include <iostream>
#include <string>
using namespace std;
class employee{
    public:


        int employeeId;
        int salary;
        void input(){
        cout<<"Enter the employee id:"<<endl;
        cin>>employeeId;
        cout<<"Enter the salary:"<<endl;
        cin>>salary;
        }
        void display(){
        cout<<"Employee id:"<<employeeId<<endl;
        cout<<"Salary:"<<salary<<endl;
        }
        int getSalary(){
            return salary;
        }

    
};
int main(){
    int n;
    cout<<"Enter the number of employees:"<<endl;
    cin>>n;
    employee *emp= new employee[n];
    for (int i=0;i<n;i++){
        cout<<"\nEnter details of employee "<<i+1<<":"<<endl;
        (emp+i)->input();
    
        
    }
    int totalSalary = 0;
    for (int i=0;i<n;i++){
        totalSalary += (emp+i)->getSalary();
        cout<<"\nDetails of employee "<<i+1<<":"<<endl;
        (emp+i)->display();
    }
    cout<<"\nTotal salary of all employees:"<<totalSalary<<endl;
    delete[] emp;
    return 0;
}

