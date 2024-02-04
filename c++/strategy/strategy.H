#include <cstdint>
#include <stdio.h> 
#include <iostream>

class StrategyInterface {
public:
    virtual int algorithmToStrategize(const int& toUpdate) = 0;
};

class ConcreteStrategyOne : public StrategyInterface {
public:
    virtual int algorithmToStrategize(const int& toUpdate);
};

class ConcreteStrategyTwo : public StrategyInterface {
public:
    virtual int algorithmToStrategize(const int& toUpdate);
};

class ConcreteStrategyThree : public StrategyInterface {
public:
    virtual int algorithmToStrategize(const int& toUpdate);
};

class ClientContext {
    public:
        ClientContext(StrategyInterface* strategy);
        int operateOnData(const int& somethingToUpdate);
    private:
        StrategyInterface* strategy;
};
