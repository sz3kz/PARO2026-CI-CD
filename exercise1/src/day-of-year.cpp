#include "day-of-year.hpp"
#include <vector>



int dayOfYear(int month, int dayOfMonth, int year) {
    bool is_divisible_by_400 = (year % 400  == 0);
    bool is_divisible_by_4 = (year % 4 == 0);
    bool is_divisible_by_100 = (year % 100 == 0);

    std::vector<unsigned int> year_month_days;

    if (is_divisible_by_400 || (is_divisible_by_4 && ! is_divisible_by_100) ) {
        // leap year
        year_month_days = leap_year_month_days;
    }
    else {
        // normal
         year_month_days = normal_year_month_days;
    }

    for ( int i = month - 1 ; i != 0; --i){
        dayOfMonth += year_month_days.at(i - 1);
    }

    return dayOfMonth;

}

