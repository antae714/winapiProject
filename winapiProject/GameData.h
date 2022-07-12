#pragma once

#include "SingletonCls.h"

#define WINDOWX 1280
#define WINDOWY 720
class Vector2;

class GameData : public SingletonCls<GameData>
{
private:
	bool isgaming;
	int windowX;
	int windowY;
	Vector2* cameraPivot;

public:
	GameData();

public:
	bool getisgaming();
	int getwindowX();
	int getwindowY();
	const Vector2& getcameraPivot();

	void setisgaming(bool);
	void setwindowX(int);
	void setwindowY(int);
	void setcameraPivot(const Vector2&);
};

