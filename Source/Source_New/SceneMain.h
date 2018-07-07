#ifndef _SCENEMAIN_H_
#define _SCENEMAIN_H_
#include <map>
#include "Game.h"
#include "GCamera.h"
#include "Map.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<vector>

using namespace std;
class SceneMain: public CGame
{
private: 
	Map *maps;
	GCamera *cam; 
	void LoadMap1();
protected:	
	virtual void RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int t);
	virtual void ProcessInput(LPDIRECT3DDEVICE9 d3ddv, int Delta);
	virtual void LoadResources(LPDIRECT3DDEVICE9 d3ddv);
	virtual void OnKeyDown(int KeyCode);
public:
	SceneMain(int _nCmdShow);
	~SceneMain();
};

#endif