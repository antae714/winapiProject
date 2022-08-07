#pragma once
#include "Script.h"
#include "UpdateFunction.h"

enum class E_enemyState {
	move,
	attack,

	MAX
};

class GameObject;
class TransformComponent;
class PuzzleEnemy2 : public Script, public UpdateFunction
{
private:
	E_enemyState state;
	GameObject* target;
	TransformComponent* transform;
	TransformComponent* transform2;
public:
	PuzzleEnemy2();

public:
	virtual void Update();
};
