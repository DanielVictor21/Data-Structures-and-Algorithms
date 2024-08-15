#include <iostream>
#include <vector>
#include <unordered_map>

int find_the_recurring_character(const std::vector<int>& nums) {
    std::unordered_map<int, bool> seen;

    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return num;
        }
        seen[num] = true;
    }

    return -1; 
}

int main() {
    std::vector<int> array = {2, 1, 1, 2, 3, 5, 1, 2, 4};
    int result = find_the_recurring_character(array);
    
    if (result != -1) {
        std::cout << "The first recurring character is: " << result << std::endl;
    } else {
        std::cout << "No recurring character found." << std::endl;
    }

    return 0;
}