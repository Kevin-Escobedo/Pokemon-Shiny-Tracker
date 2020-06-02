#pragma once
#ifndef GAME_H
#define GAME_H

class Pokemon;

class Game{
public:
	std::string name;
	std::string methods[11];
	int numMethods;
	int generation;
	const std::string Methods[10];
	bool pokemonIsPresent;

	Game();

	void printGames(int pokemonGeneration);

	void setCurrentGame(std::string game, Pokemon selectedPokemon);

	void generateMethods(int generation, std::string game, Pokemon selectedPokemon);
};

#endif