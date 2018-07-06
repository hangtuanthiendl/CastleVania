#include "ISHeart.h"

CSHeart::CSHeart(int x1, int y1, int w1, int h1)
{
	x = x1;
	y = y1;
	h = h1;
	w = w1;
	GTObject = new GTexture("./Resources/item/0.png");
	GSObject = new GSprite(GTObject);
	Vy = 0.08; //0.06
	x2 = x1;
}

CSHeart::~CSHeart()
{

}
Box CSHeart::GetBox(GCamera *camera)
{
	D3DXVECTOR2 pos = camera->Transform(x - w / 2, y + h / 2);
	return Box(pos.x, pos.y, w, h, 0, 0);
}

void CSHeart::Update(int t)
{
	if (IsFalling == 1)
	{
		y -= Vy*t;
		Vx = sin(y*0.15)*10.5;//sin(x*0.03)*4.13;
		x = x2 + Vx;
		//Vy = Vy - 0.2;
		//y += Vy;
	}
}