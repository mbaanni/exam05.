#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include "ASpell.hpp"
#include <iostream>
#include <vector>
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock &operator=(const Warlock &ref);
        Warlock(const Warlock &ref);
    public:
        SpellBook my_book;
        Warlock(const std::string &name , const std::string &title);
        const std::string &getName()const;
        const std::string &getTitle()const;
        void setTitle(const std::string &title);
        void introduce() const;
        void learnSpell( ASpell *ptr);
        void forgetSpell(std::string name_spell);
        void launchSpell(std::string name,  const ATarget &ref);
        ~Warlock();
};

#endif