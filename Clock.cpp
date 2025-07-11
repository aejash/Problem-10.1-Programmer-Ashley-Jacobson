

#include "Clock.h"

using namespace std;

int Clock::get_hours() const
{
    return hours;
}
int Clock::get_minutes() const
{
    return minutes;
}
string Clock::get_time()
{
    string result;
    result += to_string(get_hours()) + ":";
    if(get_minutes() > 9)
    {
        result += to_string(get_minutes());
    }else
    {
        result += "0" + to_string(get_minutes());
    }

    return result;
}