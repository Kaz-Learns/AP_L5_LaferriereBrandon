#pragma once
#ifndef _ANIMALS_
#define _ANIMALS_
#include <string>
#include <iostream>

using namespace std;


class Animals
{
private: 
	string m_name, m_species;

public:
	Animals() { }

	

	Animals(string name, string species)
	{
		m_name = name;
		m_species = species;
	}


	void setName(string name)
	{
		m_name = name;
	}

	string getName()
	{
		return m_name;
	}
	
	void setSpecies(string species)
	{
		m_species = species;
	}
	
	string getSpecies()
	{
		return m_species;
	}


};

ostream& operator<<(ostream& os, const Animals& obj)
{
	return os;
}
#endif // !_ANIMALS_



