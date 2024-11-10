#include <iostream>
#include <vector>

class InsertionSort
{
public: 
    void Sorting(std::vector<int> &vec) 
    {
        int len = vec.size();
        for (int i = 1; i < len; i++)
        {
            int j = i - 1;
            int value = vec[i];
            while (j >= 0 && vec[j] > value)
            {
                vec[j + 1] = vec[j];
                j = j - 1;
            }
            vec[j + 1] = value; 

        }
    }
};

int main() {
    std::vector<int> myVector = {12, 11, 13, 5, 6};
    InsertionSort sorter;

    sorter.Sorting(myVector);

    std::cout << "Sorted array: ";
    for (int v : myVector) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}

