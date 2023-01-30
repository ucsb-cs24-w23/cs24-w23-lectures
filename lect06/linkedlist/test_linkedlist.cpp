// test_linkedlist.cpp
#include "linkedlist.h"
using namespace std;

void example_segfault()
{
    // Cases where you will definitely or likely get a seg fault
    int *p = nullptr;
    cout << p << endl; // No seg fault
    //(1) De-reference a null pointer
    cout << *p << endl; // Definite seg fault
    //(2) Out of bound array access - may or may not lead to a segfault
    //(3) Double deletion (double free)
    p = new int(10);
    delete p; // p is not a nullptr but its pointing to a deleted object
    cout << "Accessing heap memory that was freed up" << endl;
    cout << *p << endl;
    delete p; // (3) double delete leads to segfault but deleting a null ptr is okay
              // Valgrind error: Invalid read of size 8
    // Error happens when we try to access heap memory that was already freed or deleted
}

int main(int argc, char const *argv[])
{
    // example_segfault();
    return 0;
}
