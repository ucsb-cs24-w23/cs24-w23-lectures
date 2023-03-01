// testbst.cpp:
// Modified version of lab04 starter code for demo purposes

#include "bst.h"
#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main() {
    vector<int> v1{6, 4, 12, 2, 5, 10, 20, 1, 3};
    BST b;
    for (auto elem : v1){
        b.insert(elem);
    }
    cout<<"Printing out keys breadth first"<<endl;
    b.printBreadthFirst();
  
    return 0;
}


