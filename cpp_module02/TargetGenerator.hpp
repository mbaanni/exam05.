#pragma once
#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator &ref);
        TargetGenerator &operator=(TargetGenerator &ref);
    public:
        std::vector<ATarget*> targets;
        TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
        ~TargetGenerator();
};