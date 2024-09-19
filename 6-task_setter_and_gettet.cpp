#include <iostream>

using namespace std;
class triangle{
private:
    int base ;
    int height;
public:
    //BASE
    void setBase(int b){
        base= abs(b);
        if(b >0)base =b;
        else{
            b *= -1;
            base = b;
        }
    }
    int getBase( ){
     return    base ;
    }
    //HEIGHT
    void setHeight(int h){
        //height= abs(h);
             if(h >0)height =h;
        else{
            h *= -1;
            height = h;
        }
    }
    int getHeight( ){
     return   height ;
    }
    //AREA
    void setArea(){
       (height * base) / 2;
    }
    int getArea( ){
      return   (height * base) / 2;
    }

};
int main()
{
    triangle myT;
     myT.setHeight(10);
     myT.setBase(20);
     cout<<myT.getArea();


}
