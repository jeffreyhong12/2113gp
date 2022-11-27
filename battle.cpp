#include <iostream>
#include <string>
#include <vector>
#include "battle.h"
#include "character_v1.3.cpp"
#include<ctime>
#include<windows.h>
#include <stdlib.h>
using namespace std;

void rest() { //Beautification
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << "-";
    }
    cout << endl;
    cout << endl; 
}


struct Pokemens {//Player Genie Database
    string name;
    int HP;
    int attack;
    int defense;
    string skill;
    int skill_level;
    int skill_attack;
    string skill_effect;
    string pigbox;
    int controlled_abnormal_state = 0;
    int harmful_abnormal_state = 0;
};

struct Pokemen_ai {//ai database
    string name;
    int HP;
    int attack;
    int defense;
    string skill;
    int skill_level;
    int skill_attack;
    string skill_effect;
    string pigbox;
    int controlled_abnormal_state = 0;
    int harmful_abnormal_state = 0;
};

int Search(Pokemens animal[], string name) {//Find the location of the name in the array in order to get other information about the array
    for (int i = 0; i < 5; i++) {            //Pokémon number modification location
        if (name == animal[i].name) {
            return i;
        }
    }
    return -1;
}


Pokemens Pokemen[20]; //Player's Pokémons Database
Pokemens Pokemen_ai[10]; //AI's Pokémons Database


int Level_1_input() {
    level_1_AI_1 Plusle_AI;
    level_1_AI_2 Arbok_AI;
    level_1_AI_3 Nidoqueen_AI;
    level_1_AI_4 Nidorino_AI;

    Pokemen_ai[0].name = Plusle_AI.name;//Put the data from the class into the ai animals
    Pokemen_ai[0].HP = Plusle_AI.HP;
    Pokemen_ai[0].attack = Plusle_AI.attack;
    Pokemen_ai[0].defense = Plusle_AI.defense;
    Pokemen_ai[0].skill = Plusle_AI.skill;

    Pokemen_ai[1].name = Arbok_AI.name;
    Pokemen_ai[1].HP = Arbok_AI.HP;
    Pokemen_ai[1].attack = Arbok_AI.attack;
    Pokemen_ai[1].defense = Arbok_AI.defense;
    Pokemen_ai[1].skill = Arbok_AI.skill;

    Pokemen_ai[2].name = Nidoqueen_AI.name;
    Pokemen_ai[2].HP = Nidoqueen_AI.HP;
    Pokemen_ai[2].attack = Nidoqueen_AI.attack;
    Pokemen_ai[2].defense = Nidoqueen_AI.defense;
    Pokemen_ai[2].skill = Nidoqueen_AI.skill;

    Pokemen_ai[3].name = Nidorino_AI.name;
    Pokemen_ai[3].HP = Nidorino_AI.HP;
    Pokemen_ai[3].attack = Nidorino_AI.attack;
    Pokemen_ai[3].defense = Nidorino_AI.defense;
    Pokemen_ai[3].skill = Nidorino_AI.skill;
    return 4;
}

//Pokémon Gym2's ai Pokémons pool 
int Level_2_input() {
    level_2_AI_1 Muk_AI;
    level_2_AI_2 Seel_AI;
    level_2_AI_3 Venomoth_AI;
    level_2_AI_4 Diglett_AI;

    Pokemen_ai[0].name = Muk_AI.name;
    Pokemen_ai[0].HP = Muk_AI.HP;
    Pokemen_ai[0].attack = Muk_AI.attack;
    Pokemen_ai[0].defense = Muk_AI.defense;
    Pokemen_ai[0].skill = Muk_AI.skill;
    Pokemen_ai[0].skill_effect = Muk_AI.skill_effect;
    Pokemen_ai[0].skill_attack = Muk_AI.skill_attack;
    Pokemen_ai[0].skill_level = Muk_AI.skill_level;
    Pokemen_ai[0].pigbox = Muk_AI.pig_box;

    Pokemen_ai[1].name = Seel_AI.name;
    Pokemen_ai[1].HP = Seel_AI.HP;
    Pokemen_ai[1].attack = Seel_AI.attack;
    Pokemen_ai[1].defense = Seel_AI.defense;
    Pokemen_ai[1].skill = Seel_AI.skill;
    Pokemen_ai[1].skill_effect = Seel_AI.skill_effect;
    Pokemen_ai[1].skill_attack = Seel_AI.skill_attack;
    Pokemen_ai[1].skill_level = Seel_AI.skill_level;
    Pokemen_ai[1].pigbox = Seel_AI.pig_box;

    Pokemen_ai[2].name = Venomoth_AI.name;
    Pokemen_ai[2].HP = Venomoth_AI.HP;
    Pokemen_ai[2].attack = Venomoth_AI.attack;
    Pokemen_ai[2].defense = Venomoth_AI.defense;
    Pokemen_ai[2].skill = Venomoth_AI.skill;
    Pokemen_ai[2].skill_effect = Venomoth_AI.skill_effect;
    Pokemen_ai[2].skill_attack = Venomoth_AI.skill_attack;
    Pokemen_ai[2].skill_level = Venomoth_AI.skill_level;
    Pokemen_ai[2].pigbox = Venomoth_AI.pig_box;

    Pokemen_ai[3].name = Diglett_AI.name;
    Pokemen_ai[3].HP = Diglett_AI.HP;
    Pokemen_ai[3].attack = Diglett_AI.attack;
    Pokemen_ai[3].defense = Diglett_AI.defense;
    Pokemen_ai[3].skill = Diglett_AI.skill;
    Pokemen_ai[3].skill_effect = Diglett_AI.skill_effect;
    Pokemen_ai[3].skill_attack = Diglett_AI.skill_attack;
    Pokemen_ai[3].skill_level = Diglett_AI.skill_level;
    Pokemen_ai[3].pigbox = Diglett_AI.pig_box;

    return 4;
}

int Level_3_input() {
    level_3_AI_1 Machamp_AI;
    level_3_AI_2 Eevee_AI;
    level_3_AI_3 Flareon_AI;
    level_3_AI_4 Omanyte_AI;

    Pokemen_ai[0].name = Machamp_AI.name;
    Pokemen_ai[0].HP = Machamp_AI.HP;
    Pokemen_ai[0].attack = Machamp_AI.attack;
    Pokemen_ai[0].defense = Machamp_AI.defense;
    Pokemen_ai[0].skill = Machamp_AI.skill;
    Pokemen_ai[0].skill_effect = Machamp_AI.skill_effect;
    Pokemen_ai[0].skill_attack = Machamp_AI.skill_attack;
    Pokemen_ai[0].skill_level = Machamp_AI.skill_level;
    Pokemen_ai[0].pigbox = Machamp_AI.pig_box;

    Pokemen_ai[1].name = Eevee_AI.name;
    Pokemen_ai[1].HP = Eevee_AI.HP;
    Pokemen_ai[1].attack = Eevee_AI.attack;
    Pokemen_ai[1].defense = Eevee_AI.defense;
    Pokemen_ai[1].skill = Eevee_AI.skill;
    Pokemen_ai[1].skill_effect = Eevee_AI.skill_effect;
    Pokemen_ai[1].skill_attack = Eevee_AI.skill_attack;
    Pokemen_ai[1].skill_level = Eevee_AI.skill_level;
    Pokemen_ai[1].pigbox = Eevee_AI.pig_box;

    Pokemen_ai[2].name = Flareon_AI.name;
    Pokemen_ai[2].HP = Flareon_AI.HP;
    Pokemen_ai[2].attack = Flareon_AI.attack;
    Pokemen_ai[2].defense = Flareon_AI.defense;
    Pokemen_ai[2].skill = Flareon_AI.skill;
    Pokemen_ai[2].skill_effect = Flareon_AI.skill_effect;
    Pokemen_ai[2].skill_attack = Flareon_AI.skill_attack;
    Pokemen_ai[2].skill_level = Flareon_AI.skill_level;
    Pokemen_ai[2].pigbox = Flareon_AI.pig_box;

    Pokemen_ai[3].name = Omanyte_AI.name;
    Pokemen_ai[3].HP = Omanyte_AI.HP;
    Pokemen_ai[3].attack = Omanyte_AI.attack;
    Pokemen_ai[3].defense = Omanyte_AI.defense;
    Pokemen_ai[3].skill = Omanyte_AI.skill;
    Pokemen_ai[3].skill_effect = Omanyte_AI.skill_effect;
    Pokemen_ai[3].skill_attack = Omanyte_AI.skill_attack;
    Pokemen_ai[3].skill_level = Omanyte_AI.skill_level;
    Pokemen_ai[3].pigbox = Omanyte_AI.pig_box;
    return 4;
}

// Pokémon Gym1's player's Pokémons pool 
int Player_input() {
    initial_pig_1 Pikachu;
    initial_pig_2 Bulbasaur;
    initial_pig_3 Dewgong;
    initial_pig_4 Grimer;
    initial_pig_5 Gastly;


    Pokemen[0].name = Pikachu.name;
    Pokemen[0].attack = Pikachu.attack;
    Pokemen[0].HP = Pikachu.HP;
    Pokemen[0].defense = Pikachu.defense;
    Pokemen[0].skill = Pikachu.skill;
    Pokemen[0].skill_attack = Pikachu.skill_attack;
    Pokemen[0].skill_effect = Pikachu.skill_effect;
    Pokemen[0].skill_level = Pikachu.skill_level;
    Pokemen[0].pigbox = Pikachu.pig_box;

    Pokemen[1].name = Bulbasaur.name;
    Pokemen[1].attack = Bulbasaur.attack;
    Pokemen[1].HP = Bulbasaur.HP;
    Pokemen[1].defense = Bulbasaur.defense;
    Pokemen[1].skill = Bulbasaur.skill;
    Pokemen[1].skill_attack = Bulbasaur.skill_attack;
    Pokemen[1].skill_effect = Bulbasaur.skill_effect;
    Pokemen[1].skill_level = Bulbasaur.skill_level;
    Pokemen[1].pigbox = Bulbasaur.pig_box;


    Pokemen[2].name = Dewgong.name;
    Pokemen[2].attack = Dewgong.attack;
    Pokemen[2].HP = Dewgong.HP;
    Pokemen[2].defense = Dewgong.defense;
    Pokemen[2].skill = Dewgong.skill;
    Pokemen[2].skill_attack = Dewgong.skill_attack;
    Pokemen[2].skill_effect = Dewgong.skill_effect;
    Pokemen[2].skill_level = Dewgong.skill_level;
    Pokemen[2].pigbox = Dewgong.pig_box;

    Pokemen[3].name = Grimer.name;
    Pokemen[3].attack = Grimer.attack;
    Pokemen[3].HP = Grimer.HP;
    Pokemen[3].defense = Grimer.defense;
    Pokemen[3].skill = Grimer.skill;
    Pokemen[3].skill_attack = Grimer.skill_attack;
    Pokemen[3].skill_effect = Grimer.skill_effect;
    Pokemen[3].skill_level = Grimer.skill_level;
    Pokemen[3].pigbox = Grimer.pig_box;

    Pokemen[4].name = Gastly.name;
    Pokemen[4].attack = Gastly.attack;
    Pokemen[4].HP = Gastly.HP;
    Pokemen[4].defense = Gastly.defense;
    Pokemen[4].skill = Gastly.skill;
    Pokemen[4].skill_attack = Gastly.skill_attack;
    Pokemen[4].skill_effect = Gastly.skill_effect;
    Pokemen[4].skill_level = Gastly.skill_level;
    Pokemen[4].pigbox = Gastly.pig_box;
    return 5;
}

// Pokémon Gym2's player's Pokémons pool 
int level_2_addable_pig_input() { 
    addable_pig_1 Manectric;
    addable_pig_2 Electrike;
    addable_pig_3 Charmander;
    addable_pig_4 Charizard;

    Pokemen[0].name = Manectric.name;
    Pokemen[0].HP = Manectric.HP;
    Pokemen[0].attack = Manectric.attack;
    Pokemen[0].defense = Manectric.defense;
    Pokemen[0].skill = Manectric.skill;
    Pokemen[0].skill_effect = Manectric.skill_effect;
    Pokemen[0].skill_attack = Manectric.skill_attack;
    Pokemen[0].skill_level = Manectric.skill_level;
    Pokemen[0].pigbox = Manectric.pig_box;

    Pokemen[1].name = Electrike.name;
    Pokemen[1].HP = Electrike.HP;
    Pokemen[1].attack = Electrike.attack;
    Pokemen[1].defense = Electrike.defense;
    Pokemen[1].skill = Electrike.skill;
    Pokemen[1].skill_effect = Electrike.skill_effect;
    Pokemen[1].skill_attack = Electrike.skill_attack;
    Pokemen[1].skill_level = Electrike.skill_level;
    Pokemen[1].pigbox = Electrike.pig_box;

    Pokemen[2].name = Charmander.name;
    Pokemen[2].HP = Charmander.HP;
    Pokemen[2].attack = Charmander.attack;
    Pokemen[2].defense = Charmander.defense;
    Pokemen[2].skill = Charmander.skill;
    Pokemen[2].skill_effect = Charmander.skill_effect;
    Pokemen[2].skill_attack = Charmander.skill_attack;
    Pokemen[2].skill_level = Charmander.skill_level;
    Pokemen[2].pigbox = Charmander.pig_box;

    Pokemen[3].name = Charizard.name;
    Pokemen[3].HP = Charizard.HP;
    Pokemen[3].attack = Charizard.attack;
    Pokemen[3].defense = Charizard.defense;
    Pokemen[3].skill = Charizard.skill;
    Pokemen[3].skill_effect = Charizard.skill_effect;
    Pokemen[3].skill_attack = Charizard.skill_attack;
    Pokemen[3].skill_level = Charizard.skill_level;
    Pokemen[3].pigbox = Charizard.pig_box;


    return 4;

}
int level_3_addable_pig_input() {
    addable_pig_5 Kabutops;
    addable_pig_6 Snorlax;
    addable_pig_7 Ditto;
    addable_pig_8 Mewtwo;
    Pokemen[0].name = Kabutops.name;
    Pokemen[0].HP = Kabutops.HP;
    Pokemen[0].attack = Kabutops.attack;
    Pokemen[0].defense = Kabutops.defense;
    Pokemen[0].skill = Kabutops.skill;
    Pokemen[0].skill_effect = Kabutops.skill_effect;
    Pokemen[0].skill_attack = Kabutops.skill_attack;
    Pokemen[0].skill_level = Kabutops.skill_level;
    Pokemen[0].pigbox = Kabutops.pig_box;

    Pokemen[1].name = Snorlax.name;
    Pokemen[1].HP = Snorlax.HP;
    Pokemen[1].attack = Snorlax.attack;
    Pokemen[1].defense = Snorlax.defense;
    Pokemen[1].skill = Snorlax.skill;
    Pokemen[1].skill_effect = Snorlax.skill_effect;
    Pokemen[1].skill_attack = Snorlax.skill_attack;
    Pokemen[1].skill_level = Snorlax.skill_level;
    Pokemen[1].pigbox = Snorlax.pig_box;

    Pokemen[2].name = Ditto.name;
    Pokemen[2].HP = Ditto.HP;
    Pokemen[2].attack = Ditto.attack;
    Pokemen[2].defense = Ditto.defense;
    Pokemen[2].skill = Ditto.skill;
    Pokemen[2].skill_effect = Ditto.skill_effect;
    Pokemen[2].skill_attack = Ditto.skill_attack;
    Pokemen[2].skill_level = Ditto.skill_level;
    Pokemen[2].pigbox = Ditto.pig_box;

    Pokemen[3].name = Mewtwo.name;
    Pokemen[3].HP = Mewtwo.HP;
    Pokemen[3].attack = Mewtwo.attack;
    Pokemen[3].defense = Mewtwo.defense;
    Pokemen[3].skill = Mewtwo.skill;
    Pokemen[3].skill_effect = Mewtwo.skill_effect;
    Pokemen[3].skill_attack = Mewtwo.skill_attack;
    Pokemen[3].skill_level = Mewtwo.skill_level;
    Pokemen[3].pigbox = Mewtwo.pig_box;
    return 4;
}

bool alive(Pokemens animal[], int index) {//Determine the HP, if the HP is less than 0 then return false
    if (animal[index].HP > 0) {
        return true;
    }
    return false;
}

bool lose(vector<string>bag) {//The victory condition is that all the Pokémons in the ai'bag are dead
    for (int i = 0; i < bag.size(); i++) {
        if (bag[i] != "") {
            return false;
        }
    }
    return true;
}

int level_count = 1;  //Determine how many Gyms have been played

void fight(vector<string>bag, vector<string>bag_ai) {
    srand((unsigned)time(NULL));
    int name;
    cout << "[System]=> " << "Now choose your Pokemens to fight: " << endl;
    cout << "[System]=> " << "Your Pokemens: " << endl;             
    cout << "[PokeBag]=> " << endl;
    for (int i = 0; i < bag.size(); i++) {
        cout << "[" << i << "]" << " ===> " << bag[i] << "\n";
    }
    //cout << endl;
    cin >> name;
    while (name<0 || name>bag.size()) {
        cout << "[System]=> " << "Your Pokemens: " << endl;             
        cout << "[PokeBag]=> " << endl;
        cin >> name;
    }
    

    cout << "[System]=> [" << bag[name] << "] is ready to fight!" << endl;
    string pname = bag[name];

    int choose_ai = (rand() % 1);  //AI selects the battling Pokémon
    cout << "[System]=> " << "Opponent sent [" << bag_ai[choose_ai] << "] to against your Pokemon !" << endl;
    int enemy = Search(Pokemen_ai, bag_ai[choose_ai]);//Get the data of the Pokémons selected by ai
    int fighting_Pokemen = Search(Pokemen, pname);//Get the data of your own Pokémons

    while (true) {
        while (bag[name] == "") {
            int* temp = new int();
            *temp = name;
            name = (rand() % 2);//The player's Pokémons must be alive
            while (name == *temp) {
                name = (rand() % 2);
            }
            delete temp;
            fighting_Pokemen = Search(Pokemen, bag[name]);

        }

        //        Judgment phase
        if (Pokemen[fighting_Pokemen].harmful_abnormal_state > 0) { // Determine whether the Pokémon is in an abnormal state
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] enter a [" << Pokemen_ai[enemy].skill_effect << "] state, will suffer [20] damage per round !" << endl;
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] HP: - [20]" << endl;
            Pokemen[fighting_Pokemen].HP -= 20;
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] now has HP: [" << Pokemen[fighting_Pokemen].HP << "]" << endl;

            Pokemen[fighting_Pokemen].harmful_abnormal_state -= 1;
        }

        //  Determine the HP of Pokémons
        if (!alive(Pokemen, fighting_Pokemen)) {
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] is out of Vitality ! " << endl;
            bag[name] = "";
        }
        //  Determine if the game is over
        if (lose(bag)) {
            cout << "[System]=> You lose, good try...";
            Sleep(5000);
            break;
        }
        //  Switching Pokémon
        while (bag[name] == "") {
            int* temp = new int();
            *temp = name;
            name = (rand() % 2);//The player's Pokémon must be alive
            while (name == *temp) {
                name = (rand() % 2);
            }
            delete temp;
            fighting_Pokemen = Search(Pokemen, bag[name]);
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] is ready to fight" << endl;
        }

        //          Stroke stage
        if (Pokemen[fighting_Pokemen].controlled_abnormal_state == 0) {
            cout << "    ---------------------------------------------------------------" << endl;
            cout << "   | Your Pokemon's HP: [" << Pokemen[fighting_Pokemen].HP << "]" << "   |   " << "Opponent's Pokemon's HP: [" << Pokemen_ai[enemy].HP << "] |" << endl;           //Show HP when attacks
            cout << "    ---------------------------------------------------------------" << endl;
            cout << "[System]=> " << "What should [" << Pokemen[fighting_Pokemen].name << "] do ?" << endl;   //Select attack method  
            cout << "[Pokemon]=> \n" << "1 ===> " << "[Normal Attack] \n" << "2 +++> [" << Pokemen[fighting_Pokemen].skill << "]" << endl;
            int attack_choose;
            cin >> attack_choose;
            while (attack_choose < 1 || attack_choose>2) {
                cout << "[Pokemon]=> \n" << "1 ===> " << "[Normal Attack] \n" << "2 +++> [" << Pokemen[fighting_Pokemen].skill << "]" << endl;
                cin >> attack_choose;
            }
            Sleep(500);

            if (attack_choose == 1) { //Calculation of damage when using normal attacks
                system("cls"); 
                cout << "[System]=> " << "Go ! [" << bag[name] << "] , use [Normal Attack] !" << endl;
                cout << "[System]=> [" << bag[name] << "] does [" << Pokemen[fighting_Pokemen].attack - Pokemen_ai[enemy].defense << "] damage to [" << Pokemen_ai[enemy].name << "] !" << endl;  
                //cout << Pokemen_ai[enemy].name << " has been attacked!" << endl;
                if (Pokemen_ai[enemy].defense < Pokemen[fighting_Pokemen].attack) { //Determine if the AI Pokémo's defense is higher than the player sprite's attack
                    Pokemen_ai[enemy].HP -= (Pokemen[fighting_Pokemen].attack - Pokemen_ai[enemy].defense);//Deduct the HP of the ai
                }
                else {
                    Pokemen_ai[enemy].HP -= 0;
                    cout << "[System]=> " << "Attack seems not effective..." << endl;
                }
            }
            if (attack_choose == 2) { //When attacking with skills
                system("cls"); //After the selection of skills combat clear screen -XX
                cout << "[System]=> " << "Go ! [" << bag[name] << "] use [" << Pokemen[fighting_Pokemen].skill << "] !" << endl;
                cout << "[System]=> [" << bag[name] << "] does [" << Pokemen[fighting_Pokemen].skill_attack - Pokemen_ai[enemy].defense << "] damage to [" << Pokemen_ai[enemy].name << "] !" << endl;  //两句化成一句 -XX
                //cout << Pokemen_ai[enemy].name << " has been attacked!" << endl;
                if (Pokemen_ai[enemy].defense < Pokemen[fighting_Pokemen].skill_attack) {
                    Pokemen_ai[enemy].HP -= (Pokemen[fighting_Pokemen].skill_attack - Pokemen_ai[enemy].defense); //HP deduction according to the formula
                }
                else {
                    cout << "[System]=> " << "Attack seems not effective..." << endl;
                }

                int temp_possible_affect_1 = rand() % (100 + 50 * Pokemen[fighting_Pokemen].skill_level);
                if (temp_possible_affect_1 <= 50) {     //Probability of causing the opponent to have an abnormal status
                    if (Pokemen[fighting_Pokemen].skill_effect == "stunned") {   //Determine which abnormal state it belongs to
                        Pokemen_ai[enemy].controlled_abnormal_state += Pokemen[fighting_Pokemen].skill_level;
                    }
                    else if (Pokemen[fighting_Pokemen].skill_effect == "burn") {
                        Pokemen_ai[enemy].harmful_abnormal_state += Pokemen[fighting_Pokemen].skill_level;
                    }
                    cout << "[System]=> " << "The skill took extra effect, causing the opponent to enter an [" << Pokemen[fighting_Pokemen].skill_effect << "] state !" << endl;
                    cout << "[System]=> " << "The opponent will receive abnormal status for [" << Pokemen[fighting_Pokemen].skill_level << "] round !" << endl;
                }
            }
            cout << "[Pokemon]=> " << Pokemen_ai[enemy].name << " HP: [" << Pokemen_ai[enemy].HP << "]" << endl;
        }
        else if (Pokemen[fighting_Pokemen].controlled_abnormal_state > 0) { //Unable to act this turn, reduce the continuation effect by one turn
            cout << "[System]=> " << Pokemen[fighting_Pokemen].name << " enter a [" << Pokemen_ai[enemy].skill_effect << "] state, can't move in this round..." << endl;
            Pokemen[fighting_Pokemen].controlled_abnormal_state -= 1;
        }


        //  Determining the HP of Pokémon
        if (!alive(Pokemen_ai, enemy)) {
            cout << "[System]=> [" << Pokemen_ai[enemy].name << "] is out of Vitality ! " << endl;
            bag_ai[choose_ai] = "";
        }
        //  Determine if the game is over
        if (lose(bag_ai)) {
            cout << "[System]=> " << "Congratulations ! You win !" << endl;
            cout << "#    #     #                  #     #             # " << endl;
            cout << "#     #   #   ####  #    #    #  #  # # #    #    # " << endl;
            cout << "#      # #   #    # #    #    #  #  # # ##   #    # " << endl;
            cout << "#       #    #    # #    #    #  #  # # # #  #    # " << endl;
            cout << "#       #    #    # #    #    #  #  # # #  # #    # " << endl;
            cout << "#       #    #    # #    #    #  #  # # #   ##    # " << endl;
            cout << "#       #     ####   ####      ## ##  # #    #    # " << endl;
            level_count += 1;
            Sleep(5000);
            break;
        }
        rest();
        Sleep(500);



        //---------------------------------------------------------------------------------------------------------------------------------------------
        //                                                                 AI's attack rounds
        cout << "[System]=> " << "Opponent's turn !" << endl;
        //  Judgment phase
        if (Pokemen_ai[enemy].harmful_abnormal_state > 0) { // Determine whether the damage is in an abnormal state
            cout << "[System]=> " << Pokemen_ai[enemy].name << " enter a [" << Pokemen[fighting_Pokemen].skill_effect << "] state, will suffer [20] damage per round..." << endl;
            cout << "[System]=> " << Pokemen_ai[enemy].name << " is suffering from [" << Pokemen[fighting_Pokemen].skill_effect << "] ,HP: - [20]" << endl;
            Pokemen_ai[enemy].HP -= 20;
            cout << "[System]=> " << Pokemen_ai[enemy].name << "'s HP: [" << Pokemen_ai[enemy].HP << "]" << endl;

            Pokemen_ai[enemy].harmful_abnormal_state -= 1;
        }
        if (!alive(Pokemen_ai, enemy)) { //Determine if ai Pokémon is still alive
            cout << "[System]=> [" << Pokemen_ai[enemy].name << "] is out of Vitality ! " << endl;
            bag_ai[choose_ai] = "";
        }

        //  Determine if the game is over
        if (lose(bag_ai)) {
            cout << "[System]=> " << "Congratulations ! You win !" << endl;
            cout << endl;
            cout << "#    #     #                  #     #             # " << endl;
            cout << "#     #   #   ####  #    #    #  #  # # #    #    # " << endl;
            cout << "#      # #   #    # #    #    #  #  # # ##   #    # " << endl;
            cout << "#       #    #    # #    #    #  #  # # # #  #    # " << endl;
            cout << "#       #    #    # #    #    #  #  # # #  # #    # " << endl;
            cout << "#       #    #    # #    #    #  #  # # #   ##    # "<< endl;
            cout << "#       #     ####   ####      ## ##  # #    #    # " << endl;
            level_count += 1;
            Sleep(5000);
            break;
        }
        // Switching Pokémon
        while (bag_ai[choose_ai] == "") {
            int* temp = new int();
            *temp = choose_ai;
            choose_ai = (rand() % 2);//The attacking ai must still be alive
            while (choose_ai == *temp) {
                choose_ai = (rand() % 2);
            }
            delete temp;
            enemy = Search(Pokemen_ai, bag_ai[choose_ai]);//Get the data of ai reselected Pokémon
        }
        //   Stroke stage
        //  Determining the status of Pokémon
        if (Pokemen_ai[enemy].controlled_abnormal_state == 0) {   
            cout << "[System]=> [" << bag_ai[choose_ai] << "] is ready to fight!" << endl;

            int AI_attack_choose = 0;
            if (Pokemen_ai[enemy].skill != "None") { // Determine if ai has skills
                AI_attack_choose = rand() % 2;
            }
            if (AI_attack_choose == 0) { // ai using normal attack
                cout << "[System]=> [" << bag_ai[choose_ai] << "] is going to attack [" << bag[name] << "] !" << endl;

                cout << "[System]=> [" << bag_ai[choose_ai] << "] does [" << Pokemen_ai[enemy].attack - Pokemen[fighting_Pokemen].defense << "] damage to [" << bag[name] << "] !" << endl;   
                //cout << bag[name] << " has been attacked!" << endl;
                if (Pokemen[fighting_Pokemen].defense < Pokemen_ai[enemy].attack) { //Determine if player Pokémon defense is higher than AI attack power
                    Pokemen[fighting_Pokemen].HP -= (Pokemen_ai[enemy].attack - Pokemen[fighting_Pokemen].defense);
                }
                else {
                    Pokemen[fighting_Pokemen].HP -= 0;
                    cout << "[System]=> " << "Attack seems not effective..." << endl;
                }
            }
            //   If ai chooses to use the skill
            else if (AI_attack_choose == 1) {
                cout << "[System]=> [" << bag_ai[choose_ai] << "] uses " << Pokemen_ai[enemy].skill << " !" << endl;

                cout << "[System]=> [" << bag_ai[choose_ai] << "] does [" << Pokemen_ai[enemy].skill_attack - Pokemen[fighting_Pokemen].defense << "] damage to [" << Pokemen[fighting_Pokemen].name << " !" << endl; 
                //cout << Pokemen[fighting_Pokemen].name << " has been attacked!" << endl;
                if (Pokemen[fighting_Pokemen].defense < Pokemen_ai[enemy].skill_attack) {
                    Pokemen[fighting_Pokemen].HP -= (Pokemen_ai[enemy].skill_attack - Pokemen[fighting_Pokemen].defense);
                }
                else {
                    Pokemen[fighting_Pokemen].HP -= 0;
                    cout << "[System]=> " << "Attack seems not effective..." << endl;
                }
                //   Determine whether the effect of the ai skill is in effect
                int temp_possible_affect_2 = rand() % (100 + 50 * Pokemen_ai[enemy].skill_level);
                if (temp_possible_affect_2 <= 50) {     //Probability of causing the opponent to have an abnormal status
                    if (Pokemen_ai[enemy].skill_effect == "stunned") {   //Determine which abnormal state it belongs to
                        Pokemen[fighting_Pokemen].controlled_abnormal_state += Pokemen_ai[enemy].skill_level;
                    }
                    else if (Pokemen_ai[enemy].skill_effect == "burn") {
                        Pokemen[fighting_Pokemen].harmful_abnormal_state += Pokemen_ai[enemy].skill_level;
                    }
                    cout << "[System]=> " << "The skill took effect, causing the opponent to enter an [" << Pokemen_ai[enemy].skill_effect << "] state !" << endl;
                    cout << "[System]=> " << "The opponent will receive abnormal status for [" << Pokemen_ai[enemy].skill_level << "] round !" << endl;
                }

            }

            cout << "[Pokemon]=> " << Pokemen[fighting_Pokemen].name << " HP: [" << Pokemen[fighting_Pokemen].HP << "]" << endl;
        }
        else if (Pokemen_ai[enemy].controlled_abnormal_state > 0) { //Unable to act this turn, reduce the continuation effect by one turn
            cout << "[System]=> [" << Pokemen_ai[enemy].name << "] enter a " << Pokemen[fighting_Pokemen].skill_effect << " state, can't make a move this round..." << endl;
            Pokemen_ai[enemy].controlled_abnormal_state -= 1;
        }


        //  Determining the HP level of Pokémon
        if (!alive(Pokemen, fighting_Pokemen)) {
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] is out of Vitality ! " << endl;
            bag[name] = "";
        }
        //  Determine if the game is over
        if (lose(bag)) {
            cout << "[System]=> " << endl << "You lose, good try...";
            Sleep(5000);
            break;
        }
        rest();


    }
}

int main_battle() {
    srand((unsigned)time(NULL));
    int input_num;
    int AI_input_num; // Determine how many Pokémons are in the ai Pokémons pool

    switch (level_count) {
        case int(1) :
            input_num = Player_input(); //Retrieve player Pokémons data and read how many there are in total
            cout << "[System]=> " << "Welcome to first gym. The battle is about to begin, get ready !!" << endl;
            AI_input_num = Level_1_input();
            Sleep(1000);
            break;
            case int(2) :
                input_num = level_2_addable_pig_input();
                cout << "[System]=> " << "Welcome to the second gym. The battle is about to begin, get ready!!";
                AI_input_num = Level_2_input();
                Sleep(1000);
                break;
                case int(3) :

                    input_num = level_3_addable_pig_input();
                    cout << "[System]=> " << "Welcome to the third gym. The battle is about to begin, get ready!!";
                    AI_input_num = Level_3_input();
                    Sleep(1000);
                    break;
                    case int(4) :
                        //End Story
                        cout << "[System]=> " << endl; //   End Story
                        cout << "Finally...";
                        Sleep(1000);
                        cout << "the day has arrived.";
                        cout << "Standing on the top trainer ring, you successfully defeated the previous world champion of the Pokémon Contest.\n";
                        cout << "Yes, you are now a veritable Pokémon Master.Youand your Pokémon deserve it all.\n";
                        cout << "\"Congratulations!\", applause, screams, and words of congratulations are constantly heard from the stands to youand your Pokémon.\n";
                        cout << "You enjoy the sense of accomplishment that this moment brings immensely.\n";
                        cout << "\"Congratulations!\", the previous Pokémon Master walked over to you, patted your shoulder, and said with a smile.\n";
                        cout << "Then, take off the Pokémon Master Gold Badge pinned to his chest, and place it in your hand.\n";
                        cout << "You look at the gold medal in your handand feel deeply moved...";
                        exit(1);

    }
    string name;
    int choose_num;
    vector<string> bag;//Personal Backpack
    for (int j = 0; j < 2; j++) {//Select twice

        char backpack_choose = 'N'; // Determine if it is OK to put the Pokémon in the backpack variable
        while (backpack_choose != 'Y') { //Check the properties of the Pokémon and choose whether or not to place the Pokémon in the battle pack
            system("cls");
            cout << "[PokeBag]: ";

            for (vector<string>::iterator i = bag.begin(); i != bag.end(); i++) { // Show backpack
                cout << *i << " ";
            }
            cout << endl;
            cout << "[System]=> " << "The Pokemen you can choose are as follows:" << endl;
            cout << "[System]=> " << "Which Pokemon do you want to carry? (Enter number to see the status)\n";           


            for (int i = 0; i < input_num; i++) {           //Pokémon number modification location
                cout << "[" << i << "]" << " ===> " << Pokemen[i].name << endl;     
            }
            cin >> choose_num;  //Change input Pokémon name to input number, easy for players to input
            name = Pokemen[choose_num].name;
            int i = Search(Pokemen, name);
            while (i == -1) {//Avoiding Mistakes
                cout << "[PokeBag]: ";
                for (vector<string>::iterator i = bag.begin(); i != bag.end(); i++) {
                    cout << *i << " ";
                }
                cout << endl;
                cout << "[System]=> " << "Which Pokemon do you want to carry? (Enter number to see the status)\n";
                cin >> choose_num;
                name = Pokemen[choose_num].name;
                i = Search(Pokemen, name);
            }
            cout << "[System]=> \n" << "Pokemon: [" << Pokemen[i].name << "]" << endl;
            cout << "HP: [" << Pokemen[i].HP << "]" << endl;
            cout << "Attack: [" << Pokemen[i].attack << "]" << endl;
            cout << "Defense: [" << Pokemen[i].defense << "]" << endl;
            cout << "Skill: [" << Pokemen[i].skill << "]" << endl;
            cout << "Skill Power: [" << Pokemen[i].skill_attack << "]" << endl;
            cout << "Skill Effect: [" << Pokemen[i].skill_effect << "]" << endl;
            cout << "Skill Level: [" << Pokemen[i].skill_level << "]" << endl;
            cout << "Belonging Box: [" << Pokemen[i].pigbox << "]" << endl;
            cout << "\n[System]=> " << "Are you sure you want to put this Pokemen in your PokeBag ? (Y / N)" << endl;
            cin >> backpack_choose;


            //  Initialize the abnormal state to prevent the abnormal state of the upper board from remaining
            Pokemen[i].controlled_abnormal_state = 0;
            Pokemen[i].harmful_abnormal_state = 0;
        }

        bag.push_back(name);
        /*cout << "[PokeBag]=> \n";      
        for (vector<string>::iterator i = bag.begin();i != bag.end();i++) {
            cout << *i << " ";
        }
        rest();*/
        Sleep(500);
    }
    // AI selects the battling Pokémon
    int ai_1 = rand() % AI_input_num; 
    int ai_2 = rand() % AI_input_num;
    while (ai_1 == ai_2) {  // Make sure you don't pick a duplicate
        ai_2 = rand() % AI_input_num;
    }
    Sleep(500); 
    system("cls");
    cout << "[System]=> " << "Let the battle begin !" << endl;      
    Sleep(1000);
    cout << "[Gym Master]: " << endl;
    cout << "Pokemon: [" << Pokemen_ai[ai_1].name << "]" << endl;
    cout << "HP: [" << Pokemen_ai[ai_1].HP << "]" << endl;
    cout << "Attack: [" << Pokemen_ai[ai_1].attack << "]" << endl;
    cout << "Defense: [" << Pokemen_ai[ai_1].defense << "]" << endl;
    cout << "Skill: [" << Pokemen_ai[ai_1].skill << "]" << endl;
    if (Pokemen_ai[ai_1].skill != "None") {
        cout << "Skill Power: [" << Pokemen_ai[ai_1].skill_attack << "]" << endl;
        cout << "Skill Effect: [" << Pokemen_ai[ai_1].skill_effect << "]" << endl;
        cout << "Skill Level: [" << Pokemen_ai[ai_1].skill_level << "]" << endl;
    }
    rest();
    Sleep(500);
    //cout << "AI_2: " << endl;       
    cout << "Pokemon: [" << Pokemen_ai[ai_2].name << "]" << endl;
    cout << "HP: [" << Pokemen_ai[ai_2].HP << "]" << endl;
    cout << "Attack: [" << Pokemen_ai[ai_2].attack << "]" << endl;
    cout << "Defense: [" << Pokemen_ai[ai_2].defense << "]" << endl;
    cout << "Skill: [" << Pokemen_ai[ai_2].skill << "]" << endl;
    if (Pokemen_ai[ai_2].skill != "None") {
        cout << "Skill Attack: [" << Pokemen_ai[ai_2].skill_attack << "]" << endl;
        cout << "Skill Effect: [" << Pokemen_ai[ai_2].skill_effect << "]" << endl;
        cout << "Skill Level: [" << Pokemen_ai[ai_2].skill_level << "]" << endl;
    }

    rest();
    vector<string>bag_ai;

    //  Initialize the abnormal state to prevent the abnormal state of the upper board from remaining
    Pokemen_ai[ai_1].controlled_abnormal_state = 0;
    Pokemen_ai[ai_2].controlled_abnormal_state = 0;
    Pokemen_ai[ai_1].harmful_abnormal_state = 0;
    Pokemen_ai[ai_2].harmful_abnormal_state = 0;
    bag_ai.push_back(Pokemen_ai[ai_1].name);
    bag_ai.push_back(Pokemen_ai[ai_2].name);

    fight(bag, bag_ai);

    // Determine if you want to continue the GYM challenge or return to the main menu
    int continue_choose;
    cout << "\n[System]=> " << "The battle is over, your options is: " << endl;
    cout << "[System]=> \n" << "1 ===> Continue to challenge  \n2 ===> Exit to main menu" << endl;
    cin >> continue_choose;
    while (continue_choose < 1 || continue_choose>2) {
        cout << "[System]=> \n" << "1 ===> Continue to challenge  \n2 ===> Exit to main menu" << endl;
        cin >> continue_choose;
    }
    if (continue_choose == 1) {
        main_battle();
    }
    return 0;
}
