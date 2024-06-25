#include <cstdlib>
#include <iostream>

int main() {
    std::string choice;

    std::cout << "This program will shut down your computer.\n";
    std::cout << "Are you sure you want to proceed? (yes/no): ";
    std::cin >> choice;

    if (choice == "yes") {
#if defined(_WIN32) || defined(_WIN64)
        // Shutdown command for Windows
        std::cout << "Shutting down Windows..." << std::endl;
        system("shutdown /s /t 0");
#elif defined(__linux__)
        // Shutdown command for Linux
        std::cout << "Shutting down Linux..." << std::endl;
        system("shutdown -h now");
#else
        std::cerr << "Unsupported operating system." << std::endl;
#endif
    }
    else {
        std::cout << "Shutdown canceled." << std::endl;
    }

    return 0;
}
