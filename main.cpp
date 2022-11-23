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
		system("cls"); //����
		cout << setw(18) << "Pok��mon" << endl;
		cout << setw(19) << "|Main Menu|" << endl;
		cout << "1 " << setw(18) << ">>> Start <<<" << endl;
		cout << "2 " << setw(20) << ">>> Pok��dex <<<" << endl;
		cout << "3 " << setw(20) << ">>> GameIntro <<<" << endl;
		cout << "4 " << setw(17) << ">>> Save <<<" << endl;
		cout << "5 " << setw(17) << ">>> Quit <<<" << endl;
		cout << "\n[System]=> " << "(Enter the correspond number)" << endl;

		int Main_menu_input; //���˵�����ָ��
		cin >> Main_menu_input;

		switch (Main_menu_input) {
			case int(1) :
				system("cls");
				main_battle();
				case int(2) :
					continue; //������о�����Ϣ����������

					case int(3) : //��Ϸ����
						Introduce();

						case int(5) :
							cout << "[System]=> " << "Game Shutdown" << endl;
							exit(1);
		}

		running_flag = 0;
	}
	return 1;
}

void Introduce() { //��Ϸ���ܺ���
	system("cls");

	char back_flag = 'N';
	cout << "[System]=> \n" << endl;         //��Ϸ�淨����
	Sleep(500);
	cout << "\n[System]=> " << "GO BACK ? (Y/N)" << endl; //�˳�ѡ��
	while (back_flag != 'Y') { //��ѡ��Y��һֱ��ʾ��Ϸ����
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
	opening();                    //����ٰ����ǰһ��//ȥ������Ȼ�˷�ʱ��
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
		cout << "[System]=> \n" << "In 2222, most living things on earth are no longer human beings. \nA new creature, the Pok��mon, was born from a meteorite impact hundreds of years ago. \n In only a few hundred years, it has become an indispensable partner of mankind. \nIncluding extreme environments that humans cannot live in the Antarctic, the Arctic, and the deep sea, \nthere are Pok��mons in every corner of the world. \nEach Pok��mon has a unique ability, helping humans achieve countless tasks that could not be completed before, \nand setting milestones one after another.Now, the upsurge of Pok��mons battles is becoming the world��s focus.\nHumans who own Pok��mon are called trainers.\nThey train their unique Pok��mons and march towards the title of world champion.\nLike countless other trainers,\nTake your Pok��mon to defeat the owners of countless gyms,\nStand in the same arena as the previous world championand become the new Pok��Champion!" << endl; //������Ϸ����
		char conti;
		cout << "\n[System]=> " << "Continue ? (Y/N)" << endl;
		cin >> conti;
		if (conti == 'N')
			background();
	}
	else if(skip == 'Y')
		Sleep(500);
}

