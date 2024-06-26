#include "iter.hpp"
#include <iostream>

void f(int const &i) {
    std::cout << i << std::endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, f);
    return 0;
}