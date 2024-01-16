#include "Fireball.hpp"

Fireball::Fireball()
{
    name = "Fireball";
    effects = "burnt to a crisp";
}
ASpell *Fireball::clone()const
{
    return new Fireball;
}

Fireball::~Fireball()
{
}