#include <iostream>
#include <string>
using namespace std;
class inventory{
    private:
    string Name;
    int ProductId;
    public:
    float Price;
    int Quantity;
    void input(){
        cout<<"\nENTER THE PRODUCT NAME:"<<endl;
        getline(cin>>ws,Name);
        cout<<"\nENTER THE PRODUCT ID:"<<endl;
        cin>>ProductId;
        cout<<"\nENTER THE PRICE OF THE PRODUCT:"<<endl;
        cin>>Price;
        cout<<"\nENTER THE QUANTITY OF THE PRODUCT:"<<endl;
        cin>>Quantity;  
    }
    void display(){
        cout<<"\nPRODUCT NAME:"<<Name<<endl;
        cout<<"\nPRODUCT ID:"<<ProductId<<endl;
        cout<<"\nPRICE OF THE PRODUCT:"<<Price<<endl;
        cout<<"\nQUANTITY OF THE PRODUCT:"<<Quantity<<endl;
    }
    float invalue(){
        return Price*Quantity;
    }
};
int main(){
    int n;
    float count=0;
    cout<<"ENTER THE NUMBER OF PRODUCTS YOU WANT TO STORE:"<<endl;
    cin>>n;
    inventory *inv =new inventory[n];
    for(int i=0;i<n;i++){
        cout<<"\nENTER THE DETAILS OF PRODUCT :"<<i+1<<endl;
        (inv + i)->input();

    } 
    for(int j=0;j<n;j++){
        count =count + (inv + j)->invalue();
        cout<<"\nDETAILS OF PRODUCT:"<<j+1<<endl;
        (inv + j)->display();
    }
    cout<<"\nTOTAL VALUE OF INVENTORY IS :"<<count<<endl;
    delete[] inv;
    return 0;
}