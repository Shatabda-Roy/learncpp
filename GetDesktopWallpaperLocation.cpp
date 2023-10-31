#include <Windows.h>
#include <Wininet.h>
#include <ShlObj.h>
#include <iostream>
using namespace std;

int main(void) {
	HRESULT result;
	/* Initialize a COM sub-system. */
	CoInitialize(nullptr);
	/* Declare the COM interface 'IActiveDesktop' */
	IActiveDesktop* pDesktop = nullptr;
	/* String Buffer*/
	WCHAR WallPaper[MAX_PATH];
	/* Creating COM object and returning its memory location in pDesktop for our interface. */
	result = CoCreateInstance(CLSID_ActiveDesktop, nullptr, CLSCTX_INPROC_SERVER, __uuidof(pDesktop), reinterpret_cast<void**>(&pDesktop));

	pDesktop->GetWallpaper(WallPaper, MAX_PATH, NULL);
	pDesktop->Release();
	std::wcout << WallPaper;
	CoUninitialize();
	return EXIT_SUCCESS;
}