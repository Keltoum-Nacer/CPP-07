#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>

template<typename T>

void print_element(T element)
{
    std::cout<< element << std::endl;
}

template<typename T>

void iter(T *arr, int len, void (*print_element)(T))
{
    for (int i = 0; i < len; i++)
    {
        print_element(arr[i]);
    }
}


#endif
