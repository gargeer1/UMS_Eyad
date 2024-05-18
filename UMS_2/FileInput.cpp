#include "FileInput.h"
#include <fstream>
#include <iostream>
#include <sstream>

std::vector<std::string> FileInput::readDataFromFile(const std::string& filename) {
    std::vector<std::string> data;
    std::ifstream file(filename);
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            data.push_back(line);
        }
        file.close();
    }
    else {
        std::cout << "Unable to open file: " << filename << std::endl;
    }

    return data;
}

void FileInput::writeDataToFile(const std::string& filename, const std::string& data) {
    std::ofstream file(filename, std::ios::app);

    if (file.is_open()) {
        file << data << std::endl;
        file.close();
    }
    else {
        std::cout << "Unable to open file: " << filename << std::endl;
    }
}

std::vector<std::vector<std::string>> FileInput::parseData(const std::vector<std::string>& rawData) {
    std::vector<std::vector<std::string>> parsedData;

    for (const std::string& line : rawData) {
        std::vector<std::string> fields;
        std::istringstream iss(line);
        std::string field;
        while (std::getline(iss, field, ',')) {
            fields.push_back(field);
        }
        parsedData.push_back(fields);
    }

    return parsedData;
}

std::string FileInput::formatData(const std::vector<std::vector<std::string>>& data) {
    std::string formattedData;

    for (const std::vector<std::string>& fields : data) {
        for (size_t i = 0; i < fields.size(); ++i) {
            formattedData += fields[i];
            if (i < fields.size() - 1) {
                formattedData += ',';
            }
        }
        formattedData += '\n';
    }

    return formattedData;
}
