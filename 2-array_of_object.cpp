#include <iostream>

using namespace std;
class student{
public:
    int id ;
    string name;
    int gpa;

};
int main()
{
     //array of objects
     student students[3];//array of objects contain 3 obj

     for(int i=0;i<3;i++){
        cin>>students[i].id;
        cin>>students[i].name;
        cin>>students[i].gpa;
     }
        for(int i=0;i<3;i++){
        cout<<" id: "<< students[i].id <<" name: "<<students[i].name<<" gpa: "<<students[i].gpa<<endl;
        cout<< " && ";
     }

}
