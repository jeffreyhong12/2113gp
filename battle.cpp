#include <iostream>
#include <string>
#include <vector>
#include "battle.h"
#include "character_v1.3.cpp"
#include<ctime>
#include<windows.h>
#include <stdlib.h>
using namespace std;

void rest() { //����
    cout << endl;
    for (int i = 0;i < 10;i++) {
        cout << "-";
    }
    cout << endl;
}


struct Pokemens {//��Ҿ������ݿ�
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

struct Pokemen_ai {//ai���ݿ�
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

int Search(Pokemens animal[], string name) {//�ҵ�name��array���λ�� �Ա��ȡarray��������Ϣ
    for (int i = 0;i < 5;i++) {            //���������޸�λ��
        if (name == animal[i].name) {
            return i;
        }
    }
    return -1;
}

Pokemens Pokemen[10]; //��ҵľ������ݿ�
Pokemens Pokemen_ai[10]; //AI �ľ������ݿ�

int Level_1_input() {
    level_1_AI_1 Plusle_AI;
    level_1_AI_2 Arbok_AI;
    level_1_AI_3 Nidoqueen_AI;
    level_1_AI_4 Nidorino_AI;

    Pokemen_ai[0].name = Plusle_AI.name;//��class������ݷŵ�ai animals��
    Pokemen_ai[0].HP = Plusle_AI.HP;
    Pokemen_ai[0].attack = Plusle_AI.attack;
    Pokemen_ai[0].defense = Plusle_AI.defense;
    Pokemen_ai[0].skill = Plusle_AI.skill;
    Pokemen_ai[0].pigbox = Plusle_AI.pig_box;


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
    Pokemen_ai[2].pigbox = Nidoqueen_AI.pig_box;

    Pokemen_ai[3].name = Nidorino_AI.name;
    Pokemen_ai[3].HP = Nidorino_AI.HP;
    Pokemen_ai[3].attack = Nidorino_AI.attack;
    Pokemen_ai[3].defense = Nidorino_AI.defense;
    Pokemen_ai[3].skill = Nidorino_AI.skill;
    Pokemen_ai[3].pigbox = Nidorino_AI.pig_box;
    return 4;
}

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

    Pokemen_ai[3].name = Venomoth_AI.name;
    Pokemen_ai[3].HP = Venomoth_AI.HP;
    Pokemen_ai[3].attack = Venomoth_AI.attack;
    Pokemen_ai[3].defense = Venomoth_AI.defense;
    Pokemen_ai[3].skill = Venomoth_AI.skill;
    Pokemen_ai[3].skill_effect = Venomoth_AI.skill_effect;
    Pokemen_ai[3].skill_attack = Venomoth_AI.skill_attack;
    Pokemen_ai[3].skill_level = Venomoth_AI.skill_level;
    Pokemen_ai[3].pigbox = Venomoth_AI.pig_box;

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


int level_2_addable_pig_input() { //������Ҿ����
    addable_pig_1 Manectric;
    addable_pig_2 Electrike;
    addable_pig_3 Charmander;
    addable_pig_4 Charizard;
    addable_pig_5 Kabutops;
    addable_pig_6 Snorlax;
    addable_pig_7 Ditto;
    addable_pig_8 Mewtwo;

    Pokemen_ai[0].name = Manectric.name;
    Pokemen_ai[0].HP = Manectric.HP;
    Pokemen_ai[0].attack = Manectric.attack;
    Pokemen_ai[0].defense = Manectric.defense;
    Pokemen_ai[0].skill = Manectric.skill;
    Pokemen_ai[0].skill_effect = Manectric.skill_effect;
    Pokemen_ai[0].skill_attack = Manectric.skill_attack;
    Pokemen_ai[0].skill_level = Manectric.skill_level;
    Pokemen_ai[0].pigbox = Manectric.pig_box;

    Pokemen_ai[1].name = Electrike.name;
    Pokemen_ai[1].HP = Electrike.HP;
    Pokemen_ai[1].attack = Electrike.attack;
    Pokemen_ai[1].defense = Electrike.defense;
    Pokemen_ai[1].skill = Electrike.skill;
    Pokemen_ai[1].skill_effect = Electrike.skill_effect;
    Pokemen_ai[1].skill_attack = Electrike.skill_attack;
    Pokemen_ai[1].skill_level = Electrike.skill_level;
    Pokemen_ai[1].pigbox = Electrike.pig_box;

    Pokemen_ai[2].name = Charmander.name;
    Pokemen_ai[2].HP = Charmander.HP;
    Pokemen_ai[2].attack = Charmander.attack;
    Pokemen_ai[2].defense = Charmander.defense;
    Pokemen_ai[2].skill = Charmander.skill;
    Pokemen_ai[2].skill_effect = Charmander.skill_effect;
    Pokemen_ai[2].skill_attack = Charmander.skill_attack;
    Pokemen_ai[2].skill_level = Charmander.skill_level;
    Pokemen_ai[2].pigbox = Charmander.pig_box;

    Pokemen_ai[3].name = Charizard.name;
    Pokemen_ai[3].HP = Charizard.HP;
    Pokemen_ai[3].attack = Charizard.attack;
    Pokemen_ai[3].defense = Charizard.defense;
    Pokemen_ai[3].skill = Charizard.skill;
    Pokemen_ai[3].skill_effect = Charizard.skill_effect;
    Pokemen_ai[3].skill_attack = Charizard.skill_attack;
    Pokemen_ai[3].skill_level = Charizard.skill_level;
    Pokemen_ai[3].pigbox = Charizard.pig_box;

    Pokemen_ai[4].name = Kabutops.name;
    Pokemen_ai[4].HP = Kabutops.HP;
    Pokemen_ai[4].attack = Kabutops.attack;
    Pokemen_ai[4].defense = Kabutops.defense;
    Pokemen_ai[4].skill = Kabutops.skill;
    Pokemen_ai[4].skill_effect = Kabutops.skill_effect;
    Pokemen_ai[4].skill_attack = Kabutops.skill_attack;
    Pokemen_ai[4].skill_level = Kabutops.skill_level;
    Pokemen_ai[4].pigbox = Kabutops.pig_box;

    Pokemen_ai[5].name = Snorlax.name;
    Pokemen_ai[5].HP = Snorlax.HP;
    Pokemen_ai[5].attack = Snorlax.attack;
    Pokemen_ai[5].defense = Snorlax.defense;
    Pokemen_ai[5].skill = Snorlax.skill;
    Pokemen_ai[5].skill_effect = Snorlax.skill_effect;
    Pokemen_ai[5].skill_attack = Snorlax.skill_attack;
    Pokemen_ai[5].skill_level = Snorlax.skill_level;
    Pokemen_ai[5].pigbox = Snorlax.pig_box;

    Pokemen_ai[6].name = Ditto.name;
    Pokemen_ai[6].HP = Ditto.HP;
    Pokemen_ai[6].attack = Ditto.attack;
    Pokemen_ai[6].defense = Ditto.defense;
    Pokemen_ai[6].skill = Ditto.skill;
    Pokemen_ai[6].skill_effect = Ditto.skill_effect;
    Pokemen_ai[6].skill_attack = Ditto.skill_attack;
    Pokemen_ai[6].skill_level = Ditto.skill_level;
    Pokemen_ai[6].pigbox = Ditto.pig_box;

    Pokemen_ai[7].name = Mewtwo.name;
    Pokemen_ai[7].HP = Mewtwo.HP;
    Pokemen_ai[7].attack = Mewtwo.attack;
    Pokemen_ai[7].defense = Mewtwo.defense;
    Pokemen_ai[7].skill = Mewtwo.skill;
    Pokemen_ai[7].skill_effect = Mewtwo.skill_effect;
    Pokemen_ai[7].skill_attack = Mewtwo.skill_attack;
    Pokemen_ai[7].skill_level = Mewtwo.skill_level;
    Pokemen_ai[7].pigbox = Mewtwo.pig_box;

    return 8;

    
}

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
    Pokemen[4].pigbox = Grimer.pig_box;

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


bool alive(Pokemens animal[], int index) {//�ж�����ֵ
    if (animal[index].HP > 0) {
        return true;
    }
    return false;
}

bool lose(vector<string>bag) {//ʤ��������bag��ľ��鶼����
    for (int i = 0;i < bag.size();i++) {
        if (bag[i] != "") {
            return false;
        }
    }
    return true;
}

int level_count = 1;  //�жϴ򵽵ڼ���������

void fight(vector<string>bag, vector<string>bag_ai) {
    srand((unsigned)time(NULL));
    int name;
    cout << "Choose your Pokemen to fight: " << endl;
    cout << "Your Pokemen: ";
    for (int i = 0; i < bag.size(); i++) {
        cout << i << ":" << bag[i] << " ";
    }
    cout << endl;
    cin >> name;
    cout << bag[name] << " is going to fight!" << endl;
    string pname = bag[name];

    int choose_ai = (rand() % 1);  //AI ѡ���ս�ľ���
    cout << "AI sent " << bag_ai[choose_ai] << " to fight" << endl;
    int enemy = Search(Pokemen_ai, bag_ai[choose_ai]);//��ȡaiѡ��ľ��������
    int fighting_Pokemen = Search(Pokemen, pname);//��ȡ�Լ����������

    while (true) {
        //        �ж��׶�
        if (Pokemen[fighting_Pokemen].harmful_abnormal_state > 0) { // �ж��Ƿ����˺��쳣״̬
            cout << Pokemen[fighting_Pokemen].name << " enter a " << Pokemen_ai[enemy].skill_effect << " state, will suffer 20 damage" << endl;
            cout << Pokemen[fighting_Pokemen].name << " HP: - 20" << endl;
            Pokemen[fighting_Pokemen].HP -= 20;
            cout << Pokemen[fighting_Pokemen].name << " HP: " << Pokemen[fighting_Pokemen].HP << endl;

            Pokemen[fighting_Pokemen].harmful_abnormal_state -= 1;
        }

        //  �жϾ���Ѫ�����
        if (!alive(Pokemen, fighting_Pokemen)) {
            cout << Pokemen[fighting_Pokemen].name << " is dead!" << endl;
            bag[name] = "";
        }
        //  �ж϶Ծ��Ƿ����
        if (lose(bag)) {
            cout << endl << "You lose!" << endl;
            Sleep(5000);
            break;
        }
        //  �л�����
        while (bag[name] == "") {
            int* temp = new int();
            *temp = name;
            name = (rand() % 2);//��ҵľ�������Ǵ��״̬
            while (name == *temp) {
                name = (rand() % 2);
            }
            delete temp;
            fighting_Pokemen = Search(Pokemen, bag[name]);
        }
        //          ���н׶�
        if (Pokemen[fighting_Pokemen].controlled_abnormal_state == 0) {
            cout << "choose your attack style" << endl;   //ѡ�񹥻���ʽ
            cout << "1." << "normal attack     " << "2." << Pokemen[fighting_Pokemen].skill << endl;
            int attack_choose;
            cin >> attack_choose;
            Sleep(500);

            if (attack_choose == 1) { //ʹ����ͨ����ʱ���˺�����
                cout << bag[name] << " use normal attack" << endl;
                cout << "HP- " << Pokemen[fighting_Pokemen].attack - Pokemen_ai[enemy].defense << endl;
                cout << Pokemen_ai[enemy].name << " has been attacked!" << endl;
                if (Pokemen_ai[enemy].defense < Pokemen[fighting_Pokemen].attack) { //�ж�AI����������Ƿ����Ҿ��鹥������
                    Pokemen_ai[enemy].HP -= (Pokemen[fighting_Pokemen].attack - Pokemen_ai[enemy].defense);//���ݹ�ʽ�۳�ai����������Ѫ��
                }
                else {
                    Pokemen_ai[enemy].HP -= 0;
                }
            }
            if (attack_choose == 2) { //ʹ�ü��ܹ���ʱ
                cout << bag[name] << " use " << Pokemen[fighting_Pokemen].skill << endl;
                cout << "HP- " << Pokemen[fighting_Pokemen].skill_attack - Pokemen_ai[enemy].defense << endl;
                cout << Pokemen_ai[enemy].name << " has been attacked!" << endl;
                if (Pokemen_ai[enemy].defense < Pokemen[fighting_Pokemen].skill_attack) {
                    Pokemen_ai[enemy].HP -= (Pokemen[fighting_Pokemen].skill_attack - Pokemen_ai[enemy].defense); //���ݹ�ʽ��Ѫ
                }
                else {
                    Pokemen_ai[enemy].HP -= 0;
                }

                int temp_possible_affect_1 = rand() % (100 + 50 * Pokemen[fighting_Pokemen].skill_level);
                if (temp_possible_affect_1 <= 50) {     //����ʹ�Է����쳣״̬
                    if (Pokemen[fighting_Pokemen].skill_effect == "stunned") {   //�ж����������쳣״̬
                        Pokemen_ai[enemy].controlled_abnormal_state += Pokemen[fighting_Pokemen].skill_level;
                    }
                    else if (Pokemen[fighting_Pokemen].skill_effect == "burned") {
                        Pokemen_ai[enemy].harmful_abnormal_state += Pokemen[fighting_Pokemen].skill_level;
                    }
                    cout << "The skill took effect, causing the opponent to enter an " << Pokemen[fighting_Pokemen].skill_effect << " state" << endl;
                    cout << "The opponent will receive abnormal status for " << Pokemen[fighting_Pokemen].skill_level << " round" << endl;
                }
            }
            cout << Pokemen_ai[enemy].name << " HP: " << Pokemen_ai[enemy].HP << endl;
        }
        else if (Pokemen[fighting_Pokemen].controlled_abnormal_state > 0) { //��غ��޷��ж���������Ч������һ�غ�
            cout << Pokemen[fighting_Pokemen].name << " enter a " << Pokemen_ai[enemy].skill_effect << " state, can't make an action this round" << endl;
            Pokemen[fighting_Pokemen].controlled_abnormal_state -= 1;
        }

        //  �жϾ���Ѫ�����
        if (!alive(Pokemen_ai, enemy)) {
            cout << Pokemen_ai[enemy].name << " is dead!" << endl;
            bag_ai[choose_ai] = "";
        }
        //  �ж϶Ծ��Ƿ����
        if (lose(bag_ai)) {
            cout << "You win!" << endl;
            level_count += 1;
            Sleep(5000);
            break;
        }
        rest();
        Sleep(500);



        //---------------------------------------------------------------------------------------------------------------------------------------------
        //                                                                 AI �Ĺ����غ�
        cout << "AI's turn!" << endl;
        //  �ж��׶�
        if (Pokemen_ai[enemy].harmful_abnormal_state > 0) { // �ж��Ƿ����˺��쳣״̬
            cout << Pokemen_ai[enemy].name << " enter a " << Pokemen[fighting_Pokemen].skill_effect << " state, will suffer 20 damage" << endl;
            cout << Pokemen_ai[enemy].name << " HP: - 20" << endl;
            Pokemen_ai[enemy].HP -= 20;
            cout << Pokemen_ai[enemy].name << " HP: " << Pokemen_ai[enemy].HP << endl;

            Pokemen_ai[enemy].harmful_abnormal_state -= 1;
        }
        if (!alive(Pokemen_ai, enemy)) { //�ж�ai�����Ƿ񻹴��
            cout << Pokemen_ai[enemy].name << " is dead!" << endl;
            bag_ai[choose_ai] = "";
        }

        //  �ж϶Ծ��Ƿ����
        if (lose(bag_ai)) {
            cout << "You win!" << endl;
            level_count += 1;
            Sleep(5000);
            break;
        }
        // �л�����
        while (bag_ai[choose_ai] == "") {
            int* temp = new int();
            *temp = choose_ai;
            choose_ai = (rand() % 2);//������ai ���뻹�Ǵ��״̬
            while (choose_ai == *temp) {
                choose_ai = (rand() % 2);
            }
            delete temp;
            enemy = Search(Pokemen_ai, bag_ai[choose_ai]);//��ȡai����ѡ��ľ��������
        }

        //  ���н׶�
        //  �жϾ���״̬
        if (Pokemen_ai[enemy].controlled_abnormal_state == 0) {   // �жϾ����Ƿ����޷��ж�״̬
            cout << bag_ai[choose_ai] << "is going to fight!" << endl;

            int AI_attack_choose = 0;
            if (Pokemen_ai[enemy].skill != "None") { // �ж�ai��û�м���
                AI_attack_choose = rand() % 2;
            }
            if (AI_attack_choose == 0) { // aiʹ����ͨ����
                cout << bag_ai[choose_ai] << " is going to attack " << bag[name] << "!" << endl;

                cout << "HP- " << Pokemen_ai[enemy].attack - Pokemen[fighting_Pokemen].defense << endl;
                cout << bag[name] << " has been attacked!" << endl;
                if (Pokemen[fighting_Pokemen].defense < Pokemen_ai[enemy].attack) { //�ж���Ҿ�������Ƿ��AI��������
                    Pokemen[fighting_Pokemen].HP -= (Pokemen_ai[enemy].attack - Pokemen[fighting_Pokemen].defense);//���ݹ�ʽ�۳���Ҿ����Ѫ��
                }
                else {
                    Pokemen[fighting_Pokemen].HP -= 0;
                }
            }
            //   ���aiѡ��ʹ�ü���
            else if (AI_attack_choose == 1) {
                cout << bag_ai[choose_ai] << " use " << Pokemen_ai[enemy].skill << endl;

                cout << "HP- " << Pokemen_ai[enemy].skill_attack - Pokemen[fighting_Pokemen].defense << endl;
                cout << Pokemen[fighting_Pokemen].name << " has been attacked!" << endl;
                if (Pokemen[fighting_Pokemen].defense < Pokemen_ai[enemy].skill_attack) {
                    Pokemen[fighting_Pokemen].HP -= (Pokemen_ai[enemy].skill_attack - Pokemen[fighting_Pokemen].defense); //���ݹ�ʽ��Ѫ
                }
                else {
                    Pokemen[fighting_Pokemen].HP -= 0;
                }
                //   �ж�ai���ܵ�Ч����û����Ч
                int temp_possible_affect_2 = rand() % (100 + 50 * Pokemen_ai[enemy].skill_level);
                if (temp_possible_affect_2 <= 50) {     //����ʹ�Է����쳣״̬
                    if (Pokemen_ai[enemy].skill_effect == "stunned") {   //�ж����������쳣״̬
                        Pokemen[fighting_Pokemen].controlled_abnormal_state += Pokemen_ai[enemy].skill_level;
                    }
                    else if (Pokemen_ai[enemy].skill_effect == "burned") {
                        Pokemen[fighting_Pokemen].harmful_abnormal_state += Pokemen_ai[enemy].skill_level;
                    }
                    cout << "The skill took effect, causing the opponent to enter an " << Pokemen_ai[enemy].skill_effect << " state" << endl;
                    cout << "The opponent will receive abnormal status for " << Pokemen_ai[enemy].skill_level << " round" << endl;
                }

            }

            cout << Pokemen[fighting_Pokemen].name << " HP: " << Pokemen[fighting_Pokemen].HP << endl;
        }
        else if (Pokemen_ai[enemy].controlled_abnormal_state > 0) { //��غ��޷��ж���������Ч������һ�غ�
            cout << Pokemen_ai[enemy].name << " enter a " << Pokemen[fighting_Pokemen].skill_effect << " state, can't make an action this round" << endl;
            Pokemen_ai[enemy].controlled_abnormal_state -= 1;
        }


        //  �жϾ���Ѫ�����
        if (!alive(Pokemen, fighting_Pokemen)) {
            cout << Pokemen[fighting_Pokemen].name << " is dead!" << endl;
            bag[name] = "";
        }
        //  �ж϶Ծ��Ƿ����
        if (lose(bag)) {
            cout << endl << "You lose!" << endl;
            Sleep(5000);
            break;
        }
    }
}

int main_battle() {
    srand((unsigned)time(NULL));
    int AI_input_num; // �ж�ai��������м�ֻ���� 
    int input_num;

    // �жϽ���ĵ���
    switch (level_count) {
        case int(1) :
            input_num = Player_input(); //��ȡ��Ҿ������ݣ�����ȡһ���ж���ֻ
            cout << "Welcome to first gym. The battle is about to begin, get ready!!" << endl;
            AI_input_num = Level_1_input();
            Sleep(1000);
            break;
            case int(2) :
                input_num = level_2_addable_pig_input();
                cout << "Welcome to the second gym. The battle is about to begin, get ready!!";
                AI_input_num = Level_2_input();
                Sleep(1000);
                break;
                case int(3) :
                    cout << "Welcome to the third gym. The battle is about to begin, get ready!!";
                    break;

    }
    string name;
    int choose_num;
    vector<string> bag;//���˱���
    for (int j = 0; j < 2; j++) {//ѡ����

        char backpack_choose = 'N'; // �Ƿ�ȷ����������뱳������
        while (backpack_choose != 'Y') { //�鿴�������ԣ���ѡ���Ƿ�ȷ������������ս����
            system("cls");
            cout << "The Pokemen you can choose are as follows:" << endl;
            cout << "enter your pet: ";
            for (int i = 0; i < input_num; i++) {           //���������޸�λ��
                cout << i << "." << Pokemen[i].name << "     ";
            }
            cout << endl;
            cin >> choose_num;  //�����뾫�����ָ�Ϊ�������֣������������
            name = Pokemen[choose_num].name;
            int i = Search(Pokemen, name);
            while (i == -1) {//�������
                cout << "enter your pet:" << endl;
                cin >> choose_num;
                i = Search(Pokemen, name);
            }
            cout << "The pet: " << Pokemen[i].name << endl;
            cout << "HP: " << Pokemen[i].HP << endl;
            cout << "Attack: " << Pokemen[i].attack << endl;
            cout << "Defense: " << Pokemen[i].defense << endl;
            cout << "Skill: " << Pokemen[i].skill << endl;
            cout << "Skill Attack: " << Pokemen[i].skill_attack << endl;
            cout << "Skill Effect: " << Pokemen[i].skill_effect << endl;
            cout << "Skill Level: " << Pokemen[i].skill_level << endl;
            cout << "Belonging Box: " << Pokemen[i].pigbox << endl;
            cout << "Are you sure you want to put this Pokemen in your backpack��Y / N��" << endl;
            cin >> backpack_choose;
        }
        bag.push_back(name);
        cout << "your bag: ";
        for (vector<string>::iterator i = bag.begin(); i != bag.end(); i++) {
            cout << *i << " ";
        }
        rest();
        Sleep(500);
    }
    // AIѡ���ս����
    int ai_1 = rand() % AI_input_num; //ai�Ӿ�������ѡ���ս����
    int ai_2 = rand() % AI_input_num;
    while (ai_1 == ai_2) {  // ȷ������ѡ���ظ���
        ai_2 = rand() % AI_input_num;
    }
    Sleep(500); //�ӳ����
    cout << "AI_1: " << endl;//����AI����ҶԴ�ÿ��ֻѡһ������������һ�غ� ��δ�����쳣״̬
    cout << "The pet: " << Pokemen_ai[ai_1].name << endl;
    cout << "HP: " << Pokemen_ai[ai_1].HP << endl;
    cout << "Attack: " << Pokemen_ai[ai_1].attack << endl;
    cout << "Defense: " << Pokemen_ai[ai_1].defense << endl;
    cout << "Skill: " << Pokemen_ai[ai_1].skill << endl;
    if (Pokemen_ai[ai_1].skill != "None") {
        cout << "Skill Attack: " << Pokemen_ai[ai_1].skill_attack << endl;
        cout << "Skill Effect: " << Pokemen_ai[ai_1].skill_effect << endl;
        cout << "Skill Level: " << Pokemen_ai[ai_1].skill_level << endl;
    }
    rest();
    Sleep(500);
    cout << "AI_2: " << endl;
    cout << "The pet: " << Pokemen_ai[ai_2].name << endl;
    cout << "HP: " << Pokemen_ai[ai_2].HP << endl;
    cout << "Attack: " << Pokemen_ai[ai_2].attack << endl;
    cout << "Defense: " << Pokemen_ai[ai_2].defense << endl;
    cout << "Skill: " << Pokemen_ai[ai_2].skill << endl;
    if (Pokemen_ai[ai_2].skill != "None") {
        cout << "Skill Attack: " << Pokemen_ai[ai_2].skill_attack << endl;
        cout << "Skill Effect: " << Pokemen_ai[ai_2].skill_effect << endl;
        cout << "Skill Level: " << Pokemen_ai[ai_2].skill_level << endl;
    }

    rest();
    vector<string>bag_ai;//ai��ս����
    bag_ai.push_back(Pokemen_ai[ai_1].name);
    bag_ai.push_back(Pokemen_ai[ai_2].name);

    fight(bag, bag_ai);

    // �ж��Ƿ�Ҫ������ս���ݻ��Ƿ������˵�
    int continue_choose;
    cout << "The battle is over, your options is: " << endl;
    cout << "1. Continue to challenge  2. Exit to main menu" << endl;
    cin >> continue_choose;
    if (continue_choose == 1) {
        main_battle();
    }
    return 0;
}
