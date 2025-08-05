#include "Game.h"

int main()
{
	Game tetrisGame;
	while (tetrisGame.window.isOpen())
	{
		tetrisGame.gameRun();
	}
	return 0;
}