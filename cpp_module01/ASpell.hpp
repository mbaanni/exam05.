#pragma once
#include"ATarget.hpp"
#include <iostream>
class ATarget;
class ASpell
{
    private:
        ASpell(ASpell &ref);
    protected:
        ASpell();
        std::string name;
        std::string effects;
    public:
        ASpell(std::string const name, std::string const effects);
        const std::string getName()const;
        const std::string getEffects()const;
        virtual const ASpell *clone()const = 0;
        void launch(const ATarget &ref)const;
        virtual ~ASpell();
};