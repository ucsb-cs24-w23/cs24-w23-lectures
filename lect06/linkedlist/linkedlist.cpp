//linkedlist.cpp
#include <iostream>
#include <vector>
#include "linkedlist.h"
using namespace std;

void LinkedList::prepend(int value){
    head = new Node {value, head};
    if(!tail){     
        tail = head;
    } 
    return;
}
void LinkedList::append(int value){
    return;
}
int LinkedList::getMax() const{
    return 42;
}
int LinkedList::getMin() const{
    return 42;
}
void LinkedList::clear(){
    clearList(head);
    head = tail = nullptr;
    return;
}
bool LinkedList::search(int value) const{
    return true;
}

void LinkedList::print() const{
    printList(head);
}

void LinkedList::printList(Node* h) const{
    Node* t = h; // t  is a traversal 
    while(t){ // same as while (t!=nullptr)
        cout<<t->data<<" ";
        t = t->next;
    }
    cout<<endl;
}

void LinkedList::clearList(Node* h){
    if(!h) return;
    clearList(h->next);
    delete h; // delete nullptr is OKAY!
}




