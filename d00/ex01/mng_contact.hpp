#ifndef MNG_CONTACT_H
# define MNG_CONTACT_H

#include <string>

class	Data {

	public: 

		Data(void); 
		~Data(void);

		void		add_data(std::string, int i);
		std::string	get_data(int i) const;

	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _login;
		std::string _address;
		std::string _email;
		std::string _phone;
		std::string _birthday;
		std::string _meal;
		std::string _panties;
		std::string _secret;
}; 

#endif