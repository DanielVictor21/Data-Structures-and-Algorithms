#include <iostream>
#include <string>
#include <algorithm> // For std::reverse

// Function to reverse a string
std::string reverse1(const std::string& str) {
    // Create a new string to store the reversed string
    std::string reversed_str = str;
    
    // Initialize two indices, one at the beginning and one at the end of the string
    int start = 0;
    int end = reversed_str.length() - 1;
    
    // Swap characters from the start and end until the middle is reached
    while (start < end) {
        std::swap(reversed_str[start], reversed_str[end]);
        start++;
        end--;
    }
    
    // Return the reversed string
    return reversed_str;
}

std::string reverse2(const std::string& str) {
    std::string reversed_str = str;
    std::reverse(reversed_str.begin(), reversed_str.end());
    return reversed_str;
}

int main() {
    std::string input = "hello";
    std::string output = reverse1(input);
    std::cout << "Reversed string: " << output << std::endl;
    std::string input2 = "hello";
    std::string output2 = reverse2(input2);
    std::cout << "Reversed string: " << output << std::endl;
    return 0;
    
}
