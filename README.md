# **1.Game Name：《Pokemon League》**

**2.Group Number:30**

**3.Group Member: Hong Zhenghui(3035825784), Xu Xin(3035856159), Chen Zihao(3035947855),Zou Chunyu(3035946629)**

**4.Game Background：** In 2222, most living things on earth are no longer human beings. A new creature, the Pokemon, was born from a meteorite impact hundreds of years ago. In only a few hundred years, it has become an indispensable partner of mankind. Including extreme environments that humans cannot live in the Antarctic, the Arctic, and the deep sea, there are Pokemons in every corner of the world. Each Pokemon has a unique ability, helping humans achieve countless tasks that could not be completed before, and setting milestones one after another.Now, the upsurge of Pokemons battles is becoming the world’s focus. Humans who own Pokemon are called trainers. They train their unique Pokemonsand march towards the title of world champion. "Like countless other trainers, Take your Pokemon to defeat the owners of countless gyms,stand in the same arena as the previous world championand become the new PokeChampion!

**5.Game Play Introduction:** This game is a turn-based matchmaking game. There are a total of three Pokemon Gyms (three game levels). Players need to choose two Pokémon as their pets in each Gym, and then use their own two Pokémons to battle with the enemy's Pokémons. Win all three Gyms to achieve victory.

**6.Detailed Game Description:** Before players do battle, they need to choose two different Pokémon from the pool of Pokémon and put them into their backpacks. The enemy will also have two different Pokémon. Only one Pokémon can be on the field for the player and the enemy to fight at the same time. If this Pokémon on the field dies, the next one will be replaced automatically.

Each Pokémon has two types of attacks, normal attacks and skill attacks. Normal attacks cause more damage, skill attacks cause less damage but will have special effects.
There are currently two special effects, burning and stunned. If the enemy is hit by the burning effect, he will take some damage at the beginning of the next turn. If the enemy is stunned, there is a certain chance that he will be unable to act in the next turn.

Each Pokémon has seven different attributes, namely: HP, attack, defense, skill, skill_effect, skill_level, skill_attact

HP: The amount of blood of the Pokémon, when it reaches 0, it dies.

Attack: Attack power of normal attack

Defence: Defence power

Skill: nickname of the skill, does not affect the calculation of the program

skill_effect: the skill type of the skill

skill_level: the level of the skill, it affects the strength of the skill effect

skill_attact: the attack power when using the skill


The formula for calculating the damage that a Pokémon attack can inflict on an enemy is

**Damage dealt = Attacker's attack - Defender's defense**

So, if you want to cause damage to the enemy, your own Pokémon's attack power must be greater than the enemy's defense power. Hope you have a good game experience!

**6.features that we have implemented**
• Generation of random game sets or events: The enemy will select pokemons randomly, and randomly use normal attacks or skills, and skills have a probability to course special effects.

• Data structures for storing game status: For setting and changing the properties of Pokemon, we use struct. Then array is used to store the struct. Game progress is determined using an integer. search function to locate the location of the sprite in the struct array

• Dynamic memory management: we use new to receive some temporary values for comparison and then delete them after use

• File input/output (e.g., for loading/saving game status): use .h head File documents and transfer game data from different files 

• Program codes in multiple files: we have main.cpp, hattle.h, battle.cpp, character.cpp, pokemon.h

**7.Compilation and execution instructions(Quick Start):**

Skip the background?

<<<N

Continue?

<<<Y

(1) Start the game!

<<<1

Pick your Pokemon

<<<0

Are you sure you want to pick it?

<<<Y

Pick your Pokemon

<<<1

Are you sure you want to pick it?

<<<Y

Then go to the battle. You can follow the instruction on the screen, and type the number at the beginning of each line to continue the battle.
