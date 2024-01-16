#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    public:
        Fwoosh();
        const ASpell *clone()const;
        ~Fwoosh();
};