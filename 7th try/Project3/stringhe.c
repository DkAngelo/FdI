#include "stringhe.h"

void accodaCifra(char** vs, unsigned char n) {

	switch (n) {
	case(0):
		vs[0] = " _ ";
		vs[1] = "| |";
		vs[2] = "|_|";
		break;
	case(1):
		vs[0] = "   ";
		vs[1] = "  |";
		vs[2] = "  |";
		break;
	case(2):
		vs[0] = " _ ";
		vs[1] = " _|";
		vs[2] = "|_ ";
		break;
	case(3):
		vs[0] = " _ ";
		vs[1] = " _|";
		vs[2] = " _|";
		break;
	case(4):
		vs[0] = "   ";
		vs[1] = "|_|";
		vs[2] = "  |";
		break;
	case(5):
		vs[0] = " _ ";
		vs[1] = "|_ ";
		vs[2] = " _|";
		break;
	case(6):
		vs[0] = " _ ";
		vs[1] = "|_ ";
		vs[2] = "|_|";
		break;
	case(7):
		vs[0] = " _ ";
		vs[1] = "  |";
		vs[2] = "  |";
		break;
	case(8):
		vs[0] = " _ ";
		vs[1] = "|_|";
		vs[2] = "|_|";
		break;
	case(9):
		vs[0] = " _ ";
		vs[1] = "|_|";
		vs[2] = " _|";
		break;
	}
}