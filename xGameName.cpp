#include <iostream>
#include <string>
#include "numGen.cpp"

class Player{
        public:
            std::string playerClass;
            int health;
            int damage;
            int stamina;
    };

int main(){

    int charSelect;
    // ADD ASCII ART FOR TITLE SCREEN AS WELL AS COME UP WITH A NAME FOR THE GAME -- in all caps means this is important --
    std::cout << "Output of the name of the program --undesided-- " << std::endl;
    std::cout << "Press [ENTER] to continue" << std::endl;
    std::cin.ignore();
    system("clear");
    system("sleep 0.5");
    std::cout << "Select a class: " << std::endl;
    std::cout << "  [1] Warrior    " << std::endl;
    std::cout << "  [2]  Mage      " << std::endl;
    std::cout << "  [3]  Giant     " << std::endl;
    std::cout << std::endl;
    std::cout << ">> ";

    // Warrior stats
    //    15 hp
    //    6  dp
    //    5  sp

    // Mage stats
    //    8 hp
    //    3 dp
    //    6 sp

    std::cin >> charSelect;
    if (charSelect == 1){
        // Set player stats == warrior base stats
        Player player;
        player.playerClass = "Warrior";
        player.health = 15;
        player.damage = 6;
        player.stamina = 5;

        system("clear");
        std::cout << "You selected Warrior" << std::endl;
        std::cout << "HP -> "<<  player.health << std::endl;
        std::cout << "DP -> " << player.damage << std::endl;
        std::cout << "SP -> " << player.stamina << std::endl;

    }
    else if (charSelect == 2){
        std::cout << "You selected Mage" << std::endl;
        // Set player stats == mage base stats
        Player player;
        player.playerClass = "Mage";
        player.health = 8;
        player.damage = 3;
        player.stamina = 6;

        system("clear");
        std::cout << "You selected Mage" << std::endl;
        std::cout << "HP -> "<<  player.health << std::endl;
        std::cout << "DP -> " << player.damage << std::endl;
        std::cout << "SP -> " << player.stamina << std::endl;
    }

    else if (charSelect == 3){
        std::cout << "You selected Giant" << std::endl;
        // Set player stats == giant base stats
        Player player;
        player.playerClass = "Giant";
        player.health = 25;
        player.damage = 8;
        player.stamina = 2;

        system("clear");
        std::cout << "You selected Giant" << std::endl;
        std::cout << "HP -> "<<  player.health << std::endl;
        std::cout << "DP -> " << player.damage << std::endl;
        std::cout << "SP -> " << player.stamina << std::endl;
    }

    else {
        std::cout << "Invalid input, please select either [1]Warrior or [2]Mage" <<  std::endl;
    }

    // Some sort of intro to the game
    // Give the player a choice and then get them into a battle so that they dont get bored


}
