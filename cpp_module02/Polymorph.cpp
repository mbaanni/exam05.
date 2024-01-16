#include "Polymorph.hpp"

Polymorph::Polymorph()
{
    name = "Polymorph";
    effects = "turned into a critter";
}

ASpell *Polymorph::clone()const
{
    return new Polymorph;
}

Polymorph::~Polymorph()
{
}