#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

 vector <int> v={1,2,3,4,5};
 int target=3;
 vector <int>::iterator it = find(v.begin(),v.end(),target);

int index=distance(v.begin() , it);
    if(it != v.end()) cout<<"found " <<*it;
    else cout<<"not found ";
    cout<<v[index];
}
