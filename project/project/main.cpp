#include "common.h"



int main()
{
	hiex::Window window = init();
	menu(window);
	
	destroy();
	return 0;

}
hiex::Window init() {
	hiex::Window window;
	//hiex::Canvas canvas;	
	window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	//window.BindCanvas(&canvas);
	hiex::SetWindowTitle(_T("通讯录"));
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
	return window;
}
void destroy() {
	closegraph();
}


