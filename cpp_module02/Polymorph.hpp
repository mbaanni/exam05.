#pragma once
#include "ASpell.hpp"

class Polymorph : public ASpell
{
    private:
    public:
        Polymorph();
        ASpell *clone()const;
        ~Polymorph();
};