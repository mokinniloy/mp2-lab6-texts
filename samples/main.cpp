// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// Copyright (c) Гергель В.П. 28.07.2000
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (21.04.2015)
//

#include <iostream>
#include <fstream>
#include <ttext.h>
using namespace std;

int main() {
	TText text;
	text.Read("C:\\Users\\aeremina\\Documents\\Labs\\mp2-lab6-texts\\samples\\sample.txt");
	text.Print();

    return 0;
}
