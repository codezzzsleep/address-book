#include "common.h"

void onAlter() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	createNewWindow();
	initNewWindow();
	hiex::SetWindowTitle(L"通讯录-修改资料");
	

}