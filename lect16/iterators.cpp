
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <list>
using namespace std;

template <class T>
void printKeys(T& t){
    for ( auto elem : t){
        cout << elem << " ";
    }
    cout << endl;
}
//for set this would be n log n
template <class T>
void printKeysLong(T& t){
    for ( typename T::iterator it = t.begin(); it != t.end(); it++){
        cout << *it << " ";
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
    printKeysLong(s);
    cout << "\nIterate through linked list "<< endl;
    printKeys(l);
    set<int>::iterator it = s.find(21);
    if(it == s.end()){
        cout << "21 is not there "<< endl;
    }else{
        cout << "Found "<< *it <<endl;
    }
    // checkout erase
    set<string> names {"riya", "javin", "jake", "jack", "jennifer"};
    auto result = names.lower_bound("ja"); // O(log n)
    cout << *result << endl;
    while(result != names.end()){
        result ++;
        cout << *result << endl;
    }

    
    return 0;
}

