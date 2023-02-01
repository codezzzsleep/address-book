#include "common.h"

void onCreate() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	createNewWindow();
	initNewWindow();
	hiex::SetWindowTitle(L"通讯录-创建新的通讯录");
}