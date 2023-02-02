#include "common.h"

void initNewWindow() {
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
}

hiex::Window showTable(hiex::Window window) {
	hiex::Canvas canvas;
	window.BindCanvas(&canvas);
	int hight = WINDOW_HEIGHT - 60;
	int width = WINDOW_WIDTH;
	int col = COL; //ÁÐ
	int row = ROW; //ÐÐ
	int h_distance = hight / row;
	int w_distance = width / col;
	canvas.CenterText(L"test");
	for (int i = 0; i <= hight; i += h_distance) {
		canvas.Line(0, 0 + i,width,0+i);
	}
	for (int i = 0; i <= width; i += w_distance) {
		canvas.Line(0 + i, 0, 0 + i, hight);
	}
}