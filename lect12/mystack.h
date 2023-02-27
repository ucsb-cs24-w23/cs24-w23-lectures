//mystack.h
#include <list>
using namespace std;
#ifndef MYSTACK_H
#define MYSTACK_H
template <class T>
class mystack{
    public:
        void push(T value);
        void pop();
        T top();
        bool empty();

    private:
        list<T> mystack_;
};

#include "mystack.cpp"

#endif

