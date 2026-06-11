# pragma once
#include <vector>


std::vector<unsigned int> normal_year_month_days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
std::vector<unsigned int> leap_year_month_days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

 int dayOfYear(int month, int dayOfMonth, int year);
