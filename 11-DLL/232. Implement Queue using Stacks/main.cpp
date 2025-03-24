#include <iostream>

using namespace std;
class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {

    }

    void push(int x) {
        while( ! s1.empty()){ //copy data from s1 to s2
            s2.push( s1.top() );
            s1.pop();
        }
        s1.push(x); //add new value
        while( ! s2.empty()){ //copy data from s2 to s1
            s1.push( s2.top() );
            s2.pop();
        }



    }

    int pop() {
        int x= s1.top();
        s1.pop();
        return x;
    }

    int peek() {
        return s1.top();
    }

    bool empty() {
        return s1.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
