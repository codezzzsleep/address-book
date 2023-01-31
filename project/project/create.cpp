#include "common.h"

void onCreate() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	canvas.OutTextXY(300, 20, L"onadd");
	window.Redraw();
}