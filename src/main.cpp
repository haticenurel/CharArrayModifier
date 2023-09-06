#include <iostream>
#include <cstring> // Include for strlen function

// Global const char array
const char arr[] = "Hello, 48!";

int main() {
    // Print the original array
    std::cout << "Original array: " << arr << std::endl;

    // Calculate the size of the array
    int size = strlen(arr);

    // Create a temporary array to store the modified content
    char modifiedArr[size + 1]; // +1 for null terminator

    // Copy the contents of arr to modifiedArr
    strcpy(modifiedArr, arr);

    // Find the position of '48' in the array
    for (int offset = 0; offset < size - 1; ++offset) {
        if (modifiedArr[offset] == '4' && modifiedArr[offset + 1] == '8') {
            // Change the '48' to '42' using the base address and offset
            modifiedArr[offset + 1] = '2';
            break;
        }
    }

    // Print the modified array
    std::cout << "Modified array: " << modifiedArr << std::endl;

    return 0;
}
