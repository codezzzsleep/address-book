#include "common.h"

void onList() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	createNewWindow();
	initNewWindow();
	hiex::SetWindowTitle(L"通讯录-信息");
}