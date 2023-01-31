#include "common.h"

void onAlter() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	canvas.OutTextXY(300, 20, L"onadd");
	window.Redraw();
}