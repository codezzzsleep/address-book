#include "common.h"

hiex::Window window;
hiex::Canvas canvas;
hiex::Canvas canvas2;

void loadText() {
}
void menu() {
	init();
	loadText();

	hiex::SysButton create(window.GetHandle(), 0, 440, 100, 40, L"新建");
	hiex::SysButton list(window.GetHandle(), 100, 440, 100, 40, L"联系人");
	hiex::SysButton lead_in(window.GetHandle(), 200, 440, 100, 40, L"导入");
	hiex::SysEdit search(window.GetHandle(), 5, 0, 280, 20, L"输入姓名或电话进行搜索");

	//注册点击消息
	create.RegisterMessage(onCreate);
	list.RegisterMessage(onList);
	lead_in.RegisterMessage(onImport);
	search.RegisterMessage(getText);

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

/*
	退出
*/
void destroy() {
	closegraph();
}
/*
	初始化窗口
*/
void init() {
	window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	window.BindCanvas(&canvas);
	hiex::SetWindowTitle(_T("通讯录"));
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
}
/*
	新建联系人
*/
void onCreate() {
	hiex::Window window2;
	window2.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	hiex::SetWindowTitle(_T("通讯录-新建"));
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
	window2.BindCanvas(&canvas2);
	hiex::SysEdit name(window2.GetHandle(), 100, 30, 180, 20);
	hiex::SysEdit phone(window2.GetHandle(), 100, 90, 180, 20);
	phone.NumberOnly(true);
	hiex::SysEdit address(window2.GetHandle(), 100, 120, 180, 20);
	//hiex::SysEdit belong(window2.GetHandle(), 100, 150, 180, 20);
	hiex::SysButton add(window2.GetHandle(), 100, 220, 100, 30, L"新增联系人");
	hiex::SysGroup sexGroup(window2.GetHandle());
	hiex::SysRadioButton male;
	hiex::SysRadioButton female;
	male.Create(window2.GetHandle(), 100, 60, 30, 20, L"男");
	male.Check(true);
	female.Create(window2.GetHandle(), 140, 60, 30, 20, L"女");

	hiex::SysComboBox belong;
	belong.PreSetStyle({ false, false, true });
	belong.Create(window2.GetHandle(), 100, 150, 180, 20, L"所属");
	std::wstring belongs[4] = {
		L"同事",L"家人",L"朋友",L"同学"
	};
	for (int i = 0; i < 4; i++)
	{
		belong.AddString(belongs[i]);
	}
	name.RegisterMessage(getName);
	male.RegisterMessage(isMale);
	phone.RegisterMessage(getPhone);
	address.RegisterMessage(getAddress);
	add.RegisterMessage(onAdd);
	belong.RegisterEditMessage(getBelong);
	canvas2.OutTextXY(30,30,L"姓名");
	canvas2.OutTextXY(30, 60, L"性别");
	canvas2.OutTextXY(30, 90, L"电话");
	canvas2.OutTextXY(30, 120, L"地址");
	canvas2.OutTextXY(30, 150, L"所属");
	window2.Redraw();
	while (window2.IsAlive())
	{

	}
}
void onList() {
	canvas.Clear();
	canvas.CenterText(L"onList");
	window.Redraw();
}
void onImport() {
	openFileDialog();
}

void getText(std::wstring text) {
	canvas.Clear();
	canvas.CenterText(text.c_str());
	window.Redraw();
}
void getName(std::wstring name) {
	std::cout << "name" << std::endl;
	std::wcout.imbue(std::locale("chs"));
	std::wcout << name.c_str() << std::endl;
}

void getPhone(std::wstring phone) {
	std::wcout.imbue(std::locale("chs"));
	std::cout << "phone" << std::endl;
	std::wcout << phone.c_str() << std::endl;

}
void getAddress(std::wstring address) {
	std::cout << "address" << std::endl;
	std::wcout.imbue(std::locale("chs"));

	std::wcout << address.c_str() << std::endl;

}
void getBelong(std::wstring belong) {
	std::cout << "belong" << std::endl;
	std::wcout.imbue(std::locale("chs"));

	std::wcout << belong.c_str() << std::endl;
	

}
void onAdd() {
	std::cout << "确认" << std::endl;
}
void isMale(bool male) {
	std::cout << (male ? "男" : "女") << std::endl;
}