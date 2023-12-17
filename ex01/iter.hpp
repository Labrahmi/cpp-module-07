#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Func>
void iter(T *array, unsigned int length, Func func)
{
    for (unsigned int i = 0; i < length; i++)
    {
        func(array[i]);
    }
}

template <typename U>
void doubleElement(U &element)
{
    element *= 2;
}

template <typename T>
void print_array(T *arr, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        std::cout << "arr[" << i << "] : " << arr[i] << std::endl;
    }
    std::cout << std::endl;
}

#endif