#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <vector>
#include <string>
#include "Account.hpp"

class FileManager {
public:
    static void saveData(const std::vector<Account>& accounts, const std::string& filename);
    static void loadData(std::vector<Account>& accounts, const std::string& filename);
};

#endif // FILEMANAGER_HPP
