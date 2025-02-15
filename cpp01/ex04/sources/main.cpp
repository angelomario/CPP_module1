/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:17:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/22 18:45:12 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include <iostream>
# include <ostream>
# include <string>
#include <fstream>

int replacefile(std::string filename, std::string s1, std::string s2)
{
	size_t pos;
	std::string line;
	std::ifstream file_to_read(filename.c_str());

	if (s1.empty())
		return (std::cerr << "The string to be replace cannot be empty." << std::endl, 0);
	if (!file_to_read)
		return (std::cerr << "Error to open file!" << std::endl, 1);
	std::ofstream file_to_write((filename + ".replace").c_str());
	if (!file_to_write)
		return (std::cerr << "Error: the file " << filename << ".replace cannot be opened or criated." << std::endl , 1);
	while (getline(file_to_read, line))
	{
		while ((pos = (line.find(s1))) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		file_to_write << line << std::endl;
	}
	return (0);
}

int	main(void)
{
	replacefile("new.txt", "Angelo", "Mario");
	return (0);
}
