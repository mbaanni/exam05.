#include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell::ASpell(ASpell &ref)
{
    (void)ref;
}

ASpell::ASpell(std::string const name, std::string const effects)
{
    this->name = name;
    this->effects = effects;
}

const std::string ASpell::getName()const
{
    return name;
}

const std::string ASpell::getEffects()const
{
    return effects;
}


void ASpell::launch(const ATarget &ref)const
{
    ref.getHitBySpell(*this);
}

ASpell::~ASpell()
{}