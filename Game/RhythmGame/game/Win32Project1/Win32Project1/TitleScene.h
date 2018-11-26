#pragma once

#include "Scene.h"

class Sprite;
class Font;

class TitleScene : public Scene
{
private:
	//Sprite* _backgroundSprite;
	int _updateTick;
	int _waitTick;

	Font* _test;
	Font* _test1;

public:
	TitleScene();
	~TitleScene();

	void Init();
	void Deinit();
	void Update(int deltaTime);
	void Render();

	void KeyUp(unsigned int keyCode);
	void KeyDown(unsigned int keyCode);
};