#include <iostream>
#include "Min.h"

int main()
{
    std::cout << Minimum<int>(66,44) << std::endl;
    std::cout << Minimum(24.5, 24.4) << std::endl;
    std::cout << Minimum('b', 'c') << std::endl;
}

