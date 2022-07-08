#pragma once

#include <array>
#include <vector>

using namespace std;


class Vector2;
typedef array<Vector2, 3> Triange;

class Rect
{
private:
	array<Vector2*, 4> Vectors;
	array<int, 6>index;
	//������
	const Vector2* pivot;
	//�����̼�
	const float* rotate;
	//������
	float scale;
	float weight;
	float height;
	
public:
	Rect();
	Rect(const Vector2* p_pivot, const float& p_rotate, const float& p_weight, const float& p_height);
	Rect(const float& p_rotate, const float& p_weight, const float& p_height);
	virtual ~Rect(); 
private:
	void Awake();
public:
	vector<Vector2> getVectors() const;
	Vector2 getpivot() const;
	float getrotate();
	float getheight() const;
	float gethalfheight() const;
	float getweight() const;
	float gethalfweight() const;

	Triange getTriangle(int) const;

	void setpivotptr(const Vector2*);
	void setrotateptr(const float*);

	void operator=(const Rect& other);

private:
	//���õǾ����� ��
	bool ispivotset() const;
};