#pragma once
class Time {
private:
	ushort _hours;
	ushort _minutes;
	ushort _seconds;
public:
	Time()
	{
		_hours = 0;
		_minutes = 0;
		_seconds = 0;

	}

	Time(ushort hour, ushort min, ushort sec)
	{
		setHour(hour);
		setMin(min);
		setSec(sec);
	}
	///Setter
	void setHour(ushort hour);
	void setMin(ushort min);
	void setSec(ushort sec);

	///Operator overloading
	Time& operator++() {
		if (_hours == 23) _hours = 0;
		else _hours += 1;
		return *this;
	}
	Time& operator++(int) {
		Time temp = *this;
		if (_hours == 23) _hours = 0;
		else _hours += 1;
		return temp;
	}
	Time operator--() {
		if (_hours ==0) _hours = 23;
		else _hours -= 1;
		return *this;
	}
	Time& operator--(int) {
		Time temp = *this;
		if (_hours == 0) _hours = 23;
		else _hours -= 1;
		return temp;
	}

	bool operator>(const Time& other) {
		if (_hours * 3600 + _minutes * 60 + _seconds > other._hours * 3600 + other._minutes * 60 + other._seconds)
			return true;
		return false;
	}

	bool operator<(const Time& other) {
		if (_hours * 3600 + _minutes * 60 + _seconds < other._hours * 3600 + other._minutes * 60 + other._seconds)
			return true;
		return false;
	}

	bool operator<=(const Time& other) {
		if (_hours * 3600 + _minutes * 60 + _seconds <= other._hours * 3600 + other._minutes * 60 + other._seconds)
			return true;
		return false;
	}

	bool operator>=(const Time& other) {
		if (_hours * 3600 + _minutes * 60 + _seconds >= other._hours * 3600 + other._minutes * 60 + other._seconds)
			return true;
		return false;
	}
	bool operator==(const Time& other) {
		if (_hours * 3600 + _minutes * 60 + _seconds == other._hours * 3600 + other._minutes * 60 + other._seconds)
			return true;
		return false;
	}

	void operator()() {
		cout << "Time: ";
		cout << _hours << ":" << _minutes << ":" << _seconds << endl;

	}

	bool operator!() const {
		if (_hours ==0&& _minutes == 0 &&_seconds == 0)
			return true;
		return false;
	}
};


////Setter
void Time::setHour(ushort hour) {
	if (hour >= 0 || hour < 24)
		_hours = hour;
	else assert(!"hour >= 0 || hour < 24");
}
void Time::setMin(ushort min) {
	if (min >= 0 || min < 60)
		_minutes = min;
	else assert(!"min >= 0 || min < 60");
}
void Time::setSec(ushort sec) {
	if (sec >= 0 || sec < 60)
		_seconds = sec;
	else assert(!"sec >= 0 || sec < 60");
}
