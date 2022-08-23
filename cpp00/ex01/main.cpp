#include "main.hpp"

void fill_info(Contact *data){
	std::cout << "add info:" << std::endl;
	do{
	std::cout << "first name >>";
		std::getline(std::cin, data->first_name);
	} while (data->first_name[0] == '\0');
	do{
	std::cout << "last name >>";
	std::getline(std::cin, data->last_name);
	} while (data->last_name[0] == '\0');
	do{
	std::cout << "nick name >>";
	std::getline(std::cin, data->nick_name);
	} while (data->nick_name[0] == '\0');
	do{
	std::cout << "email address >>";
	std::getline(std::cin, data->email_address);
	} while (data->email_address[0] == '\0');
	do{
	std::cout << "phone number >>";
	std::getline(std::cin, data->phone_number);
	} while (data->phone_number[0] == '\0');
	do{
	std::cout << "darkest secret >>";
	std::getline(std::cin, data->darkest_secret);
	} while (data->darkest_secret[0] == '\0');
	do{
	std::cout << "instagram user >>";
	std::getline(std::cin, data->instagram_user);
	} while (data->instagram_user[0] == '\0');
	data->flag = true;
	std::cout << "contact added successfully!!" << std::endl;
}

void print_info(Contact *data) {
	std::cout << std::endl << "first name >>";
	std::cout << data->first_name << std::endl;
	std::cout << std::endl << "last name >>";
	std::cout << data->last_name << std::endl;
	std::cout << std::endl << "nick name >>";
	std::cout << data->nick_name << std::endl;
	std::cout << std::endl << "email address >>";
	std::cout << data->email_address << std::endl;
	std::cout << std::endl << "phone number >>";
	std::cout << data->phone_number << std::endl;
	std::cout << std::endl << "darkest secret >>";
	std::cout << data->darkest_secret << std::endl;
	std::cout << std::endl << "instagram user >>";
	std::cout << data->instagram_user << std::endl << std::endl;
}

void print_table_header(){
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|   index  |first name| last name| nick name|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void print_table_info(Contact *data, int index){
	int i;
	std::cout << "|     " << index << "    |";
	if (data->first_name.length() < 10)
		std::cout << data->first_name;
	else
		for(int i = 0; i < 10; i++)
			std::cout << (char)data->first_name[i];
	i = 10 - data->first_name.length();
	for (int j = 0; j < i; j++)
		std::cout << " ";
	std::cout << "|";
	if (data->last_name.length() < 10)
		std::cout << data->last_name;
	else
		for(int i = 0; i < 10; i++)
			std::cout << (char)data->last_name[i];
	i = 10 - data->last_name.length();
	for (int j = 0; j < i; j++)
		std::cout << " ";
	std::cout << "|";
	if (data->nick_name.length() < 10)
		std::cout << data->nick_name;
	else
		for(int i = 0; i < 10; i++)
			std::cout << (char)data->nick_name[i];
	i = 10 - data->nick_name.length();
	for (int j = 0; j < i; j++)
		std::cout << " ";
	std::cout << "|";
	std::cout << std::endl << "|__________|__________|__________|__________|" << std::endl;
}

void false_them_all(Contact data[8]){
	data[0].flag = false;
	data[1].flag = false;
	data[2].flag = false;
	data[3].flag = false;
	data[4].flag = false;
	data[5].flag = false;
	data[6].flag = false;
	data[7].flag = false;
}

void table_prepare(Contact data[8]){
	if (data[0].flag == true)
		print_table_info(&data[0], 1);
	if (data[1].flag == true)
		print_table_info(&data[1], 2);
	if (data[2].flag == true)
		print_table_info(&data[2], 3);
	if (data[3].flag == true)
		print_table_info(&data[3], 4);
	if (data[4].flag == true)
		print_table_info(&data[4], 5);
	if (data[5].flag == true)
		print_table_info(&data[5], 6);
	if (data[6].flag == true)
		print_table_info(&data[6], 7);
	if (data[7].flag == true)
		print_table_info(&data[7], 8);
}

int main(){
	Contact data[8];
	bool infinite = true;
	int redirect;
	int index = 0;
	int printing_index = 0;
	int flag = 0;
	false_them_all(data);
	do{
		std::cout << ">>";
		redirect = data->check_line();
		if (redirect){
			if (redirect == 1){
				fill_info(&data[index]);
				index = (index + 1) % 8;
				flag = 1;
			}
			if (redirect == 2){
				if (flag){
				print_table_header();
				table_prepare(data);
				std::cout << "choose index to show detials, or enter 0 to cancel." << std::endl << ">>";
				if (!(std::cin >> printing_index))
					continue ;
				if (printing_index < 0 || printing_index > 8)
				{
					std::cout << "Invalid index: " << printing_index << std::endl;
					continue ;
				}
				if (printing_index == 0)
				{
					std::cout << "are you waisting my time?" << std::endl;
					continue ;
				}
				if (printing_index && data[printing_index - 1].flag)
					print_info(&data[printing_index - 1]);
				else std::cout << "no info in that contact yet." << std::endl;
				}
				else std::cout << "fill some contacts first!" << std::endl;
			}
			if (redirect == 3)
			{
				std::cout << "Bye!" << std::endl;
				infinite = false;
			}
		}
	} while (infinite);
}
