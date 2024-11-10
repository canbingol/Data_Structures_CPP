#include <iostream>
#include <vector>

/*
here we take the smallest element of the array and move it to the beginning of thr array and then
do the same for the other elements
 */

class SelectionSort
{
public:
    void sorting(std::vector<int> &vec)
    {
        for (int i = 0; i < vec.size(); i++) {
            int min = i;
            for (int j = i + 1; j < vec.size(); j++) {
                if (vec[j] < vec[min]) {
                    min = j;
                }
            }
           const int temp = vec[i];
            vec[i] = vec[min];
            vec[min] = temp;

        }
    }
};

int main() {
    std::vector<int> myVector = {64, 25, 12, 22, 11};
    SelectionSort sorter;

    sorter.sorting(myVector);

    std::cout << "Sorted array: ";
    for (int v : myVector) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
