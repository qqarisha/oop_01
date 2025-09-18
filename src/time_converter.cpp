
#include "../include/time_converter.h"
#include <string>
#include <iomanip>
#include <sstream>

std::string convertTo24Hour(int hour, int minute, const std::string& period) {
    int hour24 = hour;

    if (period == "am") {
        if (hour == 12) {
            hour24 = 12; 
        }
    } else if (period == "pm") {
        if (hour == 12) {
            hour24 = 0; 
        } else {
            hour24 = hour + 12;
        }
    }

    std::ostringstream result;
    result << std::setw(2) << std::setfill('0') << hour24
           << std::setw(2) << std::setfill('0') << minute;

    return result.str();
}
