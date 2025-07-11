

#ifndef CLOCK_H
#define CLOCK_H

#include <ctime>
#include <string>


class Clock {
    public:
    virtual int get_hours() const;
    virtual int get_minutes() const;
    std::string get_time();

    private:
        time_t current_time = time(0);
        tm* local_time = localtime(&current_time);
        int hours = local_time->tm_hour;
        int minutes = local_time->tm_min;
};



#endif //CLOCK_H
