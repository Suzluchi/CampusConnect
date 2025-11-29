#include "StringUtility.h"
#include <algorithm>
#include <cctype>
#include <string>
#include <sstream>

// Trims whitespace from both ends of a string
std::string StringUtility::trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos) return ""; // No content
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

// Converts a string to lowercase
std::string StringUtility::toLower(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    return lowerStr;
}

// Splits a string by a delimiter and returns a vector of substrings
std::vector<std::string> StringUtility::split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(trim(token)); // Trim each token
    }
    return tokens;
}