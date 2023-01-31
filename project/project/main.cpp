#include "common.h"


hiex::Window window;
hiex::Canvas canvas;
int main()
{
	init();
	menu();
	
	destroy();
	return 0;

}
void init() {
	window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	window.BindCanvas(&canvas);
	hiex::SetWindowTitle(_T("通讯录"));
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
}
void destroy() {
	closegraph();
}
hiex::Window getWindow() {
	return window;
}
hiex::Canvas getCanvas() {
	return canvas;
}


