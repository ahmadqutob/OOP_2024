#include <iostream>
#include <exception>
using namespace std;
template<class T>
class ArrayList
{
    T *arr;
    int capacity;
    int size;
    void Expand()
    {
        capacity *=2;
        int *arr2=new T [capacity]; //new array
        for(int i=0; i<size; i++)
        {
            arr2[i]=arr[i];  //copy data;
        }
        delete []arr; //release old array
        arr=arr2; //point the arr pointer to new array
    }
public:
    ArrayList()
    {
        capacity=5;
        size=0;
        arr=new T[capacity];
    }
    void addToLast(int Ele)
    {
        if(size == capacity)
        {
            Expand();
        }
        arr[size]=Ele;
        size++;
    }
    void removeLast()
    {
        if(size !=0)
        {
            size--;
        }
        else
        {
            cout<<"Empty array";
        }

    }

    void addToFirst(int Ele)
    {
        if(size== capacity)
        {
            Expand();
        }
        for(int i= size-1; i>=0; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=Ele;
        size++;
    }

    void rempveFromFirst()
    {
        if(size !=0)
        {
            for(int i=0; i<size; i++)
            {
                arr[i]=arr[i+1];
            }
            size--;
        }
        else
        {
            cout<<"EMPTY arraylist "<<endl;
        }
    }

    void removeFromIndex(int index)
    {
        if(size !=0)
        {
            for(int i=index; i<size-1; i++)
            {
                arr[i]=arr[i+1];
            }
            size--;
        }
        else
        {
            cout<<"EMPTY arraylist "<<endl;
        }
    }
    void addAfterIndex(int idx,T NN)
    {

        if(size==capacity)
        {
            Expand();
        }

        for(int i=size-1; i>=idx; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[idx]=NN;
        size++;
    }

    void clear()
    {
        size=0;
    }
    int front()
    {
        return arr[0];
    }

    int back()
    {
        return arr[size-1];
    }
    int sizeArray()
    {
        return size;
    }



    void print()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"::::::::::::::::::::::::"<<endl;

    }
    int cap()
    {
        return capacity;
    }
    void srink_to_fit( )
    {

        capacity=size;
        int *temp= new T[capacity];
        for(int i=0; i<size; i++)
        {
            temp[i]=arr[i];
        }
        delete []arr;
        arr=temp;
    }
    int operator [](int index)
    {
        if(index >=0 && index <size)return arr[index];
        else throw out_of_range(" index is out of range");
    }

    void updateElement(int index,int ele)
    {
        if(index>=0 && index < size)
        {
            arr[index]=ele;
        }
        else
        {
            cout<<" invalid index ";
        }
    }

    bool search(int value)
    {
        for(int i=0; i<size; i++)
         {
            if(arr[i]== value){ return true;}
            else{return false;}
        }

 }
~ArrayList()
    {
        delete []arr;
    }
};
int main()
{
    ArrayList <int> myList;
  //  ArrayList myList;
    /*
    myList.addToLast(10);
    myList.print();
    myList.addToLast(20);
    myList.print();
    cout<<"the size = before srink: "<<myList.sizeArray()<<endl;

    myList.addToLast(30);
    myList.print();
    myList.addToLast(40);
    myList.print();
    myList.addToLast(50);
    myList.removeLast();

    myList.addToFirst(360);
    myList.print();
    cout<<endl<<"add after index"<<endl;
    myList.addAfterIndex(2,300);
    myList.print();
    cout<<"the size = before srink: "<<myList.sizeArray()<<endl;

    myList.removeFromIndex(2);
    myList.print();
    int sizeMyArray=myList.sizeArray();
    // myList.srinkToFit(sizeMyArray);
    // cout<<"the size after srink= : "<<myList.sizeArray()<<endl;
    //myList.srink_to_fit();
        myList.addToLast(50);

    */


    myList.addToFirst(50);
    myList.addToFirst(60);
    myList.addToFirst(70);
    myList.addToFirst(80);
    myList.addToFirst(80);
    myList.addToFirst(80);

    myList.srink_to_fit();
    cout<<"size is :"<<myList.sizeArray()<<" and capacity is : "<<myList.cap();
    try
    {
        cout<<"ssss"<<myList[1000];
    }
    catch(exception &e)
    {
        cout<<e.what();
    }
    myList.updateElement(0,100);
    myList.print();
}
