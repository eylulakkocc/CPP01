#include "Harl.hpp"

enum Level {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INVALID
};

Level getLevel(const std::string& levely) {
    if (levely == "DEBUG")
        return DEBUG;
    if (levely == "INFO")    
        return INFO;
    if (levely == "WARNING")
        return WARNING;
    if (levely == "ERROR")
        return ERROR;
    return INVALID;
}

int main(int argc, char **argv) {
    Harl harl;

    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    Level level = getLevel(argv[1]);

    switch (level) {
        case DEBUG:
            harl.complain("DEBUG");
        case INFO:
            harl.complain("INFO");
        case WARNING:
            harl.complain("WARNING");
        case ERROR:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}
