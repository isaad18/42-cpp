#ifndef MAIN_HPP

# include<string>
# include<iostream>

class Main{
	private:
		std::string line;
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string email_address;
		std::string darkest_secret;
		bool flag;
		int check_line(){
			getline(std::cin, line);
			if(line == "ADD")
				return 1;
			if(line == "SEARCH")
				return 2;
			if(line == "EXIT")
				return 3;
			return 0;
		}
};

#endif