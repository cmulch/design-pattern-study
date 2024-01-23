#include <stdio.h> 
#include <string>
#include <iostream>
class ProductFactory {
    public:
        ProductFactory() {}

        const std::string createStringHello();
        const std::string createStringGoodbye();
        const std::string createStringWoah();
};
