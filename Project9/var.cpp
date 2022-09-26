#include "var.h"
#include <iostream>
#include <sstream>
using namespace std;

var::var()
{
	i = 0;
	d = 0;
	ms = nullptr;
}
var::var(int _i) {
	i = _i;
	d = 0;
	ms = nullptr;
}

var::var(double _d) {
	i = 0;
	d = _d;
	ms = nullptr;
}

var::var(const char* _ms)
{
	ms = new char[strlen(_ms) + 1];
	strcpy_s(ms, strlen(_ms) + 1, _ms);
	i = 0;
	d = 0;
}

var::~var()
{
	delete[] ms;
}

void var::Show()
{
	if (ms != nullptr) {
		cout << ms;
	}
	else if (i != 0) {
		cout << i;
	}
	else if (d != 0) {
		cout << d;
	}
}

var var::GetI()const
{
	return i;
}
var var::GetD()const
{
	return d;
}
var var::GetS() const
{
	return ms;
}

void var::SetI(int _i)
{
	i = _i;
}

void var::SetD(double _d)
{
	d = _d;
}

void var::SetS(const char* _ms)
{
	if (ms != nullptr)
	{
		delete[] ms;
	}
	ms = new char[strlen(_ms) + 1];
	strcpy_s(ms, strlen(_ms) + 1, _ms);
}



var& var::operator+=(int a)
{
	if (ms != nullptr) {
		stringstream s;
		s << a;
		string temp_str1 = s.str();
		const char* res_a = (const char*)temp_str1.c_str();
		s.str("");

		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(ms) + 1, ms);
		strcat_s(tempms, buffsize, res_a);
		delete[]ms;
		ms = new char[strlen(tempms) + 1];
		strcpy_s(ms, strlen(tempms) + 1, tempms);
		return *this;
	}
	else if (i != 0) {
		i += a;
		return *this;
	}
	else if (d != 0) {
		d += (double)a;
		return *this;
	}
	return *this;
}
var& var::operator+=(double a)
{
	if (ms != nullptr) {
		stringstream s;
		s << a;
		string temp_str1 = s.str();
		const char* res_a = (const char*)temp_str1.c_str();
		s.str("");

		int buffsize = 1000;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, buffsize, ms);
		strcat_s(tempms, buffsize, res_a);
		delete[] ms;
		char* ms = new char[strlen(tempms) + 1];
		strcpy_s(ms, strlen(tempms) + 1, tempms);
		return *this;
	}
	else if (i != 0) {
		i += (int)a;
		return *this;
	}
	else if (d != 0) {
		d += a;
		return *this;
	}
	return *this;
}
var& var::operator+=(const char* _ms)
{
	if (ms != nullptr) {
		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(ms) + 1, ms);
		delete[] ms;
		strcat_s(tempms, buffsize, _ms);
		char* ms = new char[strlen(tempms) + 1];
		strcpy_s(ms, strlen(tempms) + 1, tempms);
		return *this;
	}
	else if (i != 0) {
		cout << "Error";
		return *this;
	}
	else if (d != 0) {
		cout << "Error";
		return *this;
	}
	return *this;
}

var& var::operator+=(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			delete[] ms;
			strcat_s(tempms, buffsize, obj.ms);
			char* ms = new char[strlen(tempms) + 1];
			strcpy_s(ms, strlen(tempms) + 1, tempms);
			return *this;
		}
		else if (i != 0) {
			cout << "Error";
			return *this;
		}
		else if (d != 0) {
			cout << "Error";
			return *this;
		}
		return *this;
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			stringstream s;
			s << obj.i;
			string temp_str1 = s.str();
			const char* res_a = (const char*)temp_str1.c_str();
			s.str("");

			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			strcat_s(tempms, buffsize, res_a);
			delete[] ms;
			char* ms = new char[strlen(tempms) + 1];
			strcpy_s(ms, strlen(tempms) + 1, tempms);
			return *this;
		}
		else if (i != 0) {
			i += obj.i;
			return *this;
		}
		else if (d != 0) {
			d += (double)obj.i;
			return *this;
		}
		return *this;
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			stringstream s;
			s << obj.d;
			string temp_str1 = s.str();
			const char* res_a = (const char*)temp_str1.c_str();
			s.str("");

			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			strcat_s(tempms, buffsize, res_a);
			delete[] ms;
			char* ms = new char[strlen(tempms) + 1];
			strcpy_s(ms, strlen(tempms) + 1, tempms);
			return *this;
		}
		else if (i != 0) {
			i += (int)obj.d;
			return *this;
		}
		else if (d != 0) {
			d += obj.d;
			return *this;
		}
		return *this;
	}
}

var var::operator+(int a)
{
	if (ms != nullptr) {
		stringstream s;
		s << a;
		string temp_str1 = s.str();
		const char* res_a = (const char*)temp_str1.c_str();
		s.str("");

		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(ms) + 1, ms);
		strcat_s(tempms, buffsize, res_a);
		return tempms;
	}
	else if (i != 0) {

		return i + a;
	}
	else if (d != 0) {

		return 	d + (double)a;
	}
}
var var::operator+(double a)
{
	if (ms != nullptr) {
		stringstream s;
		s << a;
		string temp_str1 = s.str();
		const char* res_a = (const char*)temp_str1.c_str();
		s.str("");

		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(ms) + 1, ms);
		strcat_s(tempms, buffsize, res_a);
		return tempms;
	}
	else if (i != 0) {
		return i += (int)a;
	}
	else if (d != 0) {
		return d += a;
	}
}
var var::operator+(const char* _ms)
{
	if (ms != nullptr) {
		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(ms) + 1, ms);
		strcat_s(tempms, buffsize, _ms);
		return tempms;
	}
	else if (i != 0) {
		cout << "Error";
		return *this;
	}
	else if (d != 0) {
		cout << "Error";
		return *this;
	}
}

var var::operator+(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			strcat_s(tempms, buffsize, obj.ms);
			return tempms;
		}
		else if (i != 0) {
			cout << "Error";
			return *this;
		}
		else if (d != 0) {
			cout << "Error";
			return *this;
		}
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			stringstream s;
			s << obj.i;
			string temp_str1 = s.str();
			const char* res_a = (const char*)temp_str1.c_str();
			s.str("");

			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			strcat_s(tempms, buffsize, res_a);
			return tempms;
		}
		else if (i != 0) {

			return i + obj.i;
		}
		else if (d != 0) {

			return 	d + (double)obj.i;
		}
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			stringstream s;
			s << obj.d;
			string temp_str1 = s.str();
			const char* res_a = (const char*)temp_str1.c_str();
			s.str("");

			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			strcat_s(tempms, buffsize, res_a);
			return tempms;
		}
		else if (i != 0) {
			return i += (int)obj.d;
		}
		else if (d != 0) {
			return d += obj.d;
		}
	}
}

bool var::operator!=(int a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i != a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d != a) {
			return true;
		}
		else return false;
	}
}
bool var::operator!=(double a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i != a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d != a) {
			return true;
		}
		else return false;
	}
}
bool var::operator!=(const char* _ms)
{
	if (ms != nullptr) {
		int string1 = strlen(ms);
		int string2 = strlen(_ms);
		if (string1 != string2) {
			return true;
		}
		else return false;
	}
	else if (i != 0) {
		cout << "Error";
	}
	else if (d != 0) {
		cout << "Error";
	}
}

bool var::operator!=(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int string1 = strlen(ms);
			int string2 = strlen(obj.ms);
			if (string1 != string2) {
				return true;
			}
			else return false;
		}
		else if (i != 0) {
			cout << "Error";
		}
		else if (d != 0) {
			cout << "Error";
		}
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i != obj.i) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d != obj.i) {
				return true;
			}
			else return false;
		}
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i != obj.d) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d != obj.d) {
				return true;
			}
			else return false;
		}
	}
}

bool var::operator==(int a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i == a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d == a) {
			return true;
		}
		else return false;
	}
}
bool var::operator==(double a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i == a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d == a) {
			return true;
		}
		else return false;
	}
}
bool var::operator==(const char* _ms)
{
	if (ms != nullptr) {
		int string1 = strlen(ms);
		int string2 = strlen(_ms);
		if (string1 == string2) {
			return true;
		}
		else return false;
	}
	else if (i != 0) {
		cout << "Error";
	}
	else if (d != 0) {
		cout << "Error";
	}
}

bool var::operator==(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int string1 = strlen(ms);
			int string2 = strlen(obj.ms);
			if (string1 == string2) {
				return true;
			}
			else return false;
		}
		else if (i != 0) {
			cout << "Error";
		}
		else if (d != 0) {
			cout << "Error";
		}
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i == obj.i) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d == obj.i) {
				return true;
			}
			else return false;
		}
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i == obj.d) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d == obj.d) {
				return true;
			}
			else return false;
		}
	}
}

bool var::operator>(int a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i > a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d > a) {
			return true;
		}
		else return false;
	}
}
bool var::operator>(double a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i > a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d > a) {
			return true;
		}
		else return false;
	}
}
bool var::operator>(const char* _ms)
{
	if (ms != nullptr) {
		int string1 = strlen(ms);
		int string2 = strlen(_ms);
		if (string1 > string2) {
			return true;
		}
		else return false;
	}
	else if (i != 0) {
		cout << "Error";
	}
	else if (d != 0) {
		cout << "Error";
	}
}

bool var::operator>(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int string1 = strlen(ms);
			int string2 = strlen(obj.ms);
			if (string1 > string2) {
				return true;
			}
			else return false;
		}
		else if (i != 0) {
			cout << "Error";
		}
		else if (d != 0) {
			cout << "Error";
		}
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i > obj.i) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d > obj.i) {
				return true;
			}
			else return false;
		}
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i > obj.d) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d > obj.d) {
				return true;
			}
			else return false;
		}
	}
}

bool var::operator<(int a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i < a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d < a) {
			return true;
		}
		else return false;
	}
}
bool var::operator<(double a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i < a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d < a) {
			return true;
		}
		else return false;
	}
}
bool var::operator<(const char* _ms)
{
	if (ms != nullptr) {
		int string1 = strlen(ms);
		int string2 = strlen(_ms);
		if (string1 < string2) {
			return true;
		}
		else return false;
	}
	else if (i != 0) {
		cout << "Error";
	}
	else if (d != 0) {
		cout << "Error";
	}
}

bool var::operator<(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int string1 = strlen(ms);
			int string2 = strlen(obj.ms);
			if (string1 < string2) {
				return true;
			}
			else return false;
		}
		else if (i != 0) {
			cout << "Error";
		}
		else if (d != 0) {
			cout << "Error";
		}
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i < obj.i) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d < obj.i) {
				return true;
			}
			else return false;
		}
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i < obj.d) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d < obj.d) {
				return true;
			}
			else return false;
		}
	}
}

bool var::operator>=(int a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i >= a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d >= a) {
			return true;
		}
		else return false;
	}
}
bool var::operator>=(double a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i >= a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d >= a) {
			return true;
		}
		else return false;
	}
}
bool var::operator>=(const char* _ms)
{
	if (ms != nullptr) {
		int string1 = strlen(ms);
		int string2 = strlen(_ms);
		if (string1 >= string2) {
			return true;
		}
		else return false;
	}
	else if (i != 0) {
		cout << "Error";
	}
	else if (d != 0) {
		cout << "Error";
	}
}

bool var::operator>=(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int string1 = strlen(ms);
			int string2 = strlen(obj.ms);
			if (string1 >= string2) {
				return true;
			}
			else return false;
		}
		else if (i != 0) {
			cout << "Error";
		}
		else if (d != 0) {
			cout << "Error";
		}
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i >= obj.i) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d >= obj.i) {
				return true;
			}
			else return false;
		}
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i >= obj.d) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d >= obj.d) {
				return true;
			}
			else return false;
		}
	}
}

bool var::operator<=(int a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i <= a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d <= a) {
			return true;
		}
		else return false;
	}
}
bool var::operator<=(double a)
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		if (i <= a) {
			return true;
		}
		else return false;
	}
	else if (d != 0) {
		if (d <= a) {
			return true;
		}
		else return false;
	}
}
bool var::operator<=(const char* _ms)
{
	if (ms != nullptr) {
		int string1 = strlen(ms);
		int string2 = strlen(_ms);
		if (string1 <= string2) {
			return true;
		}
		else return false;
	}
	else if (i != 0) {
		cout << "Error";
	}
	else if (d != 0) {
		cout << "Error";
	}
}

bool var::operator<=(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int string1 = strlen(ms);
			int string2 = strlen(obj.ms);
			if (string1 <= string2) {
				return true;
			}
			else return false;
		}
		else if (i != 0) {
			cout << "Error";
		}
		else if (d != 0) {
			cout << "Error";
		}
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i <= obj.i) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d <= obj.i) {
				return true;
			}
			else return false;
		}
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
		}
		else if (i != 0) {
			if (i <= obj.d) {
				return true;
			}
			else return false;
		}
		else if (d != 0) {
			if (d <= obj.d) {
				return true;
			}
			else return false;
		}
	}
}

var var::operator-(int a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {

		return i - (int)a;
	}
	else if (d != 0) {

		return 	d - a;
	}
}
var var::operator-(double a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {

		return i - a;
	}
	else if (d != 0) {

		return 	d - (double)a;
	}
}
var var::operator-(const char* _ms)
{
	cout << "Error";
	return *this;
}

var var::operator-(var& obj)
{
	if (obj.ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {

			return i - (int)obj.i;
		}
		else if (d != 0) {

			return 	d - obj.i;
		}
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {

			return i - obj.d;
		}
		else if (d != 0) {

			return 	d - (double)obj.d;
		}
	}
}

var& var::operator-=(int a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		i -= a;
		return *this;
	}
	else if (d != 0) {
		d -= (double)a;
		return *this;
	}
	return *this;
}
var& var::operator-=(double a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		i -= (int)a;
		return *this;
	}
	else if (d != 0) {
		d -= a;
		return *this;
	}
	return *this;
}
var& var::operator-=(const char* _ms)
{
	cout << "Error";
	return *this;
}

var& var::operator-=(var& obj)
{
	if (obj.ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			i -= obj.i;
			return *this;
		}
		else if (d != 0) {
			d -= (double)obj.i;
			return *this;
		}
		return *this;
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			i -= (int)obj.d;
			return *this;
		}
		else if (d != 0) {
			d -= obj.d;
			return *this;
		}
		return *this;
	}
}

var& var::operator/=(int a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		i /= a;
		return *this;
	}
	else if (d != 0) {
		d /= (double)a;
		return *this;
	}
	return *this;
}
var& var::operator/=(double a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		i /= (int)a;
		return *this;
	}
	else if (d != 0) {
		d /= a;
		return *this;
	}
	return *this;
}
var& var::operator/=(const char* _ms)
{
	if (ms != nullptr) {
		int j;
		for (int i = 0; ms[i]; ) {
			for (j = 0; j < strlen(_ms); ++j) {
				if (ms[i] == _ms[j])
					break;
			}
			if (_ms[j]) {
				for (j = i; j < strlen(ms); ++j) {
					ms[j] = ms[j + 1];
				}
			}
			else {
				++i;
			}
		}
		return *this;
	}
	else if (i != 0) {
		cout << "Error";
		return *this;
	}
	else if (d != 0) {
		cout << "Error";
		return *this;
	}
	return *this;
}

var& var::operator/=(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int j;
			for (int i = 0; ms[i]; ) {
				for (j = 0; j < strlen(obj.ms); ++j) {
					if (ms[i] == obj.ms[j])
						break;
				}
				if (obj.ms[j]) {
					for (j = i; j < strlen(ms); ++j) {
						ms[j] = ms[j + 1];
					}
				}
				else {
					++i;
				}
			}
			return *this;
		}
		else if (i != 0) {
			cout << "Error";
			return *this;
		}
		else if (d != 0) {
			cout << "Error";
			return *this;
		}
		return *this;
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			i /= obj.i;
			return *this;
		}
		else if (d != 0) {
			d /= (double)obj.i;
			return *this;
		}
		return *this;
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			i /= (int)obj.d;
			return *this;
		}
		else if (d != 0) {
			d /= obj.d;
			return *this;
		}
		return *this;
	}
}

var var::operator/(int a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		return i / a;
	}
	else if (d != 0) {
		return d / (double)a;
	}
	return *this;
}
var var::operator/(double a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		return i / (int)a;
	}
	else if (d != 0) {
		return d / a;
	}
	return *this;
}
var var::operator/(const char* _ms)
{
	if (ms != nullptr) {
		int j;
		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(ms) + 1, ms);
		for (int i = 0; tempms[i]; ) {
			for (j = 0; j < strlen(_ms); ++j) {
				if (tempms[i] == _ms[j])
					break;
			}
			if (_ms[j]) {
				for (j = i; j < strlen(tempms); ++j) {
					tempms[j] = tempms[j + 1];
				}
			}
			else {
				++i;
			}
		}
		return tempms;
	}
	else if (i != 0) {
		cout << "Error";
		return *this;
	}
	else if (d != 0) {
		cout << "Error";
		return *this;
	}
	return *this;
}

var var::operator/(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int j;
			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			for (int i = 0; tempms[i]; ) {
				for (j = 0; j < strlen(obj.ms); ++j) {
					if (tempms[i] == obj.ms[j])
						break;
				}
				if (obj.ms[j]) {
					for (j = i; j < strlen(tempms); ++j) {
						tempms[j] = tempms[j + 1];
					}
				}
				else {
					++i;
				}
			}
			return tempms;
		}
		else if (i != 0) {
			cout << "Error";
			return *this;
		}
		else if (d != 0) {
			cout << "Error";
			return *this;
		}
		return *this;
	}
	else if (obj.i != 0) {

		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			return i / obj.i;
		}
		else if (d != 0) {
			return d / (double)obj.i;
		}
		return *this;
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			return i / (int)obj.d;
		}
		else if (d != 0) {
			return d / obj.d;
		}
		return *this;
	}
}

var var::operator*(int a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		return i * a;
	}
	else if (d != 0) {
		return d * (double)a;
	}
	return *this;
}
var var::operator*(double a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		return i * (int)a;
	}
	else if (d != 0) {
		return d * a;
	}
	return *this;
}
var var::operator*(const char* _ms)
{
	if (ms != nullptr) {
		int j;
		int buffsize = 1000;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(ms) + 1, ms);
		for (int i = 0; tempms[i]; ) {
			for (j = 0; j < strlen(_ms); ++j) {
				if (tempms[i] == _ms[j])
					break;
			}
			if (_ms[j]) {
				for (j = i; j < strlen(tempms); ++j) {
					tempms[j] = tempms[j + 1];
				}
			}
			else {
				++i;
			}
		}
		char* tempms2 = new char[buffsize];
		for (int i = 0; tempms2[i]; ) {
			for (j = 0; j < strlen(tempms); ++j) {
				if (tempms2[i] == tempms[j])
					break;
			}
			if (tempms[j]) {
				for (j = i; j < strlen(tempms2); ++j) {
					tempms2[j] = tempms2[j + 1];
				}
			}
			else {
				++i;
			}

		}
		return tempms;
	}
	else if (i != 0) {
		cout << "Error";
		return *this;
	}
	else if (d != 0) {
		cout << "Error";
		return *this;
	}
	return *this;
}

var var::operator*(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int j;
			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			for (int i = 0; tempms[i]; ) {
				for (j = 0; j < strlen(obj.ms); ++j) {
					if (tempms[i] == obj.ms[j])
						break;
				}
				if (obj.ms[j]) {
					for (j = i; j < strlen(tempms); ++j) {
						tempms[j] = tempms[j + 1];
					}
				}
				else {
					++i;
				}
			}
			char* tempms2 = new char[buffsize];
			for (int i = 0; tempms2[i]; ) {
				for (j = 0; j < strlen(tempms); ++j) {
					if (tempms2[i] == tempms[j])
						break;
				}
				if (tempms[j]) {
					for (j = i; j < strlen(tempms2); ++j) {
						tempms2[j] = tempms2[j + 1];
					}
				}
				else {
					++i;
				}
			}
			return tempms2;
		}
		else if (i != 0) {
			cout << "Error";
			return *this;
		}
		else if (d != 0) {
			cout << "Error";
			return *this;
		}
		return *this;
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			return i * obj.i;
		}
		else if (d != 0) {
			return d * (double)obj.i;
		}
		return *this;
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			return i * (int)obj.d;
		}
		else if (d != 0) {
			return d * obj.d;
		}
		return *this;
	}
}

var& var::operator*=(int a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		i *= a;
		return *this;
	}
	else if (d != 0) {
		d *= (double)a;
		return *this;
	}
	return *this;
}
var& var::operator*=(double a)
{
	if (ms != nullptr) {
		cout << "Error";
		return *this;
	}
	else if (i != 0) {
		i *= (int)a;
		return *this;
	}
	else if (d != 0) {
		d *= a;
		return *this;
	}
	return *this;
}
var& var::operator*=(const char* _ms)
{
	if (ms != nullptr) {
		int j;
		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(ms) + 1, ms);
		for (int i = 0; tempms[i]; ) {
			for (j = 0; j < strlen(_ms); ++j) {
				if (tempms[i] == _ms[j])
					break;
			}
			if (_ms[j]) {
				for (j = i; j < strlen(tempms); ++j) {
					tempms[j] = tempms[j + 1];
				}
			}
			else {
				++i;
			}
		}
		for (int i = 0; ms[i]; ) {
			for (j = 0; j < strlen(tempms); ++j) {
				if (ms[i] == tempms[j])
					break;
			}
			if (tempms[j]) {
				for (j = i; j < strlen(ms); ++j) {
					ms[j] = ms[j + 1];
				}
			}
			else {
				++i;
			}

		}
		return *this;
	}
	else if (i != 0) {
		cout << "Error";
		return *this;
	}
	else if (d != 0) {
		cout << "Error";
		return *this;
	}
	return *this;
}

var& var::operator*=(var& obj)
{
	if (obj.ms != nullptr) {
		if (ms != nullptr) {
			int j;
			int buffsize = 100;
			char* tempms = new char[buffsize];
			strcpy_s(tempms, strlen(ms) + 1, ms);
			for (int i = 0; tempms[i]; ) {
				for (j = 0; j < strlen(obj.ms); ++j) {
					if (tempms[i] == obj.ms[j])
						break;
				}
				if (obj.ms[j]) {
					for (j = i; j < strlen(tempms); ++j) {
						tempms[j] = tempms[j + 1];
					}
				}
				else {
					++i;
				}
			}
			for (int i = 0; ms[i]; ) {
				for (j = 0; j < strlen(tempms); ++j) {
					if (ms[i] == tempms[j])
						break;
				}
				if (tempms[j]) {
					for (j = i; j < strlen(ms); ++j) {
						ms[j] = ms[j + 1];
					}
				}
				else {
					++i;
				}
			}
			return *this;
		}
		else if (i != 0) {
			cout << "Error";
			return *this;
		}
		else if (d != 0) {
			cout << "Error";
			return *this;
		}
		return *this;
	}
	else if (obj.i != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			i *= obj.i;
			return *this;
		}
		else if (d != 0) {
			d *= (double)obj.i;
			return *this;
		}
		return *this;
	}
	else if (obj.d != 0) {
		if (ms != nullptr) {
			cout << "Error";
			return *this;
		}
		else if (i != 0) {
			i *= (int)obj.d;
			return *this;
		}
		else if (d != 0) {
			d *= obj.d;
			return *this;
		}
		return *this;
	}
}

var::operator int()
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		return i;
	}
	else if (d != 0) {
		cout << "Error";
	}
}
var::operator double()
{
	if (ms != nullptr) {
		cout << "Error";
	}
	else if (i != 0) {
		cout << "Error";
	}
	else if (d != 0) {
		return d;
	}
}
var::operator char* ()
{
	if (ms != nullptr) {
		return ms;
	}
	else if (i != 0) {
		cout << "Error";
	}
	else if (d != 0) {
		cout << "Error";
	}
}
