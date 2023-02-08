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
void bst::printPreorder() const{
    printPreorder(root);
}

void bst::printInorder(bstNode* r) const{
    if(!r) return;
    printInorder(r->left);
    cout << r->data << " ";
    printInorder(r->right);
}

void bst::printPreorder(bstNode* r) const{
    if(!r) return;
    cout << r->data << " ";
    printPreorder(r->left);
    printPreorder(r->right);
}

void bst::createSmallExample(){
    root = new bstNode(50);
    root->left = new bstNode(20, root);
    root->left->right = new bstNode(30, root->left);
    root->right = new bstNode(100,root);

}
//Precondition: r points to a bstNode that has 
//              - a right subtree but no leftsubtree, 
//              - non-null parent
//Postcondition: the node pointed to by r is correctly deleted.
//Below is a buggy implementation
void bst::removeNodeWithRightChild(bstNode *r){
    r->parent->right = r->right;
    r->right->parent = r->parent;
    delete r;
}