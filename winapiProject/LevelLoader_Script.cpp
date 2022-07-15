#include "LevelLoader.h"

// ��ũ��Ʈ
#include "TestScript.h"
#include "TestScript2.h"
#include "TestScript3.h"
#include "GameStart.h"
#include "GameExit.h"
#include "MoveMap.h"

Script* LevelLoader::AllocScript(const E_Script& p_enum)
{
	switch (p_enum)
	{
	case E_Script::TestScript:
		return new TestScript();
	case E_Script::TestScript2:
		return new TestScript2();
	case E_Script::TestScript3:
		return new TestScript3();
	case E_Script::GameStart:
		return new GameStart();
	case E_Script::GameExit:
		return new GameExit();
	case E_Script::MoveMap:
		return new MoveMap();

	default:
		return nullptr;
	}
}