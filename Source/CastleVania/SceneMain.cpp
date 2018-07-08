#include "SceneMain.h"
#include "Map.h"
SceneMain::SceneMain(int _nCmdShow) : CGame(_nCmdShow)
{
}

void SceneMain::RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int t)
{
	d3ddv->ColorFill(G_BackBuffer, NULL, D3DCOLOR_XRGB(0, 0, 0));
	G_SpriteHandler->Begin(D3DXSPRITE_ALPHABLEND);
	cam = new GCamera(1,1);
	maps->DrawMap(cam, State);
	G_SpriteHandler->End();
}


void SceneMain::ProcessInput(LPDIRECT3DDEVICE9 d3ddv, int Delta)
{
	if (IsKeyDown(DIK_1)) { State = 1; LoadMap1(); }
}

void SceneMain::LoadResources(LPDIRECT3DDEVICE9 d3ddv)
{
	switch (State)
	{
	case 1:
		LoadMap1();
		break;
	default:
		break;
	}
}

void SceneMain::LoadMap1()
{

	maps = new Map(State);
	
}


void SceneMain::OnKeyDown(int KeyCode)
{
	
}

SceneMain::~SceneMain(void)
{

}

