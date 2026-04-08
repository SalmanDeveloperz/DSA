#include <iostream>

int main()
{
    // Outer loop for the number of rows (from 1 to 5)
    for (int i = 1; i <= 5; ++i)
    {
        // Inner loop to print stars for the current row
        for (int j = 1; j <= i; ++j)
        {
            std::cout << "*"; // Print a star
        }
        std::cout << std::endl; // Move to the next line after printing stars for the row
    }
    return 0;
}