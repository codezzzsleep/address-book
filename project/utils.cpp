#include"common.h"

char* wcharTochar(const wchar_t* _wchar) {
	char* _char;
	int len = WideCharToMultiByte(CP_ACP, 0, _wchar, (int)wcslen(_wchar), NULL, 0, NULL, NULL);
	_char = new char[len + 1];
	WideCharToMultiByte(CP_ACP, 0, _wchar, (int)wcslen(_wchar), _char, len, NULL, NULL);
	_char[len] = '\0';
	return _char;
}
void openFileDialog() {
	OPENFILENAME ofn;			// �����Ի���ṹ
	TCHAR szFile[MAX_PATH];		// �����ȡ�ļ����ƵĻ�����
	ZeroMemory(&ofn, sizeof(OPENFILENAME));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = NULL;
	ofn.lpstrFile = szFile;
	ofn.lpstrFile[0] = '\0';
	ofn.nMaxFile = sizeof(szFile);
	ofn.lpstrFilter = L"All\0*.*\0Text\0*.TXT\0Image\0*.PNG;*.JPG\0"; //���˹���
	ofn.nFilterIndex = 1;
	ofn.lpstrFileTitle = NULL;
	ofn.nMaxFileTitle = 0;
	ofn.lpstrInitialDir = L"C:\\Program Files";	//ָ��Ĭ��·��
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
	if (GetOpenFileName(&ofn)) {
		//��ʾѡ����ļ���
		wchar_t* t = ofn.lpstrFile;
		// ��wchar_tת��Ϊchar���
		std::cout << wcharTochar(t) << std::endl;
	}
}