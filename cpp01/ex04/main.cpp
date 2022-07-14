#include "main.hpp"

int open_file(std::string filename){
	std::ifstream myfile (filename);
	std::string whole_file;
	std::string buffer;
	while (!myfile.eof()){
		myfile >> buffer;
		whole_file = whole_file + buffer + '\n';
	}
	if (myfile.fail()) {std::cout << "no such a file!" << std::endl; return 0;}
	if (whole_file.empty()) {std::cout << "nothing inside the file!!" << std::endl; return 0;}
	std::string newfile_name;
	newfile_name = filename + ".copy";
	std::ofstream newfile (newfile_name);
	newfile << whole_file << std::endl;
	return 0;
}

int main(int argc, char **argv){
	if (argc != 4) {std::cout << "Invalid number of arguements" << std::endl; return 0;}
	else {open_file(argv[1]);}
	return 0;
}