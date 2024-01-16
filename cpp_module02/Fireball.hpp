#pragma once


#include "ASpell.hpp"

class Fireball : public ASpell
{
    private:
    public:
        Fireball();
        ASpell *clone()const;
        ~Fireball();
};