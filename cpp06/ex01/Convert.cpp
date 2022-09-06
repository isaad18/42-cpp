#include "Convert.hpp"

int parse_input(char *input){
	int i = 0;

	while (input[i]){
		if ((!isdigit(input[i]) && input[i] != '.') && input[i + 1] && (!isdigit(input[i + 1]) && input[i + 1] != '.')){
			// std::cerr << "Invalid Input" << std::endl;
			return 1;
		}
		if ((!isdigit(input[i]) && input[i] != '.') && isdigit(input[i + 1])){
			// std::cerr << "Invalid Input " << std::endl;
			return 1;
		}
		if (isdigit(input[i]) && isdigit(input[i + 1])){
			i++;
			continue;
		}
		if (isdigit(input[i]) && input[i + 1] && (input[i + 1] != 'f' && input[i + 1] != '.')){
			// std::cerr << "Float is with an f!!" << std::endl;
			return 1;
		}
		i++;
	}
	return 0;
}

void print_converted(char *input, float F, int I, double D, char C){
	std::cout << "float:   " << F << std::endl;
	if (parse_input(input)){
		std::cout << "int:   " << "Impossible number" << std::endl;
		std::cout << "char:   " << "Impossible ascii" << std::endl;
	}
	else{
		std::cout << "int:   " << I << std::endl;
	if (I < 0 || I > 127)
		std::cout << "char:   " << "Invalid ascii" << std::endl;
	else if (I >= 0 && I <= 31)
		std::cout << "char:   " << "non printable ascii" << std::endl;
	else
		std::cout << "char:   " << C << std::endl;
	}
	std::cout << "double:   " << D << std::endl;
}

void Converter(char *input, float *F, int *I, double *D, char *C){
	*F = static_cast<float>(atof(input));
	*I = static_cast<int>(*F);
	*D = static_cast<double>(*F);
	if (*I >= 0 && *I <= 127)
		*C = static_cast<char>(*I);
}

uintptr_t serialize(Data* ptr){
	uintptr_t new_ptr = reinterpret_cast<uintptr_t>(ptr);
	return new_ptr;
}

Data* deserialize(uintptr_t ptr){
	Data *new_ptr = reinterpret_cast<Data*>(ptr);
	return new_ptr;
}

int main(int argc, char **argv){
	Data *aa = new Data;
	Data *cc;
	uintptr_t bb;
	float F;
	int I;
	double D;
	char C;

	std::cout << "______________________________________________________________" << std::endl << "serialization and deserialization proccess is starting..." << std::endl << std::endl;
	try{
		aa->I = 8;
		aa->C = 'p';
		aa->D = 6;
		aa->F = 77;
		bb = serialize(aa);
		std::cout << "aa serialized successfully" << std::endl;
		cc = deserialize(bb);
		std::cout << "bb deserialized successfully" << std::endl;
		std::cout << "integer:  " << cc->I << std::endl << "char:  " << cc->C << std::endl << "double:  " << cc->D << std::endl << "float:  " << cc->F << std::endl;
		delete aa;
	}
	catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "______________________________________________________________" << std::endl << "convertion is starting..." << std::endl << std::endl;
	try{
		if (argc == 1){
			std::cerr << "No enough arguments" << std::endl;
			return 0;
		}
		Converter(argv[1], &F, &I, &D, &C);
		print_converted(argv[1], F, I, D, C);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "______________________________________________________________" << std::endl;
	return 0;
}

//reinterpret_cast<type>() powerful to get integer from a struct or something similar
//static_cast<type>() forces the variables to be converted to other type, returns an exception if any error occurs