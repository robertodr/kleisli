#include <cstdlib>
#include <iostream>
#include <string>
#include <tuple>

#include "EmbellishedTypes.hpp"

int_T int_function();

int main()
{
    std::cout << "Kleisli: return value embellishment" << std::endl;

    std::cout << "Calling int_function" << std::endl;
    int a;
    std::string trace;
    std::tie(a, trace) = int_function();
    std::cout << "a = " << a << std::endl;
    std::cout << "trace = " << trace << std::endl;

    return EXIT_SUCCESS;
}

int_T int_function()
{
    return std::make_tuple<int, std::string>(1, "Creating integer");
}
