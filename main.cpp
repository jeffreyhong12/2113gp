#include<iostream>
#include<iomanip>
#include<windows.h>
#include<ctime>
#include "battle.h"

using namespace std;

void background();
void opening();
void Introduce();
void pokedex();
void level_1_pokemons();        //三个等级的宝可梦图鉴，本体在最下面
void level_2_pokemons();
void level_3_pokemons();

int main_func() {
	int running_flag = 1;
	while (running_flag == 1) {
		system("cls"); //清屏
		cout << setw(18) << "Pokemon" << endl;
		cout << setw(19) << "|Main Menu|" << endl;
		cout << "1 " << setw(18) << ">>> Start <<<" << endl;
		cout << "2 " << setw(20) << ">>> Pokedex <<<" << endl;
		cout << "3 " << setw(20) << ">>> GameIntro <<<" << endl;
		cout << "4 " << setw(17) << ">>> Quit <<<" << endl;
		cout << "\n[System]=> " << "(Enter the correspond number)" << endl;

		int Main_menu_input; //主菜单输入指令
		cin >> Main_menu_input;

		switch (Main_menu_input) {
			case int(1) :
				system("cls");
				main_battle();
				case int(2) :
					//continue; //输出所有精灵信息函数的内容
					pokedex();
					case int(3) : //游戏介绍
						Introduce();

						case int(4) :
							cout << "[System]=> " << "Game Shutdown" << endl;
							
							exit(1);
		}

		running_flag = 0;
	}
	return 1;
}

void Introduce() { //游戏介绍函数
	system("cls");

	char back_flag = 'N';
	cout << "[System]=> \n" << endl;         //游戏玩法介绍
	Sleep(500);
	cout << "\n[System]=> " << "GO BACK ? (Y/N)" << endl; //退出选项
	while (back_flag != 'Y') { //不选择Y就一直显示游戏介绍
		cin >> back_flag;
		if (back_flag == 'Y') {
			main_func();
		}
		else {
			Introduce();
		}
	}
}

int main() {
	opening();                    //最后再把这个前一个//去掉，不然浪费时间
	background();
	main_func();
	return 0;
}

//游戏开场动画
void opening() {
	cout << "[System]=> " << "Game is starting." << endl;
	Sleep(1000);
	system("cls");
	cout << "[System]=> " << "Game is starting.." << endl;
	Sleep(1000);
	system("cls");
	cout << "[System]=> " << "Game is starting..." << endl;
	Sleep(500);
	system("cls");
	cout << "[System]=> " << "Game started!" << endl;
	Sleep(1000);
}

//游戏故事背景
void background() {
	system("cls");
	cout << "[System]=> " << "Do you want to skip the background? (Y/N)" << endl;
	char skip;
	cin >> skip;
	while(skip != 'Y'){
		system("cls");
		cout << "[System]=> \n";            //改了一下代码形式，print一样的东西 -XX
		cout << "In 2222, most living things on earth are no longer human beings.\n";
		cout << "A new creature, the Pokemon, was born from a meteorite impact hundreds of years ago. \n";
		cout << "In only a few hundred years, it has become an indispensable partner of mankind. \n";
		cout << "Including extreme environments that humans cannot live in the Antarctic, the Arctic, and the deep sea, \n";
		cout << "there are Pokemons in every corner of the world. \n";
		cout << "Each Pokemon has a unique ability, helping humans achieve countless tasks that could not be completed before, \n";
		cout << "and setting milestones one after another.Now, the upsurge of Pokemons battles is becoming the world’s focus.\n";
		cout << "Humans who own Pokemon are called trainers.\n";
		cout << "\n";
		cout << "They train their unique Pokemonsand march towards the title of world champion.\n";
		cout << "Like countless other trainers, \nTake your Pokemon to defeat the owners of countless gyms, \n";
		cout << "Stand in the same arena as the previous world championand become the new PokeChampion!" << endl; //放入游戏介绍
		char conti;
		cout << "\n[System]=> " << "Continue ? (Y/N)" << endl;
		cin >> conti;
		while (conti != 'Y') {
			cin >> conti;
			continue;
		}
		break;
	}
	Sleep(500);
}

//游戏图鉴程序
void pokedex() {
	system("cls");
	cout << "[System]=> \n";
	cout << "You are able to choose 2 Pokemons out of 5 in each Gym battble. " << endl;
	cout << "According to the Gym level, Pokemons you can choose will be separated into 3 levels. " << endl;
	cout << "Which level's Pokemon you want to check ?" << endl;
	cout << endl;
	cout << "1 >>> Level 1" << endl;
	cout << "2 >>> Level 2" << endl;
	cout << "3 >>> Level 3" << endl;
	cout << "4 >>> Back to Menu" << endl;
	cout << endl;
	cout << "(There is a total of 3 levels, Enter 1/2/3 to check the selectable Pokemons)" << endl;
	int level;
	while (cin >> level) {
		if (level == 1) {
			level_1_pokemons();
		}
		else if (level == 2) {
			level_2_pokemons();
		}
		else if (level == 3) {
			level_3_pokemons();
		}
		else if (level == 4) {   //返回主菜单
			main_func();
		}
		else {    //防止乱选level，就返回
			cout << "[System]=> " << "You are only able to choose 1-3 Levels !" << endl;
		}
	}
}

void level_1_pokemons() {   //等级一的可选宝可梦
	system("cls");
	cout << "[System]=> \n";
	cout << "Pokemon: [Pikachu]\n";
	cout << "HP: [210] \n";
	cout << "Attack : [100] \n";
	cout << "Defence : [35] \n";
	cout << "Skill : [Fetters] \n";
	cout << "Skill Power : [70] \n";
	cout << "Skill Effect : [Stunned] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Bulbasaur] \n";
	cout << "HP : [220] \n";
	cout << "Attack : [80] \n";
	cout << "Defence : [45] \n";
	cout << "Skill : [Sludge Bomb] \n";
	cout << "Skill Power : [50] \n";
	cout << "Skill Effect : [Burn] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Dewgong] \n";
	cout << "HP : [200] \n";
	cout << "Attack : [105] \n";
	cout << "Defence : [35] \n";
	cout << "Skill : [Powder Snow] \n";
	cout << "Skill Power : [75] \n";
	cout << "Skill Effect : [Stunned] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Grimer] \n";
	cout << "HP : [250] \n";
	cout << "Attack : [75] \n";
	cout << "Defence : [45] \n";
	cout << "Skill : [Eruption] \n";
	cout << "Skill Power : [50] \n";
	cout << "Skill Effect : [Burn] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Gastly] \n";
	cout << "HP : [180] \n";
	cout << "Attack : [120] \n";
	cout << "Defence : [35] \n";
	cout << "Skill : [Zap Cannon] \n";
	cout << "Skill Power : [90] \n";
	cout << "Skill Effect : [Stunned] \n";
	cout << "------------------------------\n";
	cout << "[System]=> " << "Do you want to GO BACK ? (Y)" << endl;       //返回pokedex
	char conti;
	cin >> conti;
	while (conti != 'Y') {
		cin >> conti;
		continue;
	}
	pokedex();
}

void level_2_pokemons() {
	system("cls");
	cout << "[System]=> \n";
	cout << "Pokemon: [Manectric]\n";
	cout << "HP: [250] \n";
	cout << "Attack : [115] \n";
	cout << "Defence : [45] \n";
	cout << "Skill : [Dizzy Punch] \n";
	cout << "Skill Power : [80] \n";
	cout << "Skill Effect : [Stunned] [2 turns] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Electrike] \n";
	cout << "HP : [260] \n";
	cout << "Attack : [110] \n";
	cout << "Defence : [40] \n";
	cout << "Skill : [Lovely Kiss] \n";
	cout << "Skill Power : [90] \n";
	cout << "Skill Effect : [Stunned] [2 turns] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Charmander] \n";
	cout << "HP : [280] \n";
	cout << "Attack : [90] \n";
	cout << "Defence : [50] \n";
	cout << "Skill : [Ember] \n";
	cout << "Skill Power : [65] \n";
	cout << "Skill Effect : [Burn] [2 turns] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Charizard] \n";
	cout << "HP : [300] \n";
	cout << "Attack : [85] \n";
	cout << "Defence : [55] \n";
	cout << "Skill : [Fire Spin] \n";
	cout << "Skill Power : [70] \n";
	cout << "Skill Effect : [Burn] [2 turns] \n";
	cout << "------------------------------\n";
	cout << "[System]=> " << "Do you want to GO BACK ? (Y)" << endl;       //返回pokedex
	char conti;
	cin >> conti;
	while (conti != 'Y') {
		cin >> conti;
		continue;
	}
	pokedex();
}

void level_3_pokemons() {
	system("cls");
	cout << "[System]=> \n";
	cout << "Pokemon: [Kabutops]\n";
	cout << "HP: [380] \n";
	cout << "Attack : [110] \n";
	cout << "Defence : [60] \n";
	cout << "Skill : [Crush Claw] \n";
	cout << "Skill Power : [90] \n";
	cout << "Skill Effect : [Burn] [3 turns] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Snorlax] \n";
	cout << "HP : [350] \n";
	cout << "Attack : [130] \n";
	cout << "Defence : [55] \n";
	cout << "Skill : [Swagger] \n";
	cout << "Skill Power : [80] \n";
	cout << "Skill Effect : [Stunned] [3 turns] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Ditto] \n";
	cout << "HP : [320] \n";
	cout << "Attack : [120] \n";
	cout << "Defence : [55] \n";
	cout << "Skill : [Hydro Cannon] \n";
	cout << "Skill Power : [75] \n";
	cout << "Skill Effect : [Stunned] [3 turns] \n";
	cout << "------------------------------\n";
	cout << "Pokemon : [Mewtwo] \n";
	cout << "HP : [315] \n";
	cout << "Attack : [115] \n";
	cout << "Defence : [50] \n";
	cout << "Skill : [Overheat] \n";
	cout << "Skill Power : [80] \n";
	cout << "Skill Effect : [Burn] [3 turns]\n";
	cout << "------------------------------\n";
	cout << "[System]=> " << "Do you want to GO BACK ? (Y)" << endl;       //返回pokedex
	char conti;
	cin >> conti;
	while (conti != 'Y') {
		cin >> conti;
		continue;
	}
	pokedex();
}