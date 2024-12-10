#pragma once
#include "CObj.h"
#include "CBullet.h"

class CFire_Storm : public CBullet
{
public:
	CFire_Storm(){}
	~CFire_Storm(){}

private:


	// CBullet을(를) 통해 상속됨
	void Initialize() override;

	int Update() override;

	void Late_Update() override;

	void Render(HDC hDC) override;

	void Release() override;

	
	CObj* m_pPlayer;
	CObj* m_pBoss;

	int m_iFrameIndex;
	DWORD m_dwFrameTime;

	int srcX[3] = { 308, 352, 397 };
	int srcY[3] = { 98, 103, 104 };

};

