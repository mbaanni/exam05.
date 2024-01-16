#pragma once
#include "ATarget.hpp"

class Dummy : public ATarget
{
    public:
        Dummy();
        const ATarget *clone()const;
        ~Dummy();
};