#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;

struct book
{
	const char* serialCode = "";
	const char* title = "";
	const char* author = "";
};

int main()
{
	std::fstream saveFile;
	std::fstream readFile;

	book book1 = { "001.645.2", "Learning C++", "Gregory Harrison"};
	book book2 = { "001.721.3", "C++ for Beginners", "Quentin Resnick" };;
	book book3 = { "001.123.6", "Making Things Up Again", "Arnold Cunningham" };;

	saveFile.open("library.dat", std::ios::out | std::ios::binary);
	if(!saveFile.good())
	{
		cout << "FILE COULD NOT BE OPENED FOR WRITING" << endl;
	}

	saveFile.write(book1.serialCode, sizeof(book1.serialCode));
	saveFile.write(book1.title, sizeof(book1.title));
	saveFile.write(book1.author, sizeof(book1.author));
	saveFile.close();

	saveFile.write(book2.serialCode, sizeof(book2.serialCode));
	saveFile.write(book2.title, sizeof(book2.title));
	saveFile.write(book2.author, sizeof(book2.author));
	saveFile.close();

	saveFile.write(book3.serialCode, sizeof(book3.serialCode));
	saveFile.write(book3.title, sizeof(book3.title));
	saveFile.write(book3.author, sizeof(book3.author));
	saveFile.close();

	readFile.open("library.dat", std::ios::in | std::ios::binary);
	if(!readFile.good())
	{
		cout << "FILE COULD NOT BE OPENED FOR READING";
	}

	readFile.read((char*)&book2.serialCode, sizeof(book2.serialCode));
	readFile.read((char*)&book2.title, sizeof(book2.title));
	readFile.read((char*)&book2.author, sizeof(book2.author));
}