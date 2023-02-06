//bst.h
#ifndef BST_H
#define BST_H

class bst{
public:
    bst():root(nullptr){}
    ~bst();
    bool search(int value) const;
    int min() const;
    int max() const;
    void printInorder() const;
    bool insert(int value);

private:

    struct bstNode{
        bstNode *parent;
        bstNode *left;
        bstNode *right;
        int data;
        bstNode(int value, bstNode *l=nullptr, bstNode *r=nullptr, bstNode* p = nullptr): 
                data(value), left(l), right(r), parent(p){

        }
    };

    bstNode *root;
    void printInorder(bstNode* r) const;

};

void bst::printInorder() const{
    printInorder(root);
}

void bst::printInorder(bstNode* r) const{
    if(!r) return;
    printInorder(r->left);
    cout << r->data << endl;
    printInorder(r->right);
}


#endif