Problem 10.1 - Chapter 10, Project B
---------------------------------------------
Implement a class Clock whose get_hours and get_minutes member functions return the
current time at your location. To get the current time, use the following code,
which requires that you include the <ctime> header:

time_t current_time = time(0);
tm* local_time = localtime(&current_time);
int hours = local_time->tm_hour;
int minutes = local_time->tm_min;
Also provide a get_time member function that returns a string with the hours and minutes
by calling the get_hours and get_minutes functions.
Provide a derived class WorldClock whose constructor accepts a time offset.
For example, if you live in California, a new WorldClock(3) should show the time in New York,
three time zones ahead. Which member functions did you override? (
You should not override get_time.)
---------------------------------------------
Programmer - Ashley Jacobson
Tester - Audrey Tapia
---------------------------------------------
Group Project B 
Members 
Ashley Jacobson,
Giannfranco Brance, 
Audrey Tapia,
Heily Cabrera Guerrero
