#include "common.h"

hiex::Window window;
hiex::Canvas canvas;
void loadText() {
	hiex::SysEdit search(window.GetHandle(),0,0,240,20,L"����");
}
void menu() {
	init();
	loadText();
	hiex::SysButton create(window.GetHandle(), 0, 440, 100, 40, L"�½�");
	hiex::SysButton list(window.GetHandle(), 100, 440, 100, 40, L"��ϵ��");
	hiex::SysButton lead_in(window.GetHandle(), 200, 440, 100, 40, L"����");
	hiex::SysButton searchButton(window.GetHandle(), 240, 0, 60, 20, L"����");
	//ע������Ϣ
	create.RegisterMessage(onCreate);
	list.RegisterMessage(onList);
	lead_in.RegisterMessage(onImport);
	searchButton.RegisterMessage(onSearch);
	hiex::init_end();
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
///*
//	���ذ�ť
//*/
//void loadButton() {
//	hiex::SysButton create(window.GetHandle(), 0, 440, 100, 40, L"�½�");
//	hiex::SysButton list(window.GetHandle(), 100, 440, 100, 40, L"��ϵ��");
//	hiex::SysButton lead_in(window.GetHandle(), 200, 440, 100, 40, L"����");
//
//	//ע������Ϣ
//	create.RegisterMessage(onCreate);
//	list.RegisterMessage(onList);
//	lead_in.RegisterMessage(onImport);
//}
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
	canvas.Clear();
	canvas.CenterText(L"onCreate");
	window.Redraw();
}
void onList() {
	canvas.Clear();
	canvas.CenterText(L"onList");
	window.Redraw();
}
void onImport() {
	openFileDialog();
}
void onSearch() {
	canvas.Clear();
	canvas.CenterText(L"onsearch");
	window.Redraw();
}