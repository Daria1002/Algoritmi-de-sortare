#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

// Function to generate a random list of integers
std::vector<int> generateRandomList(int size, int range) {
    std::vector<int> randomList;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, range);
    for (int i = 0; i < size; ++i) {
        randomList.push_back(dis(gen));
    }
    return randomList;
}

// Function to generate a reversed list of integers
std::vector<int> generateReversedList(int size) {
    std::vector<int> reversedList;
    for (int i = size; i > 0; --i) {
        reversedList.push_back(i);
    }
    return reversedList;
}

// Function to generate an almost ordered list of integers
std::vector<int> generateAlmostOrderedList(int size, int swapChance) {
    std::vector<int> almostOrderedList;
    for (int i = 1; i <= size; ++i) {
        almostOrderedList.push_back(i);
    }
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 99);
    for (int i = 0; i < size; ++i) {
        if (dis(gen) < swapChance) {
            int j = i + 1 + dis(gen) % (size - i - 1);
            std::swap(almostOrderedList[i], almostOrderedList[j]);
        }
    }
    return almostOrderedList;
}

int main() {
    int sizes[] = {1000, 10000, 100000, 3000000};
    int range = 100; 
    int swapChance = 20; 
    for (int size : sizes) {
        // Generate and print random list
        std::vector<int> randomList = generateRandomList(size, range);
        std::cout << "Random List of size " << size << ": ";
        // Print the first 10 elements
        for (int i = 0; i < 10; ++i) {
            std::cout << randomList[i] << " ";
        }
        std::cout << "..." << std::endl;

        // Generate and print reversed list
        std::vector<int> reversedList = generateReversedList(size);
        std::cout << "Reversed List of size " << size << ": ";
        // Print the first 10 elements
        for (int i = 0; i < 10; ++i) {
            std::cout << reversedList[i] << " ";
        }
        std::cout << "..." << std::endl;

        // Generate and print almost ordered list
        std::vector<int> almostOrderedList = generateAlmostOrderedList(size, swapChance);
        std::cout << "Almost Ordered List of size " << size << ": ";
        // Print the first 10 elements
        for (int i = 0; i < 10; ++i) {
            std::cout << almostOrderedList[i] << " ";
        }
        std::cout << "..." << std::endl;
    }

    return 0;
}
