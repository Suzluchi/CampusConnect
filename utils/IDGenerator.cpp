#include "IDGenerator.h"
#include <random>
#include <string>

IDGenerator::IDGenerator() {
    // Seed the random number generator
    generator.seed(std::random_device()());
}

std::string IDGenerator::generateStudentID() {
    return "S" + std::to_string(generateUniqueID());
}

std::string IDGenerator::generateCourseID() {
    return "C" + std::to_string(generateUniqueID());
}

int IDGenerator::generateUniqueID() {
    std::uniform_int_distribution<int> distribution(1000, 9999);
    return distribution(generator);
}