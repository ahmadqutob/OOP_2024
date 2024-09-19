#include <iostream>

using namespace std;
class account
{
private:
    int id ;
    string name;
    int balance;

public:
    //METHODS

    //ID
    void setId(int d)
    {
        id = abs(d);
    }
    int getId()
    {
        return id;
    }
    //Name
    void setName(string n)
    {
        name = n;
    }
    string getName( )
    {
        return  name ;
    }
    //BALANCE
    void setBalance(int b)
    {
        balance = abs(b);
    }
    int getBalance( )
    {
        return  balance ;
    }
    //DEPOSITE
    void setDeposite(int depo)
    {
        balance += abs(depo);
    }
    int getDeposite( )
    {
        return  balance ;
    }
    //withrow
    void setWithrow(int with)
    {
        if(with <0)with = abs(with);
       if(balance < with ){
        cout<<"can't to withrow " ;
       }else{
            balance -= with;
       }

    }
    int getWithrow( )
    {
        return  balance ;
    }






};
int main()
{
    account ac;

    ac.setId(1);
    ac.setName("ahmad qasem");
    ac.setBalance(2000);

   // ac.setWithrow(-5);
    //cout<< ac.getWithrow();

   //ac.setDeposite(-500);
  // cout<<ac.getDeposite();

    cout<<"name :"<<ac.getName() <<"|| id: " <<ac.getId() <<"|| Balance " <<ac.getBalance();

}
