#include <Windows.h>
#include "xhook.h"

#include <iostream>
using namespace std;

typedef void(WINAPI *SleepF)(DWORD dwMilliseconds);
SleepF sleep_fn = &::Sleep;

void WINAPI MySleep(DWORD ms)
{
	cout << "MySleep(" << ms << ")" << endl;
}

int main()
{
	XHookRestoreAfterWith();
	XHookTransactionBegin();
	XHookUpdateThread(GetCurrentThread());
	XHookAttach(&(PVOID&)sleep_fn, MySleep);
	XHookTransactionCommit();
	::Sleep(1);
	cout << 1 << endl;
	system("pause");
	return 0;
}
