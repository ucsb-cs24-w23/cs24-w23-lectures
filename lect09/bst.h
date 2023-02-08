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
    void printPreorder() const;
    bool insert(int value);
    void createSmallExample();
    friend void test_removeNodeWithRightChild();
    
private:

    struct bstNode{
        const int data;
        bstNode *parent;
        bstNode *left;
        bstNode *right;
        bstNode(int value, bstNode* p = nullptr, bstNode *l=nullptr, bstNode *r=nullptr ): 
                data(value), parent(p), left(l), right(r){}
    };

    bstNode *root;
    void printInorder(bstNode* r) const;
    void printPreorder(bstNode* r) const;
    void removeNodeWithRightChild(bstNode *r);

};

#endif