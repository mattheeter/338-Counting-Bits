#include <iostream>
#include <string>

/*
 https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/
 Found info about bit-wise (bit manipulation) here
*/

int main()
{
    int x{12};
    int count{0};

    while (x) {
        x = x&(x-1);
        count++;
    }
    std::cout << count << '\n';
}