﻿#include "common.h"

hiex::Window window;
hiex::Canvas canvas;
int main()
{
	init();
	loadTitle();
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



	while (window.IsAlive())
	{

	}
	return 0;

}

void init() {
	window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	window.BindCanvas(&canvas);
	hiex::SetWindowTitle(_T("通讯录"));
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
}
void destroy() {
	closegraph();
}
hiex::Window getWindow() {
	return window;
}
hiex::Canvas getCanvas() {
	return canvas;
}



void createNewWindow() {
	hiex::Window temp;
	hiex::Window _window;
	_window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	_window.BindCanvas(&canvas);
	temp = window;
	window = _window;
	_window = temp;
	temp.Destroy();
	_window.Destroy();
}



void loadTitle() {
	canvas.SetTypeface(L"Arial");
	canvas.SetFont(50);
	canvas.OutTextXY(120, 20, L"欢迎使用通讯录！");
	window.Redraw();
}


/*
	因为框架的问题，按钮的绘制和按钮消息注册不能通过函数调用实现
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
