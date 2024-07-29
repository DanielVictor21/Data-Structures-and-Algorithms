#include <iostream>
#include <unordered_map>

template <typename T>
class MyArray {
private:
    int length;
    std::unordered_map<int, T> data;

public:
    MyArray() : length(0) {}

    T get(int index) {
        if (data.find(index) != data.end()) {
            return data[index];
        }
        return T(); // Return default-constructed value of type T
    }

    int push(const T& item) {
        data[length] = item;
        length++;
        return length;
    }

    T pop() {
        if (length == 0) {
            return T(); // Return default-constructed value of type T
        }
        T lastItem = data[length - 1];
        data.erase(length - 1);
        length--;
        return lastItem;
    }

    void shift_items(int index) {
        for (int i = index; i < length - 1; i++) {
            data[i] = data[i + 1];
        }
        data.erase(length - 1);
        length--;
    }

    T delete_item(int index) {
        if (data.find(index) != data.end()) {
            T item = data[index];
            shift_items(index);
            return item;
        }
        return T(); // Return default-constructed value of type T
    }

    void print() {
        std::cout << "{ ";
        for (int i = 0; i < length; i++) {
            std::cout << i << ": " << data[i];
            if (i < length - 1) {
                std::cout << ", ";
            }
        }
        std::cout << " }" << std::endl;
    }
};

int main() {
    MyArray<std::string> stringArray;
    stringArray.push("1");
    stringArray.push("2");
    stringArray.push("3");
    stringArray.print();  // Output: { 0: 1, 1: 2, 2: 3 }
    stringArray.delete_item(1);
    stringArray.print();  // Output: { 0: 1, 1: 3 }

    MyArray<int> intArray;
    intArray.push(1);
    intArray.push(2);
    intArray.push(3);
    intArray.print();  // Output: { 0: 1, 1: 2, 2: 3 }
    intArray.delete_item(1);
    intArray.print();  // Output: { 0: 1, 1: 3 }

    return 0;
}