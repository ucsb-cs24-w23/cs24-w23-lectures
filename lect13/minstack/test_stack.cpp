//test_stack.cpp
#include <iostream>
#include <vector>
#include <stack>
#include "minstack.h"
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, -3, 4, 5};
    stack<int> stl_stack;
    minStack<int> s;
    minStack<string> snames;
    for(auto elem : nums){
        s.push(elem);
    }
    //cout << "Top: " << s.top() << endl;

    while(!s.empty()){
        cout << "Top: " << s.top() <<" Min: " << s.min() << endl;
        s.pop();
    }

}
