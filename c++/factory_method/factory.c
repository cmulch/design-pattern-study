#include "factory.h"

std::string const ProductFactory::createStringHello()
{
    std::string hello = "Hello";
    return hello;
}
std::string const ProductFactory::createStringGoodbye()
{
    std::string hello = "Goodbye";
    return hello;
}
std::string const ProductFactory::createStringWoah()
{
    std::string hello = "Woah";
    return hello;
}

int main(void)
{
    ProductFactory factory;

    std::string someString = factory.createStringHello();
    std::cout << someString << std::endl;

    std::string goodbye = factory.createStringGoodbye();
    std::string woah = factory.createStringWoah();


    std::cout << goodbye << std::endl;
    std::cout << woah << std::endl;
    std::cout << woah << std::endl;
    std::cout << woah << std::endl;
    return 0;

}
