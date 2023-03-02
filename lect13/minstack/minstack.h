//minstack.h
#include <list>
#include <set>
using namespace std;
#ifndef MINSTACK_H
#define MINSTACK_H

template <class T>
class minStack{
    public:
        void push(T value){ //O(1)
            if(empty() || value < min()) mystack_.push_front(make_pair(value, value));
            else mystack_.push_front(make_pair(value, min()));
        }

        void pop(){ //O(1)
            mystack_.pop_front();
        }

        T top(){ //O(1)
            return mystack_.front().first;
        }

        bool empty(){ //O(1)
            return mystack_.empty();
        }

        T min(){ //O(1)
            return mystack_.front().second;
        }

    private:
        list<pair<T, T>> mystack_;
};

template <class T>
class minStack_1{
    public:
        void push(T value){ //O(log n)
            mystack_.push_front(value);
            set_.insert(value);
        }

        void pop(){ //O(log n)
            T val = top();
            mystack_.pop_front();
            set_.erase(val);
        }

        T top(){ //O(1)
            return mystack_.front();
        }

        bool empty(){ //O(1)
            return mystack_.empty();
        }

        T min(){ //O(log n)
            return *(set_.begin());
        }

    private:
        list<T> mystack_;
        set<T>  set_; // balanced BST
};


#endif

