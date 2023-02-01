#include "common.h"

void onAlter() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	canvas.OutTextXY(0, 320, L"onalter");
	createNewWindow();
	window.Redraw();
}