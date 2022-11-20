#include<iostream>
#include<windows.h>
#include<ctime>

using namespace std;

void Introduce();


int main_func() {
	int running_flag = 1;
	while (running_flag == 1) {
		system("cls"); //清屏
		cout << "主菜单" << endl;
		cout << "1. 开始" << endl;
		cout << "2. 查看所有的精灵" << endl;
		cout << "3. 游戏介绍" << endl;
		cout << "4. 存档" << endl;
		cout << "5. 退出游戏" << endl;

		int Main_menu_input; //主菜单输入指令
		cin >> Main_menu_input;

		switch (Main_menu_input) {
			case int(1) :
				continue; //开始的模块

			case int(2) :
				continue; //输出所有精灵信息函数的内容

			case int(3) : //游戏介绍
				Introduce();

			case int(4) :
				continue; //存档代码

			case int(5) :
				cout << "游戏结束" << endl;
			exit(1);
		}

		running_flag = 0;
	}
	return 1;
}

void Introduce() { //游戏介绍函数
	system("cls");

	char back_flag = 'N';
	cout << "游戏介绍" << endl; //放入游戏介绍
	Sleep(500);
	cout << "请选择是否返回(Y/N)" << endl; //退出选项
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
	main_func();
	return 0;
}
