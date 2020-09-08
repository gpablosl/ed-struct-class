#include "Hero.hh"

Hero::Hero(short int health, uint32_t strength, uint32_t exp, short int luck, uint32_t speed, uint32_t level, std::string* skills)
:Character(health, strength, exp, luck, speed)
{
    this->level=level;
    this->skills=skills;

}

std::string* Hero::GetSkills() const
{
    return skills;
}

