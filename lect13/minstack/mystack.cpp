#include "mystack.h"
using namespace std;

template <class T>
void mystack<T>::push(T value){
    mystack_.push_front(value); // O(1)
}

template <class T>
void mystack<T>::pop(){
    mystack_.pop_front();
}
template <class T>
T mystack<T>::top(){
    return mystack_.front();
}
template <class T>
bool mystack<T>::empty(){
    return mystack_.empty();
}

