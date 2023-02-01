#include "common.h"

void onList() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	canvas.Clear();
	/*hiex::Button button();*/

	canvas.OutTextXY(300, 200, L"onlist");
	window.Redraw();
}