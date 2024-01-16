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
    my_book.learnSpell(ptr);
}

void Warlock::forgetSpell(std::string name_spell)
{
    my_book.forgetSpell(name_spell);
}

void Warlock::launchSpell(std::string name, const ATarget &ref)
{
    ASpell* s = my_book.createSpell(name);
    if(s)
        s->launch(ref);
    delete s;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}