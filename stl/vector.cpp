#include <iostream>
#include <vector>

int main() {
    std::vector<int> myList = {1, 2, 3, 4, 5};

    // Print the list elements using a normal for loop
    std::cout << "List elements: ";
    for (int i = 0; i < myList.size(); ++i) {
        std::cout << myList[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
