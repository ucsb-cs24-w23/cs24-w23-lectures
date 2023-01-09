//scramble.cpp
#include <iostream>
using namespace std;
//Recursive
// result = "a", letters = "bc"
void scrambleHelper(string result, string letters){
    if(letters.length() == 0){
        cout << result << endl;
        return;
    }
    for(int i = 0 ; i < letters.length(); i++){
        // move letters[i] to the end of result
        string rest = letters;
        rest.erase(rest.begin() + i); // letters = "bc", i = 0, rest = "c"
        // call scrambleHelper on the new result, and letters
        scrambleHelper(result + letters[i], rest );
    }
   // scrambleHelper(); // we call scrambleHelper on a smaller letters input
}
// print all the scrambling of a given set of letters
void scramble(string letters){
   scrambleHelper("",letters);
}

int main(int argc, char const *argv[])
{
    string letters = "abc";
    scramble(letters);
    return 0;
}
