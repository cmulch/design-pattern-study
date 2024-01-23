#include "factory.h"
#include <string>

std::string const ProductFactory::createStringHello()
{
    std::string hello = "Hello";
    return hello;
}
std::string const ProductFactory::createStringGoodbye()
{
    std::string goodbye = "Goodbye";
    return goodbye;
}
std::string const ProductFactory::createStringWoah()
{
    std::string woah = "Woah";
    return woah;
}

int main(void)
{
    ProductFactory factory;

    std::string someString = factory.createStringHello();
    std::cout << someString << std::endl;

    std::string goodbye = factory.createStringGoodbye();
    std::string woah = factory.createStringWoah();

    std::string combination = factory.createStringHello() + factory.createStringGoodbye() + factory.createStringWoah();

    std::cout << goodbye << std::endl;
    std::cout << woah << std::endl;
    std::cout << woah << std::endl;
    std::cout << woah << std::endl;
    std::cout << combination << std::endl;
    return 0;

}
