#include "factory.h"
#include <string>

int NovelDataType::iterate_data() {
    int sum = 0;

    product = build_array();
   
    for (int i = 0; i < 64; i++) {
        sum += product[i];
    }

    return sum;
}

int* ConcreteNovelDataType::build_array() {
    int* values = new int[64];

    for (int i = 0; i < 64; i++)
    {
        values[i] = 1;
    }

    return values;
}

void ConcreteProduct::doProductThings() {
    ConcreteNovelDataType newType;

    std::cout << newType.iterate_data() << std::endl;
}

int main(void)
{
    ConcreteProduct product;

    product.doProductThings();
    return 0;
}
