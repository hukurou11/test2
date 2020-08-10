#include "game.h"
#include "input2.h"
#include "manager.h"
#include "scene.h"
#include "result.h"

void CGame::Init()
{}

void CGame::Uninit()
{
	CScene::Uninit();
}

void CGame::Update()
{
	CScene::Update();

	if (CInput::GetKeyTrigger(VK_RETURN))
	{
		CManager::SetScene<CResult>();
	}
}