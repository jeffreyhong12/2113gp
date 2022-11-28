#include <iostream>
#include <string>
#include<ctime>
#include <vector>
using namespace std;

//Enumerate characters by class
class initial_pig_1 {//Initial pig number one
public:
    string name = "Pikachu";
    int HP = 210;
    int attack = 100;
    int defense = 35;
    string skill = "fetters";//Nicknames for skills that do not affect program calculations
    string skill_effect = "stunned";//The type of skills, there are only two types of skills (stunned and burn), this is stunned, so that the opponent a certain probability of not being able to act in the next turn
    int skill_level = 1;//Skill level is 1, there is a 50% chance of stun. Stun probability algorithm is x/(x+1), x is the skill level, the highest skill level is three
    int skill_attack = 70;//Attack power of this skill when using the skill
    string pig_box = "initial";//The pig pool to which it belong, here is the initial pig pool (there are other pig pools level_1,level_2,level_3,obtainable)


};
class initial_pig_2 {
public:
    string name = "Bulbasaur";
    int HP = 220;
    int attack = 80;
    int defense = 45;
    string skill = "Sludge Bomb";
    string skill_effect = "burn";//Burn, causing the opposite side to take damage at the beginning of the next few turns
    int skill_level = 1;//Skill level 1 causes the opponent to take 20 points of damage ignoring defense at the beginning of the next 1 turn. If the skill level is 2, it lasts for two rounds of point damage
    int skill_attack = 50;//
    string pig_box = "initial";


};
class initial_pig_3 {
public:
    string name = "Dewgong";
    int HP = 200;
    int attack = 105;
    int defense = 35;
    string skill = "Powder Snow";
    string skill_effect = "stunned";
    int skill_level = 1;
    int skill_attack = 75;
    string pig_box = "initial";


};
class initial_pig_4 {
public:
    string name = "Grimer";
    int HP = 250;
    int attack = 75;
    int defense = 45;
    string skill = "Eruption";
    string skill_effect = "burn";
    int skill_level = 1;
    int skill_attack = 50;
    string pig_box = "initial";


};
class initial_pig_5 {
public:
    string name = "Gastly";
    int HP = 180;
    int attack = 120;
    int defense = 35;
    string skill = "Zap Cannon";
    string skill_effect = "stunned";
    int skill_level = 1;
    int skill_attack = 90;
    string pig_box = "initial";


};




//The following are the enemies of the first  Pokémon Gym
class level_1_AI_1 {//The first enemy of the firstfirst Pokémon Gym
public:
    string name = "Plusle_AI";
    int HP = 180;
    int attack = 80;
    int defense = 30;
    string pig_box = "level_1";
    string skill = "None";


};
class level_1_AI_2 {//The second enemy of the first Pokémon Gym
public:
    string name = "Arbok_AI";
    int HP = 210;
    int attack = 70;
    int defense = 30;
    string skill = "None";
    string pig_box = "level_1";


};
class level_1_AI_3 {
public:
    string name = "Nidoqueen_AI";
    int HP = 230;
    int attack = 65;
    int defense = 25;
    string skill = "None";
    string pig_box = "level_1";


};
class level_1_AI_4 {
public:
    string name = "Nidorino_AI";
    int HP = 180;
    int attack = 90;
    int defense = 35;
    string skill = "None";
    string pig_box = "level_1";


};

//The following are the enemies of the second Pokémon Gym
class level_2_AI_1 {
public:
    string name = "Muk_AI";
    int HP = 270;
    int attack = 75;
    int defense = 48;
    string skill = "Blast Burn";
    string skill_effect = "burn";
    int skill_level = 1;
    int skill_attack = 50;
    string pig_box = "level_2";


};
class level_2_AI_2 {
public:
    string name = "Seel_AI";
    int HP = 230;
    int attack = 120;
    int defense = 35;
    string skill = "Torment";
    string skill_effect = "stunned";
    int skill_level = 1;
    int skill_attack = 90;
    string pig_box = "level_2";


};
class level_2_AI_3 {
public:
    string name = "Venomoth_AI";
    int HP = 235;
    int attack = 100;
    int defense = 40;
    string skill = "Hyper Voice";
    string skill_effect = "stunned";
    int skill_level = 1;
    int skill_attack = 80;
    string pig_box = "level_2";


};
class level_2_AI_4 {
public:
    string name = "Diglett_AI";
    int HP = 270;
    int attack = 80;
    int defense = 46;
    string skill = "Overheat";
    string skill_effect = "burn";
    int skill_level = 1;
    int skill_attack = 50;
    string pig_box = "level_2";


};


class level_3_AI_1 {
public:
    string name = "Machamp_AI";
    int HP = 350;
    int attack = 90;
    int defense = 50;
    string skill = "Fire Spin";
    string skill_effect = "burn";
    int skill_level = 2;
    int skill_attack = 70;
    string pig_box = "level_3";


};
class level_3_AI_2 {
public:
    string name = "Eevee_AI";
    int HP = 345;
    int attack = 88;
    int defense = 50;
    string skill = "Fire Blast";
    string skill_effect = "burn";
    int skill_level = 2;
    int skill_attack = 80;
    string pig_box = "level_3";


};
class level_3_AI_3 {
public:
    string name = "Flareon_AI";
    int HP = 310;
    int attack = 105;
    int defense = 40;
    string skill = "Supersonic";
    string skill_effect = "stunned";
    int skill_level = 2;
    int skill_attack = 90;
    string pig_box = "level_3";


};
class level_3_AI_4 {
public:
    string name = "Omanyte_AI";
    int HP = 335;
    int attack = 110;
    int defense = 35;
    string skill = "Disable";
    string skill_effect = "stunned";
    int skill_level = 2;
    int skill_attack = 85;
    string pig_box = "level_3";


};



class addable_pig_1 {//pigs available after win the first  Pokémon Gym
public:
    string name = "Manectric";
    int HP = 250;
    int attack = 115;
    int defense = 45;
    string skill = "Dizzy Punch";
    string skill_effect = "stunned";
    int skill_level = 2;
    int skill_attack = 80;
    string pig_box = "obtainable";


};
class addable_pig_2 {
public:
    string name = "Electrike";
    int HP = 260;
    int attack = 110;
    int defense = 40;
    string skill = "Lovely Kiss";
    string skill_effect = "stunned";
    int skill_level = 2;
    int skill_attack = 90;
    string pig_box = "obtainable";


};
class addable_pig_3 {
public:
    string name = "Charmander";
    int HP = 280;
    int attack = 90;
    int defense = 50;
    string skill = "Ember";
    string skill_effect = "burn";
    int skill_level = 2;
    int skill_attack = 65;
    string pig_box = "obtainable";


};
class addable_pig_4 {
public:
    string name = "Charizard";
    int HP = 300;
    int attack = 85;
    int defense = 55;
    string skill = "Fire Spin";
    string skill_effect = "burn";
    int skill_level = 2;
    int skill_attack = 70;
    string pig_box = "obtainable";


};
class addable_pig_5 {
public:
    string name = "Kabutops";
    int HP = 380;
    int attack = 110;
    int defense = 60;
    string skill = "Crush Claw";
    string skill_effect = "burn";
    int skill_level = 3;
    int skill_attack = 90;
    string pig_box = "obtainable";


};
class addable_pig_6 {
public:
    string name = "Snorlax";
    int HP = 350;
    int attack = 130;
    int defense = 55;
    string skill = "Swagger";
    string skill_effect = "stunned";
    int skill_level = 3;
    int skill_attack = 80;
    string pig_box = "obtainable";


};
class addable_pig_7 {
public:
    string name = "Ditto";
    int HP = 320;
    int attack = 120;
    int defense = 55;
    string skill = "Hydro Cannon";
    string skill_effect = "stunned";
    int skill_level = 3;
    int skill_attack = 75;
    string pig_box = "obtainable";


};
class addable_pig_8 {
public:
    string name = "Mewtwo";
    int HP = 315;
    int attack = 115;
    int defense = 50;
    string skill = "Overheat";
    string skill_effect = "burn";
    int skill_level = 3;
    int skill_attack = 80;
    string pig_box = "obtainable";


};
