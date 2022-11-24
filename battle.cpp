#include <iostream>
#include <string>
#include <vector>
#include "battle.h"
#include "character_v1.2.2.cpp"
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
    cout << endl; //�໻һ�� -XX
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

//  ����������ai �Ѳ���-XX 
int Level_1_input(){
    level_1_AI_1 Plusle_AI;
    level_1_AI_2 Arbok_AI;
    level_1_AI_3 Nidoqueen_AI;
    level_1_AI_4 Nidorino_AI;

    Pokemen_ai[0].name = Plusle_AI.name;//��class������ݷŵ�ai animals��
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

//����2��ai����� �Ѳ���-XX 
int Level_2_input(){
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

// ����1 ��Ҿ���� �Ѳ���-XX
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

// ����2 ��Ҿ���� �Ѳ���-XX
int level_2_addable_pig_input() { //��һ�����ݽ�����addable
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

void fight(vector<string>bag,vector<string>bag_ai) {
    srand((unsigned)time(NULL));
    int name;
    cout << "[System]=> " << "Now choose your Pokemens to fight: " << endl;
    cout << "[System]=> " << "Your Pokemens: " << endl;             //+���� -XX
    cout << "[PokeBag]=> " << endl;
    for (int i = 0;i < bag.size();i++) {
        cout << "[" << i << "]" << " ===> " << bag[i] << "\n";
    }
    cout << endl;
    cin >> name;
    cout << "[System]=> [" << bag[name] << "] is ready to fight!" << endl;
    string pname = bag[name];

    int choose_ai = (rand() % 1);  //AI ѡ���ս�ľ���
    cout << "[System]=> " << "Opponent sent [" << bag_ai[choose_ai] << "] to against your Pokemon !" << endl;
    int enemy = Search(Pokemen_ai, bag_ai[choose_ai]);//��ȡaiѡ��ľ��������
    int fighting_Pokemen = Search(Pokemen, pname);//��ȡ�Լ����������

    /*while (true) {
        while (bag[name] == "") {
            int* temp = new int();
            *temp = name;
            name = (rand() % 2);//��ҵľ�������Ǵ��״̬
            while (name == *temp) {
                name = (rand() % 2);
            }
            delete temp;
            fighting_Pokemen = Search(Pokemen, bag[name]);
        }*/

    while (true) {
        //        �ж��׶�
        if (Pokemen[fighting_Pokemen].harmful_abnormal_state > 0) { // �ж��Ƿ����˺��쳣״̬
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] enter a [" << Pokemen_ai[enemy].skill_effect << "] state, will suffer [20] damage per round !" << endl;
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] HP: - [20]" << endl;
            Pokemen[fighting_Pokemen].HP -= 20;
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] now has HP: [" << Pokemen[fighting_Pokemen].HP << "]" << endl;

            Pokemen[fighting_Pokemen].harmful_abnormal_state -= 1;
        }

        //  �жϾ���Ѫ�����
        if (!alive(Pokemen, fighting_Pokemen)) {
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] is out of Vitality ! " << endl;
            bag[name] = "";
        }
        //  �ж϶Ծ��Ƿ����
        if (lose(bag)) {
            cout << "[System]=> You lose, good try...";
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
        cout << "[System]=> " << "What should Pokemon do ?" << endl;   //ѡ�񹥻���ʽ
        cout << "[Pokemon]=> \n" << "1 ===> " << "[Normal Attack] \n" << "2 +++> [" << Pokemen[fighting_Pokemen].skill << "]" << endl;
        int attack_choose;
        cin >> attack_choose;
        Sleep(500);

        if (attack_choose == 1) { //ʹ����ͨ����ʱ���˺�����
            system("cls"); //ѡ�꼼��ս������ -XX
            cout << "[System]=> " << "Go ! [" << bag[name] << "] , use [Normal Attack] !" << endl;
            cout << "[System]=> [" << bag[name] << "] does [" << Pokemen[fighting_Pokemen].attack - Pokemen_ai[enemy].defense << "] damage to [" << Pokemen_ai[enemy].name << "] !" << endl;  //���仯��һ�� -XX
            //cout << Pokemen_ai[enemy].name << " has been attacked!" << endl;
            if (Pokemen_ai[enemy].defense < Pokemen[fighting_Pokemen].attack) { //�ж�AI����������Ƿ����Ҿ��鹥������
                Pokemen_ai[enemy].HP -= (Pokemen[fighting_Pokemen].attack - Pokemen_ai[enemy].defense);//���ݹ�ʽ�۳�ai����������Ѫ��
            }
            else {
                Pokemen_ai[enemy].HP -= 0;
                cout << "[System]=> " << "Attack seems not effective..." << endl;
            }
        }
        if (attack_choose == 2) { //ʹ�ü��ܹ���ʱ
            system("cls"); //ѡ�꼼��ս������ -XX
            cout << "[System]=> " << "Go ! [" << bag[name] << "] use [" << Pokemen[fighting_Pokemen].skill << "] !" << endl;
            cout << "[System]=> [" << bag[name] << "] does [" << Pokemen[fighting_Pokemen].attack - Pokemen_ai[enemy].defense << "] damage to [" << Pokemen_ai[enemy].name << "] !" << endl;  //���仯��һ�� -XX
            //cout << Pokemen_ai[enemy].name << " has been attacked!" << endl;
            if (Pokemen_ai[enemy].defense < Pokemen[fighting_Pokemen].skill_attack) {
                Pokemen_ai[enemy].HP -= (Pokemen[fighting_Pokemen].skill_attack - Pokemen_ai[enemy].defense); //���ݹ�ʽ��Ѫ
            }
            else {
                cout << "[System]=> " << "Attack seems not effective..." << endl;
            }

            int temp_possible_affect_1 = rand() % (100 + 50 * Pokemen[fighting_Pokemen].skill_level);
            if (temp_possible_affect_1 <= 50) {     //����ʹ�Է����쳣״̬
                if (Pokemen[fighting_Pokemen].skill_effect == "stunned") {   //�ж����������쳣״̬
                    Pokemen_ai[enemy].controlled_abnormal_state += Pokemen[fighting_Pokemen].skill_level;
                }
                else if (Pokemen[fighting_Pokemen].skill_effect == "burned") {
                    Pokemen_ai[enemy].harmful_abnormal_state += Pokemen[fighting_Pokemen].skill_level;
                }
                cout << "[System]=> " << "The skill took extra effect, causing the opponent to enter an [" << Pokemen[fighting_Pokemen].skill_effect << "] state !" << endl;
                cout << "[System]=> " << "The opponent will receive abnormal status for [" << Pokemen[fighting_Pokemen].skill_level << "] round !" << endl;
            }
        }
        cout << "[Pokemon]=> " << Pokemen_ai[enemy].name << " HP: [" << Pokemen_ai[enemy].HP << "]" << endl;
    }
    else if (Pokemen[fighting_Pokemen].controlled_abnormal_state > 0) { //��غ��޷��ж���������Ч������һ�غ�
        cout << "[System]=> " << Pokemen[fighting_Pokemen].name << " enter a [" << Pokemen_ai[enemy].skill_effect << "] state, can't move in this round..." << endl;
        Pokemen[fighting_Pokemen].controlled_abnormal_state -= 1;
    }
        
        
        //  �жϾ���Ѫ�����
        /*if (!alive(Pokemen_ai, enemy)) {
            cout << "[System]=> [" << Pokemen_ai[enemy].name << "] is out of Vitality ! " << endl;
            bag_ai[choose_ai] = "";
        }*/
        //  �ж϶Ծ��Ƿ����
        if (lose(bag_ai)) {
            cout << "[System]=> " << "Congratulations ! You win !";
            level_count += 1;
            Sleep(5000);
            break;
        }
        rest();
        Sleep(500);



        //---------------------------------------------------------------------------------------------------------------------------------------------
        //                                                                 AI �Ĺ����غ�
        cout << "[System]=> " << "Opponent's turn !" << endl;
        //  �ж��׶�
        if (Pokemen_ai[enemy].harmful_abnormal_state > 0) { // �ж��Ƿ����˺��쳣״̬
            cout << "[System]=> " << Pokemen_ai[enemy].name << " enter a [" << Pokemen[fighting_Pokemen].skill_effect << "] state, will suffer [20] damage per round..." << endl;
            cout << "[System]=> " << Pokemen_ai[enemy].name << " is suffering from [" << Pokemen[fighting_Pokemen].skill_effect << "] ,HP: - [20]" << endl;
            Pokemen_ai[enemy].HP -= 20;
            cout << "[System]=> " << Pokemen_ai[enemy].name <<"'s HP: [" << Pokemen_ai[enemy].HP << "]" << endl;

            Pokemen_ai[enemy].harmful_abnormal_state -= 1;
        }
        if (!alive(Pokemen_ai, enemy)) { //�ж�ai�����Ƿ񻹴��
            cout << "[System]=> [" << Pokemen_ai[enemy].name << "] is out of Vitality ! " << endl;
            bag_ai[choose_ai] = "";
        }

        //  �ж϶Ծ��Ƿ����
        if (lose(bag_ai)) {
            cout << "[System]=> " << "Congratulations ! You win !";
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
            cout << "[System]=> [" << bag_ai[choose_ai] << "] is ready to fight!" << endl;

            int AI_attack_choose = 0;
            if (Pokemen_ai[enemy].skill != "None") { // �ж�ai��û�м���
                AI_attack_choose = rand() % 2;
            }
            if (AI_attack_choose == 0) { // aiʹ����ͨ����
                cout << "[System]=> [" << bag_ai[choose_ai] << "] is going to attack [" << bag[name] << "] !" << endl;

                cout << "[System]=> [" << bag_ai[choose_ai] << "] does [" << Pokemen_ai[enemy].attack - Pokemen[fighting_Pokemen].defense << "] damage to [" << bag[name] << "] !" << endl;         //�����һ��
                //cout << bag[name] << " has been attacked!" << endl;
                if (Pokemen[fighting_Pokemen].defense < Pokemen_ai[enemy].attack) { //�ж���Ҿ�������Ƿ��AI��������
                    Pokemen[fighting_Pokemen].HP -= (Pokemen_ai[enemy].attack - Pokemen[fighting_Pokemen].defense);//���ݹ�ʽ�۳���Ҿ����Ѫ��
                }
                else {
                    Pokemen[fighting_Pokemen].HP -= 0;
                    cout << "[System]=> " << "Attack seems not effective..." << endl;
                }
            }
            //   ���aiѡ��ʹ�ü���
            else if (AI_attack_choose == 1) {
                cout << "[System]=> [" << bag_ai[choose_ai] << "] uses " << Pokemen_ai[enemy].skill << " !" << endl;

                cout << "[System]=> [" << bag_ai[choose_ai] << "] does [" << Pokemen_ai[enemy].skill_attack - Pokemen[fighting_Pokemen].defense << "] damage to [" << Pokemen[fighting_Pokemen].name << " !" << endl;  //�����һ��
                //cout << Pokemen[fighting_Pokemen].name << " has been attacked!" << endl;
                if (Pokemen[fighting_Pokemen].defense < Pokemen_ai[enemy].skill_attack) {
                    Pokemen[fighting_Pokemen].HP -= (Pokemen_ai[enemy].skill_attack - Pokemen[fighting_Pokemen].defense); //���ݹ�ʽ��Ѫ
                }
                else {
                    Pokemen[fighting_Pokemen].HP -= 0;
                    cout << "[System]=> " << "Attack seems not effective..." << endl;
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
                    cout << "[System]=> " << "The skill took effect, causing the opponent to enter an [" << Pokemen_ai[enemy].skill_effect << "] state !" << endl;
                    cout << "[System]=> " << "The opponent will receive abnormal status for [" << Pokemen_ai[enemy].skill_level << "] round !" << endl;
                }

            }

            cout << "[Pokemon]=> " << Pokemen[fighting_Pokemen].name << " HP: [" << Pokemen[fighting_Pokemen].HP << "]" << endl;
        }
        else if (Pokemen_ai[enemy].controlled_abnormal_state > 0) { //��غ��޷��ж���������Ч������һ�غ�
            cout << Pokemen_ai[enemy].name << " enter a " << Pokemen[fighting_Pokemen].skill_effect << " state, can't make an action this round" << endl;
            Pokemen_ai[enemy].controlled_abnormal_state -= 1;
        }


        //  �жϾ���Ѫ�����
        if (!alive(Pokemen, fighting_Pokemen)) {
            cout << "[System]=> [" << Pokemen[fighting_Pokemen].name << "] is out of Vitality ! " << endl;
            bag[name] = "";
        }
        //  �ж϶Ծ��Ƿ����
        if (lose(bag)) {
            cout << "[System]=> " << endl << "You lose, good try...";
            Sleep(5000);
            break;
        }
    }
}

int main_battle() {
    srand((unsigned)time(NULL));
    int input_num;
    int AI_input_num; // �ж�ai��������м�ֻ����

    switch (level_count) {
        case int(1) :
            input_num = Player_input(); //��ȡ��Ҿ������ݣ�����ȡһ���ж���ֻ
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
            cout << "[System]=> " << "Welcome to the third gym. The battle is about to begin, get ready!!";
            break;
    }
    string name;
    int choose_num; 
    vector<string> bag;//���˱���
    for (int j = 0;j < 2;j++) {//ѡ����
        
        char backpack_choose = 'N'; // �Ƿ�ȷ����������뱳������
        while (backpack_choose != 'Y') { //�鿴�������ԣ���ѡ���Ƿ�ȷ������������ս����
            system("cls");
            cout << "[PokeBag]: ";

            for (vector<string>::iterator i = bag.begin(); i != bag.end(); i++) {
                cout << *i << " ";
            }
            cout << endl;
            cout << "[System]=> " << "The Pokemen you can choose are as follows:" << endl;
            cout << "[System]=> " << "Which Pokemon do you want to carry? (Enter number to see the status)\n";           //�����г� -XX
            

            for (int i = 0;i < input_num;i++) {           //���������޸�λ��
                cout << "[" << i << "]" << " ===> " << Pokemen[i].name << endl;        //ÿ�λ��� -XX
            }
            cin >> choose_num;  //�����뾫�����ָ�Ϊ�������֣������������
            name = Pokemen[choose_num].name;
            int i = Search(Pokemen, name);
            while (i == -1) {//�������
                cout << "[PokeBag]: ";
                for (vector<string>::iterator i = bag.begin(); i != bag.end(); i++) {
                    cout << *i << " ";
                }
                cout << endl;
                cout << "[System]=> " << "Which Pokemon do you want to carry? \n";
                cin >> choose_num;
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
            cout << "\n[System]=> " << "Are you sure you want to put this Pokemen in your PokeBag ? ��Y / N��" << endl;
            cin >> backpack_choose;
        }
        bag.push_back(name);
        /*cout << "[PokeBag]=> \n";      //�ŵ�����ǰ���ˣ�����ÿ��ѡ����֪���Ѿ�ѡ��˵��pokemon
        for (vector<string>::iterator i = bag.begin();i != bag.end();i++) {
            cout << *i << " ";
        }
        rest();*/
        Sleep(500);
    }
    // AIѡ���ս����
    int ai_1 = rand()% AI_input_num; //ai�Ӿ�������ѡ���ս����
    int ai_2 = rand()% AI_input_num;
    while (ai_1 == ai_2) {  // ȷ������ѡ���ظ���
        ai_2 = rand() % AI_input_num;
    }
    Sleep(500); //�ӳ����
    system("cls");
    cout << "[System]=> " << "Let the battle begin !" << endl;      //-XX
    Sleep(1000);
    cout << "[Gym Master]: " << endl;//����AI����ҶԴ�ÿ��ֻѡһ������������һ�غ� ��δ�����쳣״̬
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
    //cout << "AI_2: " << endl;       //����û������,����Gym mastercoutһ��͹���
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
    vector<string>bag_ai;//ai��ս����
    bag_ai.push_back(Pokemen_ai[ai_1].name);
    bag_ai.push_back(Pokemen_ai[ai_2].name);

    fight(bag,bag_ai);

    // �ж��Ƿ�Ҫ������ս���ݻ��Ƿ������˵�
    int continue_choose;
    cout << "\n[System]=> " << "The battle is over, your options is: " << endl;
    cout << "[System]=> \n" << "1 ===> Continue to challenge  \n2 ===> Exit to main menu" << endl;
    cin >> continue_choose;
    if (continue_choose == 1) {
        main_battle();
    }
    return 0;
}
