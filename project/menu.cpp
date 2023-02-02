#include "common.h"

hiex::Window window;
hiex::Canvas canvas;
void loadText() {
	hiex::SysEdit search(window.GetHandle(),0,0,240,20,L"搜索");
}
void menu() {
	init();
	loadText();
	hiex::SysButton create(window.GetHandle(), 0, 440, 100, 40, L"新建");
	hiex::SysButton list(window.GetHandle(), 100, 440, 100, 40, L"联系人");
	hiex::SysButton lead_in(window.GetHandle(), 200, 440, 100, 40, L"导入");
	hiex::SysButton searchButton(window.GetHandle(), 240, 0, 60, 20, L"搜索");
	//注册点击消息
	create.RegisterMessage(onCreate);
	list.RegisterMessage(onList);
	lead_in.RegisterMessage(onImport);
	searchButton.RegisterMessage(onSearch);
	hiex::init_end();
}
/*
	加载标题
*/
void loadTitle() {
	canvas.SetTypeface(L"Arial");
	canvas.SetFont(50);
	canvas.OutTextXY(120, 20, L"欢迎使用通讯录！");
	window.Redraw();
}
///*
//	加载按钮
//*/
//void loadButton() {
//	hiex::SysButton create(window.GetHandle(), 0, 440, 100, 40, L"新建");
//	hiex::SysButton list(window.GetHandle(), 100, 440, 100, 40, L"联系人");
//	hiex::SysButton lead_in(window.GetHandle(), 200, 440, 100, 40, L"导入");
//
//	//注册点击消息
//	create.RegisterMessage(onCreate);
//	list.RegisterMessage(onList);
//	lead_in.RegisterMessage(onImport);
//}
/*
	退出
*/
void destroy() {
	closegraph();
}
void init() {
	window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	window.BindCanvas(&canvas);
	hiex::SetWindowTitle(_T("通讯录"));
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