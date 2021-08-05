#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "hero.cpp"
#include "goblin.cpp"
#include </usr/include/SFML/Graphics.hpp>


using namespace std;

int fightGoblin (hero playersHero, goblin goblinboi) {

	
	cout << rand() % 2 << endl;

    do {
	
		playersHero.baseHealth = playersHero.baseHealth - (goblinboi.strength * (rand() % 2));

		cout << "Your health is now at " << playersHero.baseHealth << endl;

		goblinboi.health = goblinboi.health - (playersHero.baseStrength * (rand() % 2));

			cout << "The Goblins health is now at " << goblinboi.health << endl;

	} while (goblinboi.health > 0 && playersHero.baseHealth > 0);


	if (goblinboi.health > 0) {
		cout << "You died. Game over." << endl;

		return 0;
	}

	else {
	 	cout << "you won with " << playersHero.baseHealth << " health left" << endl;
	 	
	 	return playersHero.baseHealth;
    }


}


int main () {

 	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	
	srand(time(NULL));
	
	string fightCastle;
	bool input = true;

	
	cout << "Welcome to Game" << endl;

    hero playersHero;
	goblin goblinboi; 

	cout << "Great!\nYour name is " << playersHero.heroName << endl;

	cout << "Would you like to go to the Castle(C) or fight the Goblin(G)?" << endl;

	
	do {

		cin >> fightCastle;

		if (fightCastle == "G") {

			cout << "You have chosen to fight the goblin" << endl;

			input =false;

			fightGoblin(playersHero, goblinboi);

		}

		else if (fightCastle == "C") {

			cout << "You have chosen to go to the Castle" << endl;
			cout << "Good choice. You win! Now you can rest in the castle!!" << endl;
			input = false;

		}

		else {

			cout << "Your input did not match one of the requested inputs. Please enter C or G" << endl;
		}

	} while (input);
	

	return 0;
}