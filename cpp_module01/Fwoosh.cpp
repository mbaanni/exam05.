#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    name = "Fwoosh";
    effects = "fwooshed";
}

const ASpell *Fwoosh::clone()const
{
    return new Fwoosh;
}
Fwoosh::~Fwoosh()
{}