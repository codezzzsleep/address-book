#include "common.h"

hiex::Window window;
hiex::Canvas canvas;
hiex::Canvas canvas2;

void loadText() {
}
void menu() {
	init();
	loadText();

	hiex::SysButton create(window.GetHandle(), 0, 440, 100, 40, L"�½�");
	hiex::SysButton list(window.GetHandle(), 100, 440, 100, 40, L"��ϵ��");
	hiex::SysButton lead_in(window.GetHandle(), 200, 440, 100, 40, L"����");
	hiex::SysEdit search(window.GetHandle(), 5, 0, 280, 20, L"����������绰��������");

	//ע������Ϣ
	create.RegisterMessage(onCreate);
	list.RegisterMessage(onList);
	lead_in.RegisterMessage(onImport);
	search.RegisterMessage(getText);

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

/*
	�˳�
*/
void destroy() {
	closegraph();
}
/*
	��ʼ������
*/
void init() {
	window.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	window.BindCanvas(&canvas);
	hiex::SetWindowTitle(_T("ͨѶ¼"));
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
}
/*
	�½���ϵ��
*/
void onCreate() {
	hiex::Window window2;
	window2.Create(WINDOW_WIDTH, WINDOW_HEIGHT);
	hiex::SetWindowTitle(_T("ͨѶ¼-�½�"));
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
	window2.BindCanvas(&canvas2);
	hiex::SysEdit name(window2.GetHandle(), 100, 30, 180, 20);
	hiex::SysEdit phone(window2.GetHandle(), 100, 90, 180, 20);
	phone.NumberOnly(true);
	hiex::SysEdit address(window2.GetHandle(), 100, 120, 180, 20);
	//hiex::SysEdit belong(window2.GetHandle(), 100, 150, 180, 20);
	hiex::SysButton add(window2.GetHandle(), 100, 220, 100, 30, L"������ϵ��");
	hiex::SysGroup sexGroup(window2.GetHandle());
	hiex::SysRadioButton male;
	hiex::SysRadioButton female;
	male.Create(window2.GetHandle(), 100, 60, 30, 20, L"��");
	male.Check(true);
	female.Create(window2.GetHandle(), 140, 60, 30, 20, L"Ů");

	hiex::SysComboBox belong;
	belong.PreSetStyle({ false, false, true });
	belong.Create(window2.GetHandle(), 100, 150, 180, 20, L"����");
	std::wstring belongs[4] = {
		L"ͬ��",L"����",L"����",L"ͬѧ"
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
	canvas2.OutTextXY(30,30,L"����");
	canvas2.OutTextXY(30, 60, L"�Ա�");
	canvas2.OutTextXY(30, 90, L"�绰");
	canvas2.OutTextXY(30, 120, L"��ַ");
	canvas2.OutTextXY(30, 150, L"����");
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
	std::cout << "ȷ��" << std::endl;
}
void isMale(bool male) {
	std::cout << (male ? "��" : "Ů") << std::endl;
}