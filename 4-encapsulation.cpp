#include <iostream>

using namespace std;

class Rectangle {
public:
    //attributes
    int width;
    int height;
    //Methods
    int  area(){
    return width * height;
    }
};


int main()
{
   Rectangle r;
   r.width=10;
   r.height=20;
   cout<<r.area();



}
