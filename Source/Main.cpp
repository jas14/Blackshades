/********************> Headers <*****/

#include "Game.h"



/********************> Globals <*****/



Game game;



/********************> main() <*****/

int 	main( int argc, char *argv[] )
{
	game.InitGL();

	game.InitGame();

	game.EventLoop();

	game.Dispose();
}

