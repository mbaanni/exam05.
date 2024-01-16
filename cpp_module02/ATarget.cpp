#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::ATarget(const ATarget &ref)
{
    (void)ref;
}

ATarget::ATarget(const std::string type)
{
    this->type = type;
}

const std::string &ATarget::getType()const
{
    return type;
}

void ATarget::getHitBySpell(const ASpell &ref)const
{
    std::cout << type << " has been " << ref.getEffects() << '!' << std::endl;
}

ATarget::~ATarget()
{}