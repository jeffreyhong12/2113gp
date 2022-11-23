#include <iostream>
#include <string>
#include<ctime>
#include <vector>
using namespace std;

//用class来罗列character
class initial_pig_1{//一号初始精灵
public:
    string name ="Pikachu";
    int HP = 210;
    int attack =100;
    int defense =35;
    string skill = "fetters";//技能的昵称，不影响程序计算
    string skill_effect = "stunned";//技能的类型，目前只有两种类型的技能（stunned和burn），此为眩晕，使对方一定概率下一回合内不能行动
    int skill_level = 1;//技能等级为1，有50%的概率眩晕。眩晕概率算法为 x/(x+1),x为技能等级,技能最高为三级
    int skill_attack = 70;//使用技能时此技能的攻击力
    string pig_box = "initial";//所属的精灵池，此处为初始精灵池（还有其他精灵池level_1,level_2,level_3,obtainable）
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class initial_pig_2{//二号初始精灵
public:
    string name = "Bulbasaur";
    int HP = 220;
    int attack = 80;
    int defense =45;
    string skill ="Sludge Bomb";
    string skill_attack = "burn";//灼伤，使对面下回合开始时受到伤害
    int skill_level = 1;//技能等级为1，使对面下回合开始时受到30点无视防御力的伤害。如果技能等级为2，则下回合开始时受到60点伤害
    int skill_attack = 50;//使用技能时此技能的攻击力
    string pig_box = "initial";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class initial_pig_3{
public:
    string name = "Dewgong";
    int HP = 200;
    int attack = 105;
    int defense =35;
    string skill ="Powder Snow";
    string skill_attack = "stunned";
    int skill_level = 1;
    int skill_attack = 75;
    string pig_box = "initial";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class initial_pig_4{
public:
    string name = "Grimer";
    int HP = 250;
    int attack = 75;
    int defense =45;
    string skill ="Eruption";
    string skill_attack = "burn";
    int skill_level = 1;
    int skill_attack = 50;
    string pig_box = "initial";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class initial_pig_5{
public:
    string name = "Gastly";
    int HP = 180;
    int attack = 120;
    int defense =35;
    string skill ="Zap Cannon";
    string skill_attack = "stunned";
    int skill_level = 1;
    int skill_attack = 90;
    string pig_box = "initial";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};




//以下为第一个道馆的敌人
class level_1_AI_1{//第一个道馆的第一个敌人
public:
    string name = "Plusle_AI";
    int HP = 150;
    int attack = 80;
    int defense =30;
    string pig_box = "level_1";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class level_1_AI_2{//第一个道馆的第二个敌人
public:
    string name = "Arbok_AI";
    int HP = 180;
    int attack = 70;
    int defense =30;
    string pig_box = "level_1";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class level_1_AI_3{//第一个道馆的第二个敌人
public:
    string name = "Nidoqueen_AI";
    int HP = 210;
    int attack = 65;
    int defense =25;
    string pig_box = "level_1";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class level_1_AI_4{//第一个道馆的第二个敌人
public:
    string name = "Nidorino_AI";
    int HP = 160;
    int attack = 90;
    int defense =35;
    string pig_box = "level_1";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};

//以下为第二个道馆的敌人
class level_2_AI_1{//第2个道馆的第一个敌人
public:
    string name = "Muk_AI";
    int HP = 255;
    int attack = 75;
    int defense =48;
    string skill ="Blast Burn";
    string skill_attack = "burn";
    int skill_level = 1;
    int skill_attack = 50;
    string pig_box = "level_2";//第二个道馆的精灵池
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class level_2_AI_2{//第2个道馆的第二个敌人
public:
    string name = "Seel_AI";
    i int HP = 180;
    int attack = 120;
    int defense =35;
    string skill ="Torment";
    string skill_attack = "stunned";
    int skill_level = 1;
    int skill_attack = 90;
    string pig_box = "level_2";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class level_2_AI_3{
public:
    string name = "Venomoth_AI";
    i int HP = 205;
    int attack = 100;
    int defense =40;
    string skill ="Hyper Voice";
    string skill_attack = "stunned";
    int skill_level = 1;
    int skill_attack = 80;
    string pig_box = "level_2";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class level_2_AI_4{
public:
    string name = "Diglett_AI";
    i int HP = 240;
    int attack = 80;
    int defense =46;
    string skill ="Overheat";
    string skill_attack = "burn";
    int skill_level = 1;
    int skill_attack = 50;
    string pig_box = "level_2";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};

//以下为第三个道馆的boss(第三个道馆只有一个boss)
/*class level_3_AI_boss{
public:
    string name = "Machamp_Boss";
    int HP = 200;
    int attack = 50;
    int defense =35;
    string skill_attack = "stunned";
    int skill_level = 2;
    int skill_attack = 30;
};
*/



class addable_pig_1{//打完第一个道馆后可获得的精灵(以下精灵中随机获得一个)
public:
    string name = "Manectric";
    int HP = 250;
    int attack = 115;
    int defense =45;
    string skill ="Dizzy Punch";
    string skill_attack = "stunned";
    int skill_level = 2;
    int skill_attack = 80;
    string pig_box = "obtainable";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class addable_pig_2{//打完第一个道馆后可获得的精灵
public:
    string name = "Electrike";
    int HP = 260;
    int attack = 110;
    int defense =40;
    string skill ="Lovely Kiss";
    string skill_attack = "stunned";
    int skill_level = 2;
    int skill_attack = 90;
    string pig_box = "obtainable";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class addable_pig_3{//打完第一个道馆后可获得的精灵
public:
    string name = "Charmander";
    int HP = 280;
    int attack = 90;
    int defense =50;
    string skill ="Ember";
    string skill_attack = "burn";
    int skill_level = 2;
    int skill_attack = 65;
    string pig_box = "obtainable";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
class addable_pig_4{//打完第一个道馆后可获得的精灵
public:
    string name = "Charizard";
    int HP = 300;
    int attack = 85;
    int defense =55;
    string skill ="Fire Spin";
    string skill_attack = "burn";
    int skill_level = 2;
    int skill_attack = 70;
    string pig_box = "obtainable";
    int controlled_abnormal_state =0;
    int harmful_abnormal_state =0;
};
