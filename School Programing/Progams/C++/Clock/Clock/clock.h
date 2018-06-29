#pragma once
// Program by D.S. Malik

class clock
{
public:
	void setTime(int hours, int minutes, int seconds);

	void getTime(int& hours, int& minutes, int& seconds) const;

	void printTime() const;

	void incrementSeconds();
	//Function to increment the time by one second.

	//   If the before-increment time is 23:59:59, the 
	//   time is reset to 00:00:00.

	void incrementMinutes();
	//Function to increment the time by one minute.

	//   If the before-increment time is 23:59:53,
	//   the time is reset to 00:00:53.

	void incrementHours();
	//Function to increment the time by one hour.

	//   If the before-increment time is 23:45:53, the 
	//   time is reset to 00:45:53.

	bool equalTime(const clock& otherClock) const;

	clock(int hours, int minutes, int seconds);

	clock();

private:
	int hr;
	int min;
	int sec;
};
