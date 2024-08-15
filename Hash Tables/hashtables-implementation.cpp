#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map of int keys and string values
    std::unordered_map<int, std::string> myMap;

    // Insert elements into the map
    myMap[1] = "apple";
    myMap[2] = "banana";
    myMap.insert({3, "cherry"});

    // Access elements
    std::cout << "Key 1: " << myMap[1] << std::endl;

    // Check existence
    if (myMap.find(2) != myMap.end()) {
        std::cout << "Key 2 exists with value: " << myMap[2] << std::endl;
    }

    // Remove an element
    myMap.erase(3);

    // Iterate over elements
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    // the conventional for loop
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    return 0;
}
