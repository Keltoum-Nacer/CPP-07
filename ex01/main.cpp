#include"iter.hpp"

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    ::iter(ptr, 5, print_element);
    std::cout << "-----------------\n";
    char charac[5] = {'a', 'b', 'c', 'd', 'e'};
    char *c = charac;
    ::iter(c, 5, print_element);
}
