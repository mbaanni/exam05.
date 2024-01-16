#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    name = "Fwoosh";
    effects = "fwooshed";
}

 ASpell *Fwoosh::clone()const
{
    return new Fwoosh;
}

Fwoosh::~Fwoosh()
{}