#include"writer.h"
#include <map>
#include<functional>
#include <iostream>

int main()
{
	
	

	std::map < std::string, std::function<std::string(std::vector < std::string>)>> templates =
	{
		make_pair("pushkin",write_pushkin),
		make_pair("blok", write_blok ),
		make_pair("mayakovskij", write_mayakovskij),
		make_pair("esenin", write_esenin),
		make_pair("tyutchev", write_tyutchev)
	};


	std::string poet = "pushkin";
	int count = 0;
	std::vector<std::string>  theme_words;
	std::cout << "poet" << std::endl;
	std::cin >> poet;
	std::cout << "words count" << std::endl;
	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		std::string s;
		std::cin >> s;
		theme_words.push_back(s);

	}

	std::string poem = templates[poet](theme_words);
	std::cout << poem;
	system("pause");
	return 0;

}