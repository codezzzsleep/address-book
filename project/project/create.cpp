#include "common.h"

void onCreate() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	canvas.OutTextXY(0, 320, L"oncreate");
	window.Redraw();
}