#include <iostream>

using namespace std;

class rectangle {
private:
    //attributes
    int width;
    int height;

    public:
        //methods
        void setHeight(int h){
            height= abs(h);

        }
        void setWidth(int w){
           if(w > 0)width= w;
            else {
                    w*= -1;
                    width=w;
            }

        }


        int getHeight(){
           return height;
        }
        int  getWidth(){
          return   width ;
        }
};
 int hi(){
    int x;
    cin>>x;
    return x;
 }
int main()
{
hi();
  rectangle r ; // object from class
  r.setHeight(-7);
  cout<<r.getHeight();

}
