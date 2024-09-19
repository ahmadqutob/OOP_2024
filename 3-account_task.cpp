#include <iostream>

using namespace std;

class account{
public:
    //attributes
    int id;
    string name;
    int balance;
    //Methods
    void printInfo(){
        cout<< id <<" "<<name <<" "<<balance <<" ";
    }
    int withrow(int with){

       return balance -= with;
    }

    int deposite(int depo){

       return balance += depo;
    }
    };
int main()
{
     account Emp_accounts[1];

     for(int i=0;i<1;i++){
        cin>>Emp_accounts[i].id;
        cin>>Emp_accounts[i].name;
        cin>>Emp_accounts[i].balance;
     }
        for(int i=0;i<1;i++){
        cout<<" id: "<< Emp_accounts[i].id <<" name: "<<Emp_accounts[i].name<<" balance: "<<Emp_accounts[i].balance<<endl;


     }
     cout<<"my withrow " <<Emp_accounts[0].withrow(100)<<endl;
      cout<<"my balance " <<Emp_accounts[0].balance<<endl;

     cout<<"my deposite " <<Emp_accounts[0].deposite(300);
      cout<<"my balance " <<Emp_accounts[0].balance<<endl;


}
