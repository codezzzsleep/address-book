#include "common.h"


int menu(hiex::Window window) {
	outtextxy(20, 20, L"Windows Tray Icon Creation Sample");
	loadButton(window);
	

	


	//button.RegisterMessage();
	hiex::init_end();
	return 0;
}
void loadButton(hiex::Window window) {
	hiex::SysButton Create(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE*1 + 0 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"����ͨѶ¼");
	hiex::SysButton Add(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *2+ 1 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"������Ϣ");
	hiex::SysButton Find(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *3+ 2 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"��ѯ��Ϣ");
	hiex::SysButton Alter(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *4+ 3 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"�޸���Ϣ");
	hiex::SysButton Delete(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *5+ 4 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"ɾ����Ϣ");
	hiex::SysButton List(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *6+ 5 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"��ʾͨѶ¼������Ϣ");
	hiex::SysButton Quit(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *7+ 6 * BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT, L"�˳��˵�");

}
