#pragma once
#include "ASpell.hpp"
#include<vector>

class SpellBook
{
    private:
        SpellBook &operator=(SpellBook &ref);
        SpellBook(SpellBook &ref);

    public:
        std::vector<ASpell*> spells;
        SpellBook();
        void learnSpell(ASpell*ptr);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &name);
        ~SpellBook();
};