#include "common.h"

hiex::Window window;
hiex::Canvas canvas;
void menu() {

	while (window.IsAlive())
	{

	}
}
/*
	���ر���
*/
void loadTitle() {
	canvas.SetTypeface(L"Arial");
	canvas.SetFont(50);
	canvas.OutTextXY(120, 20, L"��ӭʹ��ͨѶ¼��");
	window.Redraw();
}
/*
	���ذ�ť
*/
void loadButton() {
	hiex::SysButton Create(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 1 + 0 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"����ͨѶ¼");
	hiex::SysButton Add(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 2 + 1 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"������Ϣ");
	hiex::SysButton Find(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 3 + 2 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"��ѯ��Ϣ");
	hiex::SysButton Alter(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 4 + 3 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"�޸���Ϣ");
	hiex::SysButton Delete(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 5 + 4 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"ɾ����Ϣ");
	hiex::SysButton List(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 6 + 5 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"��ʾͨѶ¼������Ϣ");
	hiex::SysButton Quit(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 7 + 6 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"�˳��˵�");

	//ע������Ϣ
	Create.RegisterMessage(onCreate);
	Add.RegisterMessage(onAdd);
	Find.RegisterMessage(onFind);
	Alter.RegisterMessage(onAlter);
	Delete.RegisterMessage(onDelete);
	List.RegisterMessage(onList);
	Quit.RegisterMessage(destroy);
}
/*
	�˳�
*/
void destroy() {
	closegraph();
}
void init() {
	window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	window.BindCanvas(&canvas);
	hiex::SetWindowTitle(_T("ͨѶ¼"));
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
}
void onCreate() {

}
