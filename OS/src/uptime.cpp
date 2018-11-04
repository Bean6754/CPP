#include <iostream>
#include <fstream>

int main(void)
{
	/*
		ifstream = read-only.
		ofstream = write-only.
		fstream = read+write.
	*/

	std::ifstream uptimef;
	uptimef.open("/proc/uptime");

	if (uptimef.is_open())
	{
		// Continue.
	}
	else
	{
		std::cout << "Error 1: Cannot access '/proc/uptime'." << std::endl; 
		return 1; // Exit with failure.
	}

	// Get raw uptime data, is in seconds.
	float uptime_raw;
	int uptime_seconds;
	uptimef >> uptime_raw;
	uptimef >> uptime_seconds;

	uptimef.close();

	int uptime_minutes, uptime_hours, uptime_days;

	// Maths. From GNU the coreutils, src/uptime.c
	uptime_days = uptime_raw / 86400;
	uptime_hours = (uptime_raw - (uptime_days * 86400)) / 3600;
	uptime_minutes = (uptime_raw - (uptime_days * 86400) - (uptime_hours * 3600)) / 60;

	std::cout << "Up: " << uptime_days << " days, " << uptime_hours << " hours and " << uptime_minutes << " minutes." << std::endl;

	return 0;
}
