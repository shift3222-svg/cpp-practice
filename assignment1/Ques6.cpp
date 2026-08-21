#include <iostream>
#include <string>
using namespace std;
class student{
    public:
    int RollNo;
    string Name;
    char Gender;
    int Marks;
    void input(){
        cout<<"Enter the Roll Number of the student:"<<endl;
        cin>>RollNo;
        cout<<"Enter the Name of the student:"<<endl;
        getline(cin>>ws,Name);
        cout<<"Enter the Gender of the student (M/F):"<<endl;
        cin>>Gender;
        cout<<"Enter the Marks of the student:"<<endl;
        cin>>Marks;
    }
    void display(){
        cout<<"Roll Number: "<<RollNo<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Gender: "<<Gender<<endl;
        cout<<"Marks: "<<Marks<<endl;
    }
    int getMarks(){
        return Marks;
    }

};
int topper(student *s,int n){
    int highest=0;
    int index=0;
    for(int i=0;i<n;i++){
        if((s+i)->getMarks()>highest){
            highest=(s+i)->getMarks();
            index=i;
        }
    }
    return index;
}


int main(){
    int n;
    int marks=0;
    
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    student *s=new student[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter the details of student "<<i+1<<":"<<endl;
        (s+i)->input();
    }
    
    cout<<"\nDisplaying the details of all students:"<<endl;
    for(int i=0;i<n;i++){
        marks=marks+(s+i)->getMarks();
        cout<<"\nDetails of student "<<i+1<<":"<<endl;
        (s+i)->display();

    }
    
    
    int index=topper(s,n);
    cout<<"****Topper Student****"<<endl;
    (s+index)->display();

    cout<<"Average marks: "<<(float)marks/n<<endl;
    delete[] s;
    return 0;
}