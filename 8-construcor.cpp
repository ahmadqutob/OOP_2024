#include <iostream>

using namespace std;
class person {
private:
    int age ;
    string name;

public:
        //default constructor -> without parameters
        //get invoked automaticlly when creating new OBJ
    person(){
      age =20 ; //default value
      name=" ";

    }
        //parametrized  constructor  -> with parameters
        //get invoked automaticlly when creating new OBJ

    person(string s, int a){
        //validation
        name=s;
        age = a;

    }
        //name
   void  setName(string n){
        name=n;
    }

   string  GetName(){
      return  name;
    }
        //age
   void  setAge(int a){
        age=a;
    }

   int  GetAge(){
      return  age;
    }

    void print(){
    cout<< name <<" " << age;
    }
};
int main()
{
    person p ;
     cout<<p.GetAge(); //20
    person p1 ;
     cout<<p1.GetAge();//20

     person p21("aya", 20);
     p21.print();
}
