// queue.cpp
// C++ Standard Template Library (contd)
// New data structure : queue 
// Last in first out principle
// Operations: O(1)
// front() // returns the value of the element on front of the queue
// pop() // delete the element in the front of the queue 
// push() // inserts an element to the rear of the queue
// empty()// returns true if the stack is empty.
#include <iostream>
#include <array>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 5> arr {1, 2, 3, 4, 5};
    queue<int> q;

    for (auto i:arr){
        cout<<"Push: "<<i<<endl;
        q.push(i);
    }
    while(!q.empty()){
        cout<<"Pop: "<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}

