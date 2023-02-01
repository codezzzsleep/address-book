#include "common.h"

void initNewWindow() {
	hiex::AutoExit();
	EnableResizing(GetHWnd(), false);
}

