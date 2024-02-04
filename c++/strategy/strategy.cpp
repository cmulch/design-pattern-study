#include "strategy.H"
#include <cstdint>
#include <string>
#include <utility>

int ConcreteStrategyOne::algorithmToStrategize(const int &toUpdate)
{
    int newValue = toUpdate * 1;
    return newValue;
}

int ConcreteStrategyTwo::algorithmToStrategize(const int &toUpdate)
{
    int newValue = toUpdate * 2;
    return newValue;
}

int ConcreteStrategyThree::algorithmToStrategize(const int &toUpdate)
{
    int newValue = toUpdate * 3;
    return newValue;
}

int ClientContext::operateOnData(const int &somethingToUpdate)
{
    return strategy->algorithmToStrategize(somethingToUpdate);
}

ClientContext::ClientContext(StrategyInterface* interface)
{
    strategy = interface;
}

int main(void)
{
    const int toUpdate = 5;
    // First time using these nested news, wonder how it works with an overload.
    // Would also like to explore the template version at some point.
    // Client is aware of the strategy implementations which GoF points out as
    // being a potential issue with this pattern.
    ClientContext* contextOne = new ClientContext(new ConcreteStrategyOne);
    ClientContext* contextTwo = new ClientContext(new ConcreteStrategyTwo);
    ClientContext* contextThree = new ClientContext(new ConcreteStrategyThree);
    std::cout << contextOne->operateOnData(toUpdate) << std::endl;
    std::cout << contextTwo->operateOnData(toUpdate) << std::endl;
    std::cout << contextThree->operateOnData(toUpdate) << std::endl;

    return 0;
}
