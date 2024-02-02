#include <cstdint>
#include <stdio.h> 
#include <string>
#include <iostream>

// This could probably be an interface too but I'm simplifying for the example
class ModernCalculator {
public:
    uint64_t add(uint64_t a, uint64_t b);
};

class OldCalculatorAdapter {
public:
    virtual std::pair<uint32_t, uint32_t> add(uint32_t a, uint32_t b, 
                                    uint32_t c, uint32_t d) = 0;
};

class OldClaculator : public OldCalculatorAdapter {
public:
     std::pair<uint32_t, uint32_t> add(uint32_t a, uint32_t b, 
                                    uint32_t c, uint32_t d);
};

