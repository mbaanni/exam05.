#include "Dummy.hpp"
#include "ASpell.hpp"

Dummy::Dummy()
{
    type = "Target Practice Dummy";
}

const ATarget *Dummy::clone()const
{
    return new Dummy;
}

Dummy::~Dummy()
{}