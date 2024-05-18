#ifndef FILEINPUT_H
#define FILEINPUT_H

#include <string>
#include <vector>

class FileInput {
public:
    std::vector<std::string> readDataFromFile(const std::string& filename);
    void writeDataToFile(const std::string& filename, const std::string& data);
    std::vector<std::vector<std::string>> parseData(const std::vector<std::string>& rawData);
    std::string formatData(const std::vector<std::vector<std::string>>& data);
};

#endif /* FILEINPUT_H */
