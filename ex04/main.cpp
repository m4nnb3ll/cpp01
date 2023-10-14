/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:32:01 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/14 22:52:26 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	myReplace(const std::string& lineToReplace, const std::string& pattern, const std::string& patch)
{
	std::string	res;
	int	startPos = 0;
	int	foundPos;

	while ((foundPos = lineToReplace.find(pattern, startPos)) != std::string::npos)
	{
		res.append(lineToReplace, startPos, foundPos - startPos);
		res.append(patch);
		startPos = foundPos + pattern.length();
	}
	res.append(lineToReplace, startPos, lineToReplace.length() - startPos);
	return (res);
}


int main(int argc, char** argv)
{
	std::string lineToReplace;

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
	while (std::getline(originalFile, lineToReplace))
		replacementFile << myReplace(lineToReplace, argv[2], argv[3]) << std::endl;
    // Close the input and output files
    originalFile.close();
    replacementFile.close();
    std::cout << "Done." << std::endl;
    return (0);
}
