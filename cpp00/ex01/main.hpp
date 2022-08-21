#ifndef MAIN_HPP

# include<string>
# include<iostream>
# include<cstdlib>

class Contact{
	private:
		std::string line;
		static const int i = 100;
		static std::string ideas[i];
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string email_address;
		std::string darkest_secret;
		std::string instagram_user;
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