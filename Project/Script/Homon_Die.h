#pragma once
#include <Engine\CState.h>

class CAnimation3D;
class FieldM_StateMgr;

class Homon_Die :
	public CState
{
public:
	CAnimation3D* m_pAnimation;
	FieldM_StateMgr* m_pOwnerMGR;


public:
	void Enter() override;
	void Exit() override;

public:
	void Update() override;


public:
	CLONE(Homon_Die);
	Homon_Die();
	virtual ~Homon_Die();
};

