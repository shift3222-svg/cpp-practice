#include<iostream>
#include<string>
#include <vector>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    float marks;
    public:
    void input(){
        cout<<"Enter roll number: ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    };
    void display(){
        cout<<rollno<<"\t"<<name<<"\t"<<marks<<endl;
        
    };
    float getMarks(){
        return marks;
    }
};
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    vector<student> s(n);
    for(int i=0;i<n;i++){

        cout<<"student "<<i+1<<endl;
        s[i].input();
    }
    cout<<"Roll No\tName\tMarks"<<endl;
    float highest=s[0].getMarks();
    float lowest=s[0].getMarks();
    float sum=0;
    for(int i=0;i<n;i++){

        s[i].display();
        if(s[i].getMarks()>highest){
            highest=s[i].getMarks();
        }
        if(s[i].getMarks()<lowest){
            lowest=s[i].getMarks();
        }
        sum=sum+s[i].getMarks();

    }
    float average=sum/n;
    cout<<"Highest marks: "<<highest<<endl;
    cout<<"Lowest marks: "<<lowest<<endl;
    cout<<"Average marks: "<<average<<endl;

    return 0;
}