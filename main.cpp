#include<iostream>
#include<iomanip>
#include<windows.h>
#include<ctime>
#include "battle.h"

using namespace std;

void background();
void opening();
void Introduce();

int main_func() {
	int running_flag = 1;
	while (running_flag == 1) {
		system("cls"); //清屏
		cout << setw(18) << "Pokémon" << endl;
		cout << setw(19) << "|Main Menu|" << endl;
		cout << "1 " << setw(18) << ">>> Start <<<" << endl;
		cout << "2 " << setw(20) << ">>> Pokédex <<<" << endl;
		cout << "3 " << setw(20) << ">>> GameIntro <<<" << endl;
		cout << "4 " << setw(17) << ">>> Save <<<" << endl;
		cout << "5 " << setw(17) << ">>> Quit <<<" << endl;
		cout << "\n[System]=> " << "(Enter the correspond number)" << endl;

		int Main_menu_input; //主菜单输入指令
		cin >> Main_menu_input;

		switch (Main_menu_input) {
			case int(1) :
				system("cls");
				main_battle();
				case int(2) :
					continue; //输出所有精灵信息函数的内容

					case int(3) : //游戏介绍
						Introduce();

						case int(5) :
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

void background() {
	cout << "[System]=> " << "Do you want to skip the background? (Y/N)" << endl;
	char skip;
	cin >> skip;
	if (skip == 'N') {
		cout << "[System]=> \n" << "In 2222, most living things on earth are no longer human beings. \nA new creature, the Pokémon, was born from a meteorite impact hundreds of years ago. \n In only a few hundred years, it has become an indispensable partner of mankind. \nIncluding extreme environments that humans cannot live in the Antarctic, the Arctic, and the deep sea, \nthere are Pokémons in every corner of the world. \nEach Pokémon has a unique ability, helping humans achieve countless tasks that could not be completed before, \nand setting milestones one after another.Now, the upsurge of Pokémons battles is becoming the world’s focus.\nHumans who own Pokémon are called trainers.\nThey train their unique Pokémons and march towards the title of world champion.\nLike countless other trainers,\nTake your Pokémon to defeat the owners of countless gyms,\nStand in the same arena as the previous world championand become the new PokéChampion!" << endl; //放入游戏介绍
		char conti;
		cout << "\n[System]=> " << "Continue ? (Y/N)" << endl;
		cin >> conti;
		if (conti == 'N')
			background();
	}
	else if(skip == 'Y')
		Sleep(500);
}

