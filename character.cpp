#include <iostream>
#include <string>
#include<ctime>
#include <vector>
using namespace std;

//用class来罗列character
class initial_pig_1{//一号初始精灵
public:
    string name ="Pikachu";
    int HP = 36;
    int attack =20;
    int defense =10;
    string skill = "stunned";//眩晕，使对方一定概率下一回合内不能行动
    int skill_level = 1;//技能等级为1，有50%的概率眩晕。眩晕概率算法为 x/(x+1),x为技能等级
    int skill_attack = 10;//使用技能时此技能的攻击力
};
class initial_pig_2{//二号初始精灵
public:
    string name = "Bulbasaur";
    int HP = 50;
    int attack = 15;
    int defense =20;
    string skill = "burn";//灼伤，使对面下回合开始时受到伤害
    int skill_level = 1;//技能等级为1，使对面下回合开始时受到10点无视防御力的伤害。如果技能等级为2，则下回合开始时受到20点伤害
    int skill_attack = 10;//使用技能时此技能的攻击力
};




//以下为第一个道馆的敌人
class level_1_AI_1{//第一个道馆的第一个敌人
public:
    string name = "Plusle_AI";
    int HP = 38;
    int attack = 15;
    int defense =5;
    string skill = "none";//第一个道馆的敌人无技能
};
class level_1_AI_2{//第一个道馆的第二个敌人
public:
    string name = "Weedle_AI";
    int HP = 45;
    int attack = 10;
    int defense =10;
    string skill = "none";
};

//以下为第二个道馆的敌人
class level_2_AI_1{//第2个道馆的第一个敌人
public:
    string name = "Muk_AI";
    int HP = 46;
    int attack = 20;
    int defense =10;
    string skill = "stunned";
    int skill_level = 1;
    int skill_attack = 10;
};
class level_2_AI_2{//第2个道馆的第二个敌人
public:
    string name = "Seel_AI";
    int HP = 58;
    int attack = 15;
    int defense =20;
    string skill = "burn";
    int skill_level = 1;
    int skill_attack = 10;
};

//以下为第三个道馆的boss(第三个道馆只有一个boss)
class level_3_AI_boss{
public:
    string name = "Machamp_Boss";
    int HP = 200;
    int attack = 50;
    int defense =35;
    string skill = "stunned";
    int skill_level = 2;
    int skill_attack = 30;
};



class addable_pig_1{//打完第一个道馆后可获得的精灵(以下精灵中随机获得一个)
public:
    string name = "Manectric";
    int HP = 72;
    int attack = 30;
    int defense =20;
    string skill = "stunned";
    int skill_level = 2;
    int skill_attack = 20;
};
class addable_pig_2{//打完第一个道馆后可获得的精灵
public:
    string name = "Electrike";
    int HP = 100;
    int attack = 50;
    int defense =35;
    string skill = "stunned";
    int skill_level = 3;
    int skill_attack = 30;
};
class addable_pig_3{//打完第一个道馆后可获得的精灵
public:
    string name = "Charmander";
    int HP = 85;
    int attack = 25;
    int defense =30;
    string skill = "burn";
    int skill_level = 2;
    int skill_attack = 20;
};
class addable_pig_4{//打完第一个道馆后可获得的精灵
public:
    string name = "Charizard";
    int HP = 110;
    int attack = 40;
    int defense =45;
    string skill = "burn";
    int skill_level = 3;
    int skill_attack = 30;
};
