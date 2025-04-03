#include <iostream>
#include <fstream>

int main() {
    std::string textToWrite = "Learning C++ File Handling";

    // Writing to the file
    std::ofstream outFile("example.txt");
    if (outFile) {
        outFile << textToWrite;
        outFile.close(); // Closing the file after writing
    } else {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1; // Return an error code
    }

    std::string textRead;

    // Reading from the file
    std::ifstream inFile("example.txt");
    if (inFile) {
        std::getline(inFile, textRead);
        std::cout << "File Content: " << textRead << std::endl;
        inFile.close(); // Closing the file after reading
    } else {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1; // Return an error code
    }

    return 0;
}
