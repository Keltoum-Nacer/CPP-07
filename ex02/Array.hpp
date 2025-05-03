#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include<cstdlib>

template <typename T>

class Array
{
    private:
        T *arr;
        unsigned int len;
    public:
        Array()
        {
            arr = NULL;
            len = 0;
        }

        Array(unsigned int n)
        {
            len = n;
            arr = new T[len]();
        }

        Array(const Array& other)
        {
            len = other.len;
            arr = new T[len];
            for(unsigned int i = 0; i < len; i++)
                arr[i] = other.arr[i];
        }

        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                delete[] arr;
                len = other.len;
                arr = new T[len];
                for(unsigned int i = 0; i < len ; i++)
                    arr[i] = other.arr[i];
            }
            return(*this);
        }

        ~Array()
        {
            delete[] arr;
        }

        T& operator[](unsigned int i)
        {
            if (i >= len || i < 0)
                throw std::out_of_range("the index is out of the range!");
            return(arr[i]);
        }

        const T& operator[](unsigned int i) const 
        {
            if (i >= len || i < 0)
                throw std::out_of_range("the index is out of the range!");
            return(arr[i]);
        }

        unsigned int size()
        {
            return(len);
        }
};



#endif
