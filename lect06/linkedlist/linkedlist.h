// linkedlist.h
#include <iostream>
#include <vector>
using namespace std;
// Header guard
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
public:
    void prepend(int value);
    void append(int value);
    int getMax() const;
    int getMin() const;
    void clear();
    void print() const;
    bool search(int value) const;

private:
    struct Node
    {
        int data;
        Node *next; // self-referencing type
    };
    Node *head;
    Node *tail;
    void printList(Node *h) const;
    void clearList(Node *h);
};
#endif
