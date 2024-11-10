cmake_minimum_required(VERSION 3.29)
project(Data_Structures_CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(Data_Structures/LinkedList)
include_directories(Data_Structures/Tree)

add_executable(Data_Structures_CPP
    Data_Structures/LinkedList/DoubleLinkedList.cpp
    Data_Structures/LinkedList/DoubleLinkedList.h
    Data_Structures/LinkedList/Node.cpp
    Data_Structures/LinkedList/Node.h
    Data_Structures/LinkedList/SingleLinkedList.cpp
    Data_Structures/LinkedList/SingleLinkedList.h
    Data_Structures/SortingAlgorithms/InsertionSort.cpp
    Data_Structures/SortingAlgorithms/SelectionSort.cpp
    Data_Structures/Tree/BinaryTree.cpp
    Data_Structures/Tree/BinaryTree.h
    Data_Structures/Tree/Node.cpp
    Data_Structures/Tree/Node.h
        Data_Structures/SortingAlgorithms/BubbleSort.cpp)
