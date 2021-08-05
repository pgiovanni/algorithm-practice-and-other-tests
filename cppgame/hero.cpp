#ifndef HERO_H
#define HERO_H

#include <string>
#include <iostream>

class hero {

	
	public:


		int baseLevel;
		int baseHealth;
		int baseDef;
		int baseStrength;
		std::string heroName;

	


	
		hero () {


			baseLevel = 2;
			baseHealth = 10;
			baseDef = 2;
			baseStrength = 2;

			std::cout << "Please enter your Hero's name" << std::endl;


			std::cin >> heroName;



		}


};

#endif