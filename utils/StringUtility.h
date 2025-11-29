#ifndef STRINGUTILITY_H
#define STRINGUTILITY_H

#include <string>
#include <algorithm>
#include <cctype>

class StringUtility {
public:
    static std::string trim(const std::string& str) {
        size_t first = str.find_first_not_of(' ');
        size_t last = str.find_last_not_of(' ');
        return (first == std::string::npos) ? "" : str.substr(first, (last - first + 1));
    }

    static std::string toLower(const std::string& str) {
        std::string lowerStr = str;
        std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), 
                       [](unsigned char c) { return std::tolower(c); });
        return lowerStr;
    }
};

#endif // STRINGUTILITY_H