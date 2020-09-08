#include<iostream>
//#include "Character.hh"
#include "Hero.hh"

int main()
{
    Hero* hero1{new Hero(5, 3, 1, 2, 3, 1 , new std::string[4]{{"fire ball"},{"fenix tail"},{"war growl"},{"fly"}})};

    /*
    Hero** heroList
    {
        new Hero*[4]
        {
            new Hero(5, 3, 1, 2, 3, 1 , new std::string[4]{{"fire ball"},{"fenix tail"},{"war growl"},{"fly"}}),
            new Hero(4, 4, 9, 5, 2, 3 , new std::string[4]{{"water heal"},{"erik do something!!"},{"me como un burrito"},{"ray sword"}}),
            new Hero(7, 2, 1, 7, 4, 4 , new std::string[4]{{"lorem"},{"ipsum"},{"XD"},{"no"}}),
            new Hero(8, 4, 3, 9, 7, 8 , new std::string[4]{{"este wey no hace nada"},{"nada"},{"nada 2"},{"dormir"}})
        }
    };
    */

    std::cout << "Character info:" << std::endl;
    for(int i{};i<4;i++)
    {
         std::cout << "Skill " << i+1 << ": " <<*(hero1->GetSkills()+i) << std::endl;
    }
    std::cout << "Health: " << hero1->GetHealth() << std::endl;
    std::cout << "Exp: " << hero1->GetExp() << std::endl;
    std::cout << "Luck:" << hero1->GetLuck() << std::endl;
    std::cout << "Speed: " << hero1->GetSpeed() << std::endl;
    std::cout << "Streght: " << hero1->GetStrenght() << std::endl;
    hero1->SetLore("la chinita en el bosque se perdio");
    hero1->GetDamage(2);
    std::cout << "Health: " << hero1->GetHealth() << std::endl;
    std::cout << "Lore: : " << hero1->GetLore() << std::endl;
    delete &hero1; 

    std::cin.get();
    return 0;
}