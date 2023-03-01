//test_stack.cpp
#include <iostream>
#include <vector>
#include <stack>
#include "mystack.h"
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> nums = {40, 30, 404, 200, 390, 2 , 1};
    stack<int> stl_stack;
    mystack<int> s;
    mystack<string> snames;
    for(auto elem : nums){
        s.push(elem);
    }
    //cout << "Top: " << s.top() << endl;

    while(!s.empty()){
        cout << "Top: " << s.top() << endl;
        s.pop();
    }

}
