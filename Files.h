#ifndef FILES_H_
#define FILES_H_
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>
std::string getUsername();
bool fileExists(const char *fileName);
std::string getStartupPath(std::string filename);
void beginStartup(std::string filename);
#endif /* FILES_H_ */
