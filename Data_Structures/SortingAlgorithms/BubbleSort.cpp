#include <iostream>
#include <vector>

class BubbleSort {
public:
    void Sorting(std::vector<int> &vec) {
        for (int i = 0; i < vec.size(); i++) {
            for (int j = 0; j < vec.size()-i-1; j++) {
                if (vec[j] > vec[j+1]) {
                    std::swap(vec[j], vec[j+1]);
                }
            };
        };
    };
};
int main() {
    std::vector<int> myVector = {12, 11, 13, 5, 6};
    BubbleSort sorter;

    sorter.Sorting(myVector);

    std::cout << "Sorted array: ";
    for (int v : myVector) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
};

