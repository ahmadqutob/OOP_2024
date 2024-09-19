#include <iostream>

using namespace std;
class student
{
private:
    string name;
    int age;
    int avg;
public:
    // default constructor
    student()
    {
        name="new student";
        age=01;
        avg=01;
    }
    // parametarized constructor
    student(string na,int ag, int av)
    {
        name=na;
        age=ag;
        avg=av;
    }

    //name
    void setName(string n)
    {
        if(n== "")cout<<" name musn't be empty ";
        else
        {
            name = n;
        };
    }
    string getName()
    {
        return name;
    }

    // age
    void setAge(int a)
    {
        if(a<0)
        {
            a*=-1;
            age = a;
        }
        else
        {
            age = a;
        }
    }
    int getAge()
    {
        return age;
    }
    // avg
    void setAvg(int av)
    {
        if(av<0)
        {
            av*=-1;
            avg = av;
        }
        else
        {
            avg = av;
        }
    }
    int getAvg()
    {
        return avg;
    }

      setData(string n, int ag, int av){
        //name
        if(n == ""){cout<<" name shouldn't be empty";}
        else{name= n;};
        //age
         if(ag<0)  {
            ag*=-1;
            age = ag;
        }  else {
            age = ag;
        }
        //avg
          if(ag<0)  {
            ag*=-1;
            age = ag;
        }  else {
            age = ag;
        }
      };


};

int main()
{

   student st;
    //cout<<st.getName();
    //cout<<st.getAge();
    //cout<<st.getAge();

   student st1("ahmad s", 23 , 89);
    //cout<<st1.getAvg();
    st1.setData("noor",50,80);
    cout<<st1.getAvg();
}
