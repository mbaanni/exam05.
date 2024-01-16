#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook()
{

}

SpellBook::SpellBook(SpellBook &ref)
{
    (void)ref;
}

SpellBook &SpellBook::operator=(SpellBook &ref)
{
    (void)ref;
    return *this;
}

void SpellBook::learnSpell(ASpell* ptr)
{
    size_t i = 0;
    while (i < spells.size())
    {
        if (spells[i]->getName() == ptr->getName())
            break;
        i++;
    }
    if (i >= spells.size())
        spells.push_back(ptr);
}

void SpellBook::forgetSpell(std::string const &name)
{
    size_t i = 0;
    while (i < spells.size())
    {
        if (spells[i]->getName() == name)
            spells.erase(spells.begin() + i);
        i++;
    }
}
ASpell* SpellBook::createSpell(std::string const &name)
{
    size_t i = 0;
    while (i < spells.size())
    {
        if (spells[i]->getName() == name)
            return (const_cast<ASpell*>(spells[i]->clone()));
        i++;
    }
    return 0;
}

SpellBook::~SpellBook()
{

}