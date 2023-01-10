
#include <iostream>
#include <set>
#include <map>


class kontenerWekt {

};


int main()
{
	//zad1
	std::set<std::string> Ours;
	std::set<std::string> My;
	std::set<std::string> His;

	
	int i1, i2;

	std::cout << "Podaj ilosc znajomych: ";
	std::cin >> i1;
	std::cout << std::endl;

	std::string temp;
	std::cout << "Podaj imiona: ";
	for (int i=0;i<i1;i++)
	{
		std::cin >> temp;
		My.insert(temp);
		Ours.insert(temp);
	}

	std::cout << std::endl;
	std::cout << "Lista moich znajomych:" << std::endl;

	for (auto item : My)
	{
		std::cout << item << std::endl;
	}

	std::cout << std::endl;
	
	std::cout << "Podaj ilosc znajomych: ";
	std::cin >> i2;
	std::cout << std::endl;

	std::cout << "Podaj imiona: ";
	for (int i = 0; i < i2; i++)
	{
		std::cin >> temp;
		His.insert(temp);
		Ours.insert(temp);
	}

	std::cout << std::endl;
	std::cout << "Lista twoich znajomych:" << std::endl;

	for (auto item : His)
	{
		std::cout << item << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Lista wszystkich znajomych:" << std::endl;

	for (auto item : Ours)
	{
		std::cout << item << std::endl;
	}
	
	std::cout << std::endl;




	//zad2
	std::map<int, std::string> Map{ {1, "Uno"},{2, "Dos"},{3, "Tres"},{4, "Cuatro"},{5,"Cinco"} };
	
	for(auto item : Map)
	{
		std::cout << item.first << ": " << item.second << std::endl;
	}

	Map.erase(4);

	std::cout << std::endl;

	for (auto item : Map)
	{
		std::cout << item.first << ": " << item.second << std::endl;
	}

	//zad3



}
