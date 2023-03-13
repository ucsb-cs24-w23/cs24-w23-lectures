
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <list>
using namespace std;

template <class T>
void printKeys(T& t){
    for (auto elem : t){
        cout << elem << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> v{30, 20, 25, 40, 35, 60};
    set<int> s{30, 20, 25, 40, 35, 60};
    list<int> l{30, 20, 25, 40, 35, 60};
    cout << "Iterate through vector "<< endl;
    printKeys(v);
    cout << "\nIterate through set "<< endl;
    printKeys(s);
    cout << "\nIterate through linked list "<< endl;
    printKeys(l);
    
    
    return 0;
}

