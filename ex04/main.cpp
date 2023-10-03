/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:32:01 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/03 17:57:55 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
    // Check if the number of command-line arguments is correct
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <string> <replace_string>" << std::endl;
        return (1); // Exit with an error code
    }
    
    std::string filename = argv[1];
    std::string outputFileName = filename + ".replace";
    std::ifstream originalFile(filename);
    
    if (!originalFile) {
        std::cerr << "Error: Cannot open input file '" << filename << "'" << std::endl;
        return 1; // Exit with an error code
    }
    
    std::ofstream replacementFile(outputFileName);
    
    if (!replacementFile) {
        std::cerr << "Error: Cannot open output file '" << outputFileName << "'" << std::endl;
        return 1;
    }
    
    std::string substr;
    char ch;

	while (originalFile.get(ch))
	{
		substr = "";
		if (ch == argv[2][0])
		{
			// STOPPED HERE, NEEDS DEBUGGING
			substr += ch;
			bool match = true;
			for (size_t i = 1; i < strlen(argv[2]); i++)
			{
				if (!originalFile.peek() || originalFile.peek() != argv[2][i])
				{
					match = false;
					break; // breaks the for
				}
				originalFile.get(ch);  // Advance the stream position
				substr += ch;
			}
			if (match)
				replacementFile << argv[3];
			else
			{
				std::cout << "The replacement substr: " << substr << std::endl;
				replacementFile << substr;
				std::cout << "The substr after emptying is: " << substr << std::endl;
			}
		}
		else
			replacementFile.put(ch);
	}
    // Close the input and output files
    originalFile.close();
    replacementFile.close();
    std::cout << "Replacement is done." << std::endl;
    return (0);
}
