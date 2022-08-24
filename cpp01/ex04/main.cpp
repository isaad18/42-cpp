#include "main.hpp"

int open_file(std::string filename, std::string to_find, std::string to_replace){
	std::ifstream myfile (filename);
	std::string whole_file;
	std::ostringstream temp;
	int pos = 0;
	temp << myfile.rdbuf();
	whole_file = temp.str();
	if (to_find.compare(to_replace)){
		while ((pos = whole_file.find(to_find)) != -1){
			whole_file.erase(pos, to_find.length());
			whole_file.insert(pos, to_replace);
		}
	}
	std::string newfile_name;
	newfile_name = filename + ".copy";
	std::ofstream newfile (newfile_name);
	newfile << whole_file << std::endl;
	return 0;
}

int main(int argc, char **argv){
	if (argc != 4) {std::cout << "Invalid number of arguements" << std::endl; return 0;}
	if (!argv[1][0] || !argv[2][0] || !argv[3][0]) {std::cout << "Invalid arguments" << std::endl; return 0;}
	else {open_file(argv[1], argv[2], argv[3]);}
	return 0;
}