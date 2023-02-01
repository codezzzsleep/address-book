#include "common.h"

void onDelete() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	window.BindCanvas(&canvas);
	canvas.SetTypeface(L"Arial");
	canvas.SetFont(60);
	canvas.OutTextXY(300, 20, L"onadd");
	window.Redraw();
}