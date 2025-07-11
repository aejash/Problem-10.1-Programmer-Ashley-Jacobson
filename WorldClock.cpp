

#include "WorldClock.h"
#include <string>

using namespace std;

WorldClock::WorldClock(int offset)
{
    this->offset = offset;
}
int WorldClock::get_hours() const
{
    int result = Clock::get_hours() + offset;
    if(result > 12)
    {
        result = 12 - result;
        if(result< 0)
        {
            result = result + -2*result;
        }
    }

    return result;
}
int WorldClock::get_minutes() const
{
    return Clock::get_minutes();
}