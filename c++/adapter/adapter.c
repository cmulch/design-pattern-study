#include "adapter.h"
#include <cstdint>
#include <string>
#include <utility>

uint64_t ModernCalculator::add(uint64_t a, uint64_t b)
{
    return a + b;
}
std::pair<uint32_t, uint32_t> OldClaculator::add(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    ModernCalculator calculator;
    uint64_t new_a = 0;
    uint64_t new_b = 0;
    new_a |= a;
    new_a = new_a << 32;
    new_a |= b;
    new_b |= c;
    new_b = new_b << 32;
    new_b |= d;

    uint64_t new_value = calculator.add(new_a, new_b);
    a = (new_value >> 32) & 0xFFFFFFFF;
    b = new_value & 0xFFFFFFFF;

    std::pair<uint32_t, uint32_t> split_value(a, b);
    return split_value;

}

void clientImplementation()
{
    OldClaculator calculator;
    uint32_t a = 1;
    uint32_t b = 2;
    uint32_t c = 3;
    uint32_t d = 4;

    // Imagine the client is fancier and doesn't just want to print the number
    std::pair<uint32_t, uint32_t> addedNumber = calculator.add(a, b, c, d);
    std::cout << std::get<0>(addedNumber) << " " << std::get<1>(addedNumber) << std::endl;

    return;
}

int main(void)
{
    clientImplementation();   

    return 0;
}
