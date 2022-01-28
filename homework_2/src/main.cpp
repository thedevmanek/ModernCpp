#define FMT_HEADER_ONLY
#include <fmt/core.h>

#include <random>

#include "cstdlib"
#include "iostream"

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 99);
    int random_number = dis(gen);
    while (true) {
        int choice;
        fmt::print("Please enter a number between 0 to 99\n");
        std::cin.clear();
        std::cin.sync();
        std::cin >> choice;
        if (std::cin.good()) {
            if (0 < choice and choice < 99) {
                if (choice == random_number) {
                    fmt::print("Yes the number was \n {}\n", random_number);
                    exit(EXIT_SUCCESS);
                } else if (choice < random_number) {
                    fmt::print("The number is larger\n");
                } else if (choice > random_number) {
                    fmt::print("The number is smaller\n");
                }

            } else {
                fmt::print(stderr,
                           "[WARNING] : Number must be between 0 and 99\n");
            }

        } else {
            fmt::print(stderr, "Error encountered, exiting...\n");
            exit(EXIT_FAILURE);
        }
    }
}
