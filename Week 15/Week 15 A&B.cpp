// Grant Harsch
//CIS 1202 101
//December 5, 2024

#include "PersonalLib.h"

//prototype to see character function
char character(char, int);

//Template for writing code
template <typename T>
T half(T val) {

    T res;

    //Dividing
    res = val / 2;

    //Since val will keep it's typing such as int, then the only way for res*2 to not equal val is if it's an int and dropped the decimal
    //I will admit though I am confused on why in tips it says to use static_cast, when I feel like this is a simpler way to do the math.
        if (res * 2 != val) {
            res++;
        }
    

    return res;//returning the half value

}

//Start of program
int main() {

    
    // A partt of assignment
    
    //Will attemp to try 
    try {
        char ch = character('a', 1);
        cout << ch << endl;

        //Have to comment this one out, since it will thorugh an excpetion ended the try to see the other function calls reuturn other answers
        ch = character('a', -1);
        cout << ch << endl;

        ch = character('Z', -1);
        cout << ch << endl;

        ch = character('?', 32);
        cout << ch << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }


        //B Part of assignment

    //different variable types to show template working
        int a = 3;
        float b = 2.5;
        double c = 3.5;


        //cout's for printing half the value of the variables
        cout << "Half values of : \n";
        cout << "\n" << a << " half of this is: " << half(a);
        cout << "\n" << b << " half of this is: " << half(b);
        cout << "\n" << c << " half of this is: " << half(c);

    

        //end of program
        return 0;
}

//
char character(char start, int offset) {
    
    char charReturn = start + offset;

    if (start < 'A' || start > 'Z' && start < 'a' || start > 'z')
        throw "invalidCharacterException";
    
    if (charReturn < 'A' || charReturn > 'Z' && charReturn < 'a' || charReturn > 'z')
        throw "invalidRangeException";


    
   
    
    return charReturn;
}

