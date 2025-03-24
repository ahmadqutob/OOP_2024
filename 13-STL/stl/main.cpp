#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v={100,5,6,8,43,856,98}; //declare with data
    vector <int>  s(10);;//declare with size
    vector <int> w; //declare without size

    v.insert( v.begin() +5 , 300 );
    v.erase( v.begin()); //delete first element
    v.assign( 7 ,20);
    for(int i=0;i< v.size() -1 ; i++)
    {
    cout<< v[i]<< " ";
    }


    cout<<"========="<<endl;
    int arr[] = {11,32,34,42,5};
    v.assign(arr, arr+5);

   for(int i=0;i< v.size() ; i++)
    {
    cout<< v[i]<< " ";
    }

    //////////////////////////////////after sort
    cout<<"after sort "<<endl;
    sort(v.begin() , v.end());

       for(int i=0;i< v.size() ; i++)
    {
    cout<< v[i]<< " ";
    }


    cout <<endl<< "Hello world!" << endl;
    return 0;
}
