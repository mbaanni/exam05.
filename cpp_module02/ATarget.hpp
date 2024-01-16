#pragma once
#include "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget
{
    private:
        ATarget(const ATarget &ref);
    protected:
        ATarget();
        std::string type;
    public:
        ATarget(const std::string type);
        const std::string &getType()const;
        virtual const ATarget *clone()const = 0;
        void getHitBySpell(const ASpell &ref)const ;
        ~ATarget();
};