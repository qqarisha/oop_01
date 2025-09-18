#include "../include/time_converter.h"
#include <string>
#include <iomanip>
#include <sstream>

std::string convertTo24Hour(int hour, int minute, const std::string& period) {
    int hour24 = hour;

    if (period == "am") {
        if (hour == 12) {
<<<<<<< HEAD
            hour24 = 12; 
        }
    } else if (period == "pm") {
        if (hour == 12) {
            hour24 = 0; 
=======
            hour24 = 12;
        }
    } else if (period == "pm") {
        if (hour == 12) {
            hour24 = 0;
>>>>>>> 5abc5360327d574eeab054a00a67c87593984ddf
        } else {
            hour24 = hour + 12;
        }
    }
<<<<<<< HEAD

    std::ostringstream result;
=======
    
    std::stringstream result;
>>>>>>> 5abc5360327d574eeab054a00a67c87593984ddf
    result << std::setw(2) << std::setfill('0') << hour24
           << std::setw(2) << std::setfill('0') << minute;

    return result.str();
}
