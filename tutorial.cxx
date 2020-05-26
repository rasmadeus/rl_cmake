#include <iostream>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#include "MathFunctions.h"
#else
#include <cmath>
#endif



int main(int argc, char** argv)
{
    if (argc < 2) {
        std::cout
            << argv[0]
            << " Version "
            << Tutorial_VERSION_MAJOR
            << "."
            << Tutorial_VERSION_MINOR
            << std::endl;

        std::cout
            << "Usage: "
            << argv[0]
            << " number"
            << std::endl;
    }

    int inputValue = 5;

#ifdef USE_MYMATH
    const double outputValue = mysqrt(inputValue);
#else
    const double outputValue = std::sqrt(inputValue);
#endif

    std::cout << "Value: " << outputValue << "\n";
}