#pragma once
#include <string>

using namespace std;
enum class E_Bitmap
{
	background,
	background_2,
	backgroundpuzzle,
	character2,
	puzzlebutton,
	puzzlecleartestimg,
	Starbutton, 
	Starbutton_Selected,
	Blue,
	Green,
	Red,
	logo,
	npc,
	npc2,
	start,
	exit,

	MAX
};


namespace enumBitmap {;
string conversion(const E_Bitmap&);
E_Bitmap conversion(const string&);

string toFile(const E_Bitmap&);
}
