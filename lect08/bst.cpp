//bst.cpp

#include "bst.h"
#include <iostream>
using namespace std;

bst::~bst(){
    return;
}
bool bst::search(int value) const{
    return false;
}
int bst::min() const{
    return 42;
}
int bst::max() const{
    return 42;
}

bool bst::insert(int value){
    return false;
}

void bst::printInorder() const{
    printInorder(root);
}

void bst::printInorder(bstNode* r) const{
    if(!r) return;
    printInorder(r->left);
    cout << r->data << endl;
    printInorder(r->right);
}

// void bst::preOrder(bstNode* r) const{
//     if(!r) return;
//     cout << r->data << endl;
//     printPreorder(r->left);
//     printPreorder(r->right);
// }

void bst::createSmallExample(){
    root = new bstNode(50);
    root->left = new bstNode(20, root);
    root->left->right = new bstNode(30, root->left);
    root->right = new bstNode(100,root);

}