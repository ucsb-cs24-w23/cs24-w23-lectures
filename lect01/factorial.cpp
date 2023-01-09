//factorial.cpp
#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0) return 1; //Base case
    //cout << n << endl;
    return n * factorial(n-1); // Make the assumption that factorial(n-1)
                               // returns the correct value!
}

int main(int argc, char const *argv[])
{
    cout << factorial(4) << endl;
    return 0;
}
