#include "Warlock.hpp"
#include "ASpell.hpp"
#include <algorithm>
#include "ATarget.hpp"

Warlock::Warlock()
{}


Warlock::Warlock(const std::string &name, const std::string &title):name(name),title(title)
{
    std::cout << name << ": This looks like another boring day."<< std::endl;
}

const std::string &Warlock::getName()const
{
    return name;
}

const std::string &Warlock::getTitle()const
{
    return title;
}

        
Warlock::Warlock(Warlock const &ref)
{
    (void)ref;
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}
Warlock &Warlock::operator=(const Warlock &ref)
{
    (void)ref;
    return *this;
}
void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << '!' << std::endl;
}

void Warlock::learnSpell(ASpell *ptr)
{
    std::vector<const ASpell*>::const_iterator it = spell.begin();
    while (it != spell.end())
    {
        if ((*it)->getName() == ptr->getName())
            break;
        it++;
    }
    if (it == spell.end())
        spell.push_back(ptr);
}

void Warlock::forgetSpell(std::string name_spell)
{
    std::vector<const ASpell*>::iterator it = spell.begin();
    while (it != spell.end())
    {
        if ((*it)->getName() == name_spell)
            break;
        it++;
    }
    if (it != spell.end())
        spell.erase(it);
}

void Warlock::launchSpell(std::string name, const ATarget &ref)
{
    std::vector<const ASpell*>::iterator it = spell.begin();
    while (it != spell.end())
    {
        if ((*it)->getName() == name)
            break;
        it++;
    }
    if (it != spell.end())
        (*it)->launch(ref);
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}