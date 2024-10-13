#include <iostream>
#include <vector>

class SelectionSort
{
public: 
    void sorting(std::vector<int> &vec) 
    {
        int len = vec.size();
        for (int i = 0; i < len; i++)
        {
            int min = i;
            for (int j = i + 1; j < len; j++) 
            {
                if (vec[min] > vec[j])
                    min = j;
            }
            int temp = vec[min];
            vec[min] = vec[i];
            vec[i] = temp;
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
