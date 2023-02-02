#include "common.h"

hiex::Window window;
hiex::Canvas canvas;
int main()
{
	return 0;
}






void createNewWindow() {
	hiex::Window temp;
	hiex::Window _window;
	_window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	temp = window;
	window = _window;
	_window = temp;
	temp.Destroy();
	_window.Destroy();
}




