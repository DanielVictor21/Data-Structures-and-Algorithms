#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> merge_sequence(const std::vector<int>& array1, const std::vector<int>& array2) {
    std::vector<int> merged(array1.begin(), array1.end());
    merged.insert(merged.end(), array2.begin(), array2.end());
    
    // Sort the merged array
    std::sort(merged.begin(), merged.end());
    
    return merged;
}

int main() {
    std::vector<int> array1 = {1, 10, 30, 20, 5, 10, 4, 7, 18};
    std::vector<int> array2 = {4, 6, 7, 8, 50, 20, 40, 10, 20, 80};
    std::vector<int> result = merge_sequence(array1, array2);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
