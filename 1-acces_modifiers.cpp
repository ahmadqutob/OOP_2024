#include <iostream>

using namespace std;
class students{
public:
    int id ;
    double gpa;
    string name ;

    void print(){
        cout<<id<<" "<<name<<" "<<gpa;
        };


};
int main()
{

  students s ; // object from students
  students s1 ; // object from students

  cout <<"first student : "<<endl;
  cin>>s.id>>s.name>>s.gpa ;
  s.print();

  cout <<"secound student : "<<endl;
  cin>>s1.id>>s1.name>>s1.gpa ;
  s1.print();


}
