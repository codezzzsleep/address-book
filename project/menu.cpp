#include "common.h"

hiex::Window window;
hiex::Canvas canvas;
void menu() {

	while (window.IsAlive())
	{

	}
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
/*
	加载按钮
*/
void loadButton() {
	hiex::SysButton Create(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 1 + 0 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"创建通讯录");
	hiex::SysButton Add(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 2 + 1 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"增加信息");
	hiex::SysButton Find(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 3 + 2 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"查询信息");
	hiex::SysButton Alter(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 4 + 3 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"修改信息");
	hiex::SysButton Delete(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 5 + 4 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"删除信息");
	hiex::SysButton List(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 6 + 5 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"显示通讯录所有信息");
	hiex::SysButton Quit(window.GetHandle(), (WINDOW_WIDTH - BUTTON_WIDTH) / 2, HEIGHT_DISTANCE * 7 + 6 * BUTTON_HEIGHT + 80, BUTTON_WIDTH, BUTTON_HEIGHT, L"退出菜单");

	//注册点击消息
	Create.RegisterMessage(onCreate);
	Add.RegisterMessage(onAdd);
	Find.RegisterMessage(onFind);
	Alter.RegisterMessage(onAlter);
	Delete.RegisterMessage(onDelete);
	List.RegisterMessage(onList);
	Quit.RegisterMessage(destroy);
}
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

}
