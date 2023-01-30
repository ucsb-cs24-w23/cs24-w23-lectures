//linkedlist.cpp
//Lecture 7: 
// - Testing
#include<iostream>
#include <vector>
#include "linkedlist.h"
using namespace std;
//:: think of it as 's
void LinkedList::prepend(string value){
    head = new Node {value, head};
    if(!tail){     
        tail = head;
    } 
    return;
}
void LinkedList::append(string value){
    return;
}
string LinkedList::getMax() const{
    return "42";
}
string LinkedList::getMin() const{
    return "42";
}
void LinkedList::clear(){
    clearList(head);
    head = tail = nullptr;
    return;
}
bool LinkedList::search(string value) const{
    return true;
}

void LinkedList::print() const{
    printList(head);
}

    
// Precondition: @param1 : LinkeList, @param2: string value
// Postcondition: Insert value to the front of the list and return 
// the resulting linked list


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
    delete h; // delete nullptr; OKAY!
}




