#ifndef WORLDCLOCK_H
#define WORLDCLOCK_H
#include "Clock.h"


class WorldClock : public Clock {
    public:
    WorldClock(int offset);
    int get_hours() const override;
    int get_minutes() const override;
    std::string get_time();

    private:
    int offset;
};



#endif //WORLDCLOCK_H
