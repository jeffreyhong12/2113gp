#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<unistd.h>
#include<ctime>
#include "battle.h"

using namespace std;

void background();
void opening();
void Introduce();
void pokedex();
void level_1_pokemons();        //Three levels of Pokemons illustrations, the body at the bottom
void level_2_pokemons();
void level_3_pokemons();

int main_func() {
	int running_flag = 1;
	cout<<"\033c"; //Clear Screen
	while (running_flag == 1) {
		cout << "\033c"; //Clear Screen
		cout << setw(18) << "Pokemon" << endl;
		cout << setw(19) << "|Main Menu|" << endl;
		cout << "1 " << setw(18) << ">>> Start <<<" << endl;
		cout << "2 " << setw(20) << ">>> Pokedex <<<" << endl;
		cout << "3 " << setw(20) << ">>> GameIntro <<<" << endl;
		cout << "4 " << setw(17) << ">>> Quit <<<" << endl;
		cout << "\n[System]=> " << "(Enter the correspond number)" << endl;

		int Main_menu_input; //Main menu input command
		cin >> Main_menu_input;
		while (Main_menu_input < 1 || Main_menu_input>4) {
			cout << "\n[System]=> " << "(Enter the correspond number)" << endl;
			cin >> Main_menu_input;
		}
		switch (Main_menu_input) {
			case int(1) :
				cout<<"\033c";
				main_battle();

				continue;
				case int(2) :
					//continue; //Output the contents of all Pokemons information functions
					pokedex();

					case int(3) : //Game Introduction
						Introduce();
			
						case int(4) :
							cout << "[System]=> " << "Game Shutdown" << endl;
		
							exit(1);
		}

		running_flag = 0;
	}
	return 1;
}

void Introduce() { //Game introduction function
	cout<<"\033c";
	char back_flag = 'N';
	cout << "Game Play Introduction: This game is a turn-based matchmaking game. There are a total of three Pokemon Gyms (three game levels). Players need to choose two Pokemon as their pets in each Gym, and then use their own two Pokemons to battle with the enemy's Pokemons. Win all three Gyms to achieve victory." << endl;         //Game play introduction
	cout << " " << endl;
	cout << "Detailed Game Description: Before players do battle, they need to choose two different Pokemon from the pool of Pokemon and put them into their backpacks. The enemy will also have two different Pokemon. Only one Pokemon can be on the field for the player and the enemy to fight at the same time. If this Pokemon on the field dies, the next one will be replaced automatically." << endl;
	cout << "Each Pokemon has two types of attacks, normal attacks and skill attacks. Normal attacks cause more damage, skill attacks cause less damage but will have special effects. There are currently two special effects, burning and stunned. If the enemy is hit by the burning effect, he will take some damage at the beginning of the next turn. If the enemy is stunned, there is a certain chance that he will be unable to act in the next turn." << endl;
	cout << " " << endl;
	cout << "For more details, please see the readme file " << endl;
	sleep(3);
	cout << "\n[System]=> " << "GO BACK ? (Y/N)" << endl; //Exit Options
	while (back_flag != 'Y') { //keep showing the game introduction if not choose y
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
	opening();
	background();
	main_func();
	return 0;
}

//Game opening animation
void opening() {
	cout << "[System]=> " << "Game is starting.." << endl;
	sleep(1);
	cout << "[System]=> " << "Game is starting..." << endl;
	sleep(1);
	cout << "[System]=> " << "Game started!" << endl;
	sleep(1);
}

//Game Story Background
void background() {
	cout<<"\033c";
	cout << "[System]=> " << "Do you want to skip the background? (Y/N)" << endl;
	char skip;
	cin >> skip;
	while (skip != 'Y') {
		system("clear");
		cout << "[System]=> \n";
		cout << "In 2222, most living things on earth are no longer human beings.\n";
		cout << "A new creature, the Pokemon, was born from a meteorite impact hundreds of years ago. \n";
		cout << "In only a few hundred years, it has become an indispensable partner of mankind. \n";
		cout << "Including extreme environments that humans cannot live in the Antarctic, the Arctic, and the deep sea, \n";
		cout << "there are Pokemons in every corner of the world. \n";
		cout << "Each Pokemon has a unique ability, helping humans achieve countless tasks that could not be completed before, \n";
		cout << "and setting milestones one after another.Now, the upsurge of Pokemons battles is becoming the world's focus.\n";
		cout << "Humans who own Pokemon are called trainers.\n";
		cout << "\n";
		cout << "They train their unique Pokemonsand march towards the title of world champion.\n";
		cout << "Like countless other trainers, \nTake your Pokemon to defeat the owners of countless gyms, \n";
		cout << "Stand in the same arena as the previous world championand become the new PokeChampion!" << endl; 
		char conti;
		cout << "\n[System]=> " << "Continue ? (Y/N)" << endl;
		cin >> conti;
		while (conti != 'Y') {
			cin >> conti;
			continue;
		}
		break;
	}
	sleep(2);
}

//Game Gallery Program
void pokedex() {
	cout<<"\033c";
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
		else if (level == 4) {   //Back to main menu
			main_func();
		}
		else {
			cout << "[System]=> " << "You are only able to choose 1-3 Levels !" << endl;
		}
	}
}

void level_1_pokemons() {   //Level 1 obtainable Pokemon
	cout<<"\033c";
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
	cout << "[System]=> " << "Do you want to GO BACK ? (Y)" << endl;
	char conti;
	cin >> conti;
	while (conti != 'Y') {
		cin >> conti;
		continue;
	}
	pokedex();
}

void level_2_pokemons() {
	cout<<"\033c";
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
	cout << "[System]=> " << "Do you want to GO BACK ? (Y)" << endl;       //back to pokedex
	char conti;
	cin >> conti;
	while (conti != 'Y') {
		cin >> conti;
		continue;
	}
	pokedex();
}

void level_3_pokemons() {
	cout<<"\033c";
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
	cout << "[System]=> " << "Do you want to GO BACK ? (Y)" << endl;       //back to pokedex
	char conti;
	cin >> conti;
	while (conti != 'Y') {
		cin >> conti;
		continue;
	}
	pokedex();
}