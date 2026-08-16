#include <iostream>
#include <string>
using namespace std;
class library{
    private:
    string Title;
    
    int Price;
    public:
    int BookId;
    void input(){
        cout<<"Enter the Title of the book: "<<endl;
        getline(cin>>ws,Title);
        cout<<"Enter the Book Id: "<<endl;
        cin>>BookId;
        cout<<"Enter the Price of the book: "<<endl;
        cin>>Price;
    }
    void display(){
        cout<<"Title: "<<Title<<endl;
        cout<<"Book Id: "<<BookId<<endl;
        cout<<"Price: "<<Price<<endl;
    }

};
int main(){
    int n;
    int BookId;
    int choice;
    cout<<"Enter the number of books you want to store: "<<endl;
    cin>>n;
    library book[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER DETAILS OF BOOK "<<i+1<<endl;
        book[i].input();
        

    }
    cout<<"DISPLAYING DETAILS OF ALL BOOKS: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"DETAILS OF BOOK "<<i+1 << "\n\n";
        book[i].display();
    }
    cout <<"Do YOU WANT TO SEARCH FOR A BOOK? (1 for YES, 0 for NO): "<<endl;
    cin>>choice;
    if(choice==0){
        cout<<"THANK YOU FOR USING THE LIBRARY MANAGEMENT SYSTEM"<<endl;
    }
    else if(choice==1){
        cout<<"Enter the Book Id you want to search: "<<endl;
        cin>>BookId;
        for(int i=0;i<n;i++){
            if(book[i].BookId==BookId){
                cout<<"BOOK FOUND!"<<endl;
                book[i].display();
                break;
            }
            else{
                cout<<"BOOK NOT FOUND!"<<endl;
            }
        }
    }
    else{
        cout<<"INVALID CHOICE!"<<endl;
    }
    
    return 0;
}

