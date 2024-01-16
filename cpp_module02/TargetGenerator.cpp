#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::TargetGenerator(TargetGenerator &ref)
{
    (void)ref;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator &ref)
{
    (void)ref;
    return *this;
}

void TargetGenerator::learnTargetType(ATarget*ptr)
{
    std::vector<ATarget*>::iterator it = targets.begin();
    while (it != targets.end())
    {
        if ((*it)->getType() == ptr->getType())
            break;
        it++;
    }
    if (it == targets.end())
        targets.push_back(ptr);
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
    std::vector<ATarget*>::iterator it = targets.begin();
    while (it != targets.end())
    {
        if ((*it)->getType() == name)
            break;
        it++;
    }
    if (it != targets.end())
        targets.erase(it);
}

ATarget* TargetGenerator::createTarget(std::string const &name)
{
    std::vector<ATarget*>::iterator it = targets.begin();
    while (it != targets.end())
    {
        if ((*it)->getType() == name)
            return const_cast<ATarget*>((*it)->clone());
        it++;
    }
    return (0);
}

TargetGenerator::~TargetGenerator(){}