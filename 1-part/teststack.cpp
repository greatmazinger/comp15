#include "car.hpp"
#include <cassert>
#include <iostream>

using std::cout;

void print_car(Car c) {
    cout << "A " << c.year << " " << c.make << " with " << c.mpg << " mpg." << std::endl;
}

int main()
{
    // Test that making a giant stack doesn't cause problems
    cout << "Test giant stack." << std::endl;
    Stack S;
    Car c;
    c.year = 1980;
    c.mpg = 10;
    for (int i = 0; i < 1000000; ++i) {
        S.push(c);
    }

    // Empty stack...what happens? (crash)
    cout << "Test empty stack." << std::endl;
    Stack S2;
    c = S2.pop(); 
    print_car(c); 

    cout << "Tests passed." << std::endl;

    return 0;
}
