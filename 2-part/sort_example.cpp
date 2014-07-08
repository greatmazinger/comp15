#include <vector>
#include <algorithm>
#include <iostream>

using std::cout;
using std::vector;

// 2. Create a function that takes a vector of ints and prints them out.
//    Use any of the looping techniques.
void my_print_vector()
{
}

// 5. Create a function that uses > as the comparison
bool mycomp( int x, int y )
{
}

int main()
{
    int myints[] = {-32, 71, 12, 45, 26, 80, 53, -33, 100, -62, 614};
    // 1. Create a vector of int, call it origlist and initialize with myints.

    // 2. Call my_print_vector on origlist. Implement above as part of #2

    // 3. Make copy of origlist. Call it copy1. Call my_print_vector on copy1 
    //    to make sure we actually made a copy.

    // 4. Sort copy1 using the default comparison <
    //         std::sort( start of range, end of range )
    //    Call my_print_vector on copy1. 

    // 5. Make a copy of origlist, call it copyy2.
    //    Implement mycomp as above. Sort with your mycomp function:
    //         std::sort( start of range, end of range, mycomp )
    //    Call my_print_vector on copy2. (Does it look right?) 

    // 6. Change mycomp such that all even numbers come first, sorted normally
    //    with <. Then all odd numbers, sorted normally with <.
    return 0;
}
