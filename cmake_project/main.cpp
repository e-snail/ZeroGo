#include<iostream>
#include "include/GoChess.h"

int main()
{
	std::cout<<"Hello Go!"<<std::endl;

	GoChess *goChess = new GoChess();
	ChessType type = goChess->getChessType();

	std::cout<<"Chess Type: " <<EnumChessTypeName[type+1] <<std::endl;
	delete goChess;

    return 0;
}
