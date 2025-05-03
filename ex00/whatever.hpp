#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include<iostream>

template<typename T>

void swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename M>

M& max(M& a, M& b)
{
    if (a > b)
        return(a);
    else if (a < b)
        return(b);
    else
        return(b);
}

template<typename M>

M& min(M& a, M& b)
{
    if (a > b)
        return(b);
    else if (a < b)
        return(a);
    else
        return(b);
}

#endif