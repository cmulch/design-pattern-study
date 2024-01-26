#include <stdio.h> 
#include <string>
#include <iostream>

class Product {
    public:
        Product() {};
        virtual void doProductThings() = 0;
};

class ConcreteProduct: public Product {
    public:
        void anotherFunction();
        void doProductThings();
};

class NovelDataType {
    public:
        NovelDataType() {}
        int iterate_data();

    protected:
        virtual int* build_array() = 0;

    private:
        int* product;
};

class ConcreteNovelDataType : public NovelDataType {
    protected:
        void someExtraFunc();
        int* build_array();
};
