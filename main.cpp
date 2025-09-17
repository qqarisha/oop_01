#include <iostream>
#include <string>
#include "include/time_converter.h"

int main() {
    int hour, minute;
    std::string period;

    std::cout << "Enter time in 12-hour format (e.g., 8 30 am): ";
    std::cin >> hour >> minute >> period;

    if (hour < 1 || hour > 12 || minute < 0 || minute > 59 ||
        (period != "am" && period != "pm")) {
        std::cout << "Error: invalid time format!" << std::endl;
        std::cout << "Hours: 1-12, minutes: 0-59, period: am/pm" << std::endl;
        return 1;
    }

    std::string result = convertTo24Hour(hour, minute, period);
    std::cout << "24-hour format: " << result << std::endl;

    return 0;
}
