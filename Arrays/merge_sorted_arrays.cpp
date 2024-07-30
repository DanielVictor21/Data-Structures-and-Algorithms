#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
std::vector<T> merge_sorted(const std::vector<T>& array1, const std::vector<T>& array2){
    std::vector<T> merged;
    int size = std::min(array1.size(), array2.size());
    for(int i = 0; i < size; i++){
        merged.push_back(array1[i]);
        merged.push_back(array2[i]);
    }

    for(int i = size; i < array1.size(); i++){
        merged.push_back(array1[i]);
    }

    for(int i = size; i < array2.size(); i++){
        merged.push_back(array2[i]);
    }

    return merged;
}

int main (){
    std::vector<int> first_array = {20, 40, 60, 80};
    std::vector<int> second_array = {10, 30, 50, 70};
    std::vector<int> resultInt = merge_sorted(first_array, second_array);
    for (int num : resultInt) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
