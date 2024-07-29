#include <iostream>
#include <vector>

int main (){
    // Static Arrays

    // Initializing all elements to 0
    int arr[5] = {0};

    // Printing array elements
    for(int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

//===================================================================================================================================

    // Dynamic Arrays

    // Initialize an array in c++
    std::vector<int> vec{1, 2, 3, 4, 5};

    // Adding elements to the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    // Printing vector elements
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }

    // Insert at the beginning
    vec.insert(vec.begin(), 99);

    // Insert at the end
    vec.push_back(99);

    // Check if the vector is not empty before removing the first element
    if (!vec.empty()) {
        vec.erase(vec.begin());
    }

    // Check if the vector is not empty before removing the last element
    if (!vec.empty()) {
        vec.pop_back();
    }

//===================================================================================================================================

    // Another way to declare a dynamic array

    int size = 5;
    int* arr1 = new int[size]; // Dynamically allocate an array of size 5

    // Initialization
    for(int i = 0; i < size; i++) {
        arr1[i] = i + 1;
    }

    // Printing array elements
    for(int i = 0; i < size; i++) {
        std::cout << arr1[i] << " ";
    }

    // Free the allocated memory
    delete[] arr1;


























}