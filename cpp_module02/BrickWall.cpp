#include "BrickWall.hpp"

BrickWall::BrickWall()
{
    type = "Inconspicuous Red-brick Wall";
}

const ATarget *BrickWall::clone()const
{
    return new BrickWall;
}

BrickWall::~BrickWall()
{
}