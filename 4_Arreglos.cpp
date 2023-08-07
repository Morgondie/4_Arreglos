// 4_Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>
#include <iomanip>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::cout << " el niño puño y el pingüino🤡🤡💀🙈🙉🙊🐶" << "\n";
	std::cout << "esto es una arroba \x40 " << "\n";
	std::cout << "esto es un kanji \xE9\x9B\xBB " << "\n";
	std::cout << "esto es un emoji \xF0\x9F\x92\x80" << "\n";

	//imprimir un arreglo de emojis
	std::cout << "Emojis fel F09F9200 al F09F92FF \n";
	
	char emojibytes[5] = "\xF0\x9F\x92\x0";
	std::cout << emojibytes << "\n";

	for (int c = 0; c<5; c++)
	{
		std::cout << std::hex << std::setw(2) <<std::setfill('0') << static_cast<int> (static_cast<unsigned char>(emojibytes[c]));
	}
	std::cout << std::endl;

	for ( int i = 0; i<= 0xF; i++)
	{
		for (int j = 0; j <= 0xF; j++)
		{
			for (int c = 0; c < 5; c++)
			{
				std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int> (static_cast<unsigned char>(emojibytes[c]));
			}
			
			std::cout << j << " ";
			emojibytes[3] += 1;
			
		}
		std::cout << i << "\n";
	}

	for (int i = 0; i <= 0xF; i++)
	{
		for (int j = 0; j <= 0xF; j++)
		{
			

			std::cout << emojibytes << " ";
			emojibytes[3] += 1;

		}
		std::cout << i << "\n";
	}

	return 0;

}

