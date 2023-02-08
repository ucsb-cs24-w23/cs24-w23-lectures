//test_bst.cpp
#include "bst.h"
#include <iostream>
using namespace std;
void test_removeNodeWithRightChild(){
    bst b;
    b.createSmallExample();
    cout << "Preorder before deletion"<< endl;
    b.printPreorder();
    cout << endl;
    b.removeNodeWithRightChild(b.root->left);
    cout << "\tExpected : 50 30 100\n";
    cout << "\tActual  : ";
    b.printPreorder();
    cout << endl;


}

int main(){
    test_removeNodeWithRightChild();
    return 0;
}