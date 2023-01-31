#include "common.h"



void menu() {
	loadTitle();
	loadButton();
	
	
	hiex::init_end();

}
void loadButton() {
	
	hiex::Window window = getWindow();
	//������ť�ؼ�
	hiex::SysButton Create(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE*1 + 0 * BUTTON_HEIGHT+80, BUTTON_WIDTH, BUTTON_HEIGHT, L"����ͨѶ¼");
	hiex::SysButton Add(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *2+ 1 * BUTTON_HEIGHT+80, BUTTON_WIDTH, BUTTON_HEIGHT, L"������Ϣ");
	hiex::SysButton Find(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *3+ 2 * BUTTON_HEIGHT+80, BUTTON_WIDTH, BUTTON_HEIGHT, L"��ѯ��Ϣ");
	hiex::SysButton Alter(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *4+ 3 * BUTTON_HEIGHT+80, BUTTON_WIDTH, BUTTON_HEIGHT, L"�޸���Ϣ");
	hiex::SysButton Delete(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *5+ 4 * BUTTON_HEIGHT+80, BUTTON_WIDTH, BUTTON_HEIGHT, L"ɾ����Ϣ");
	hiex::SysButton List(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *6+ 5 * BUTTON_HEIGHT+80, BUTTON_WIDTH, BUTTON_HEIGHT, L"��ʾͨѶ¼������Ϣ");
	hiex::SysButton Quit(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE *7+ 6 * BUTTON_HEIGHT+80, BUTTON_WIDTH, BUTTON_HEIGHT, L"�˳��˵�");
	
	//ע������Ϣ
	Create.RegisterMessage(onCreate);
	Add.RegisterMessage(onAdd);
	Find.RegisterMessage(onFind);
	Alter.RegisterMessage(onAlter);
	Delete.RegisterMessage(onDelete);
	List.RegisterMessage(onList);
	Quit.RegisterMessage(destroy);
	if (Create.IsClicked()) {
		std::cout << "hhhh" << std::endl;
	}
	
}
void loadTitle() {
	hiex::Window window = getWindow();
	hiex::Canvas canvas = getCanvas();
	
	canvas.SetTypeface(L"Arial");
	canvas.SetFont(60);
	canvas.OutTextXY(100, 20, L"��ӭʹ��ͨѶ¼��");
	window.Redraw();
}