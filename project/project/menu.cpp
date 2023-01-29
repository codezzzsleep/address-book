#include "common.h"


int menu(hiex::Window window) {
	outtextxy(20, 20, L"Windows Tray Icon Creation Sample");
	loadButton(window);
	

	


	//button.RegisterMessage();
	hiex::init_end();
	return 0;
}
void loadButton(hiex::Window window) {
	hiex::SysButton Create(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE*1 + 0 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"创建通讯录");
	hiex::SysButton Add(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *2+ 1 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"增加信息");
	hiex::SysButton Find(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *3+ 2 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"查询信息");
	hiex::SysButton Alter(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *4+ 3 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"修改信息");
	hiex::SysButton Delete(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *5+ 4 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"删除信息");
	hiex::SysButton List(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *6+ 5 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"显示通讯录所有信息");
	hiex::SysButton Quit(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *7+ 6 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"退出菜单");

}
