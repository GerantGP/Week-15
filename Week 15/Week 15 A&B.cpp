CharacterOffSet.cpp->

#include<bits/stdc++.h>
using namespace std;


char character(char start, int offset) {
    // check if the argument start is a character or not
    // if not character throw an exception
    if (start < 'A' or (start > 'Z' and start < 'a') or start > 'z')
        throw "invalidCharacterException";
    // calculate the target character
    char target = start + offset;
    // check if the target is a character or not
    // if not character throw an exception
    if (target < 'A' or (target > 'Z' and target < 'a') or target > 'z')
        throw "invalidRangeException";
    // check if the given character and target character in the same case
    // if both are in differnt case
    // throw an exception
    if (!((isupper(start) == 0) ^ (islower(target) == 0)))
        throw "upperLowerExcetion";
    // if no exception are matched
    // return the target character
    return target;
}



/// Testing 
int main() {

    try {
        char ch = character('a', 1);
        cout << ch << endl;
        ch = character('a', -1);
        cout << ch << endl;
        ch = character('A', 32);
        cout << ch << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

}