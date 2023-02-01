#include "common.h"

void onFind() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	canvas.OutTextXY(0, 220, L"onfind");
	window.Redraw();
}