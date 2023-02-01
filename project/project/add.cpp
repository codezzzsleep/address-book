#include "common.h"

void onAdd() {
	
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	canvas.OutTextXY(0, 320, L"onadd");
	window.Redraw();
}