#include "Hero.hh"

Hero::Hero(short int health, uint32_t strength, uint32_t exp, short int luck, uint32_t speed)
:Character(health, strength, exp, luck, speed)
{
    std::cout << "Health: "<< GetHealth() << std::endl;
    std::cout <<  "Exp: " << GetExp()  << std::endl;
    std::cout <<  "Luck: " << GetLuck() << std::endl;
    std::cout <<  "Strength: " << GetStrenght() << std::endl;
    std::cout <<  "Speed: " << GetSpeed() << std::endl;
}
