#include<iostream>
#include "var.h"
#include <sstream>
using namespace std;

bool operator!=(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() != a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() != a) {
			return true;
		}
		else return false;
	}
}
bool operator!=(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() != a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() != a) {
			return true;
		}
		else return false;
	}
}
bool operator!=(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int string1 = strlen(obj.GetS());
		int string2 = strlen(_ms);
		if (string1 != string2) {
			return true;
		}
		else return false;
	}
	else if (obj.GetI() != 0) {
		cout << "Error";
	}
	else if (obj.GetD() != 0) {
		cout << "Error";
	}
}

bool operator==(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() == a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() == a) {
			return true;
		}
		else return false;
	}
}
bool operator==(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() == a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() == a) {
			return true;
		}
		else return false;
	}
}
bool operator==(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int string1 = strlen(obj.GetS());
		int string2 = strlen(_ms);
		if (string1 == string2) {
			return true;
		}
		else return false;
	}
	else if (obj.GetI() != 0) {
		cout << "Error";
	}
	else if (obj.GetD() != 0) {
		cout << "Error";
	}
}

bool operator>(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() < a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() < a) {
			return true;
		}
		else return false;
	}
}
bool operator>(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() < a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() < a) {
			return true;
		}
		else return false;
	}
}
bool operator>(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int string1 = strlen(obj.GetS());
		int string2 = strlen(_ms);
		if (string1 < string2) {
			return true;
		}
		else return false;
	}
	else {

		cout << "Error";
	}
}

bool operator<(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() > a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() > a) {
			return true;
		}
		else return false;
	}
}
bool operator<(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() > a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() > a) {
			return true;
		}
		else return false;
	}
}
bool operator<(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int string1 = strlen(obj.GetS());
		int string2 = strlen(_ms);
		if (string1 > string2) {
			return true;
		}
		else return false;
	}
	else {

		cout << "Error";
	}
}

bool operator<=(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() >= a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() >= a) {
			return true;
		}
		else return false;
	}
}
bool operator<=(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() >= a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() >= a) {
			return true;
		}
		else return false;
	}
}
bool operator<=(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int string1 = strlen(obj.GetS());
		int string2 = strlen(_ms);
		if (string1 >= string2) {
			return true;
		}
		else return false;
	}
	else {

		cout << "Error";
	}
}

bool operator>=(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() <= a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() <= a) {
			return true;
		}
		else return false;
	}
}
bool operator>=(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
	}
	else if (obj.GetI() != 0) {
		if (obj.GetI() <= a) {
			return true;
		}
		else return false;
	}
	else if (obj.GetD() != 0) {
		if (obj.GetD() <= a) {
			return true;
		}
		else return false;
	}
}
bool operator>=(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int string1 = strlen(obj.GetS());
		int string2 = strlen(_ms);
		if (string1 <= string2) {
			return true;
		}
		else return false;
	}
	else {

		cout << "Error";
	}
}

var& operator+=(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		stringstream s;
		s << a;
		string temp_str1 = s.str();
		const char* res_a = (const char*)temp_str1.c_str();
		s.str("");

		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(obj.GetS()) + 1, obj.GetS());
		strcat_s(tempms, buffsize, res_a);
		delete[]obj.GetS();
		obj.SetS(new char[strlen(tempms) + 1]);
		strcpy_s(obj.GetS(), strlen(tempms) + 1, tempms);
		return obj;
	}
	else if (obj.GetI() != 0) {
		obj.GetI() += a;
		return obj;
	}
	else if (obj.GetD() != 0) {
		obj.SetD(obj.GetD() + (double)a);
		return obj;
	}
	return obj;
}
var& operator+=(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		stringstream s;
		s << a;
		string temp_str1 = s.str();
		const char* res_a = (const char*)temp_str1.c_str();
		s.str("");

		int buffsize = 1000;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, buffsize, obj.GetS());
		strcat_s(tempms, buffsize, res_a);
		delete[] obj.GetS();
		obj.SetS(new char[strlen(tempms) + 1]);
		strcpy_s(obj.GetS(), strlen(tempms) + 1, tempms);
		return obj;
	}
	else if (obj.GetI() != 0) {
		obj.GetI() += (int)a;
		return obj;
	}
	else if (obj.GetD() != 0) {
		obj.GetD() += a;
		return obj;
	}
	return obj;
}
var& operator+=(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(obj.GetS()) + 1, obj.GetS());
		delete[] obj.GetS();
		strcat_s(tempms, buffsize, _ms);
		obj.SetS(new char[strlen(tempms) + 1]);
		strcpy_s(obj.GetS(), strlen(tempms) + 1, tempms);
		return obj;
	}
	else if (obj.GetI() != 0) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetD() != 0) {
		cout << "Error";
		return obj;
	}
	return obj;
}

var operator+(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		stringstream s;
		s << a;
		string temp_str1 = s.str();
		const char* res_a = (const char*)temp_str1.c_str();
		s.str("");

		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(obj.GetS()) + 1, obj.GetS());
		strcat_s(tempms, buffsize, res_a);
		return tempms;
	}
	else if (obj.GetI() != 0) {

		return obj.GetI() + a;
	}
	else if (obj.GetD() != 0) {

		return 	obj.GetD() + (double)a;
	}
}
var operator+(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		stringstream s;
		s << a;
		string temp_str1 = s.str();
		const char* res_a = (const char*)temp_str1.c_str();
		s.str("");

		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(obj.GetS()) + 1, obj.GetS());
		strcat_s(tempms, buffsize, res_a);
		return tempms;
	}
	else if (obj.GetI() != 0) {
		return obj.GetI() += (int)a;
	}
	else if (obj.GetD() != 0) {
		return obj.GetD() += a;
	}
}
var operator+(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(obj.GetS()) + 1, obj.GetS());
		strcat_s(tempms, buffsize, _ms);
		return tempms;
	}
	else if (obj.GetI() != 0) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetD() != 0) {
		cout << "Error";
		return obj;
	}
}

var operator-(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {

		return obj.GetI() - (int)a;
	}
	else if (obj.GetD() != 0) {

		return 	obj.GetD() - a;
	}
}
var operator-(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {

		return obj.GetI() - a;
	}
	else if (obj.GetD() != 0) {

		return 	obj.GetD() - (double)a;
	}
}
var operator-(const char* _ms, var& obj)
{
	cout << "Error";
	return obj;
}

var& operator-=(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		obj.GetI() -= a;
		return obj;
	}
	else if (obj.GetD() != 0) {
		obj.GetD() -= (double)a;
		return obj;
	}
	return obj;
}
var& operator-=(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		obj.GetI() -= (int)a;
		return obj;
	}
	else if (obj.GetD() != 0) {
		obj.GetD() -= a;
		return obj;
	}
	return obj;
}
var& operator-=(const char* _ms, var& obj)
{
	cout << "Error";
	return obj;
}

var& operator/=(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		obj.GetI() /= a;
		return obj;
	}
	else if (obj.GetD() != 0) {
		obj.GetD() /= (double)a;
		return obj;
	}
	return obj;
}
var& operator/=(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		obj.GetI() /= (int)a;
		return obj;
	}
	else if (obj.GetD() != 0) {
		obj.GetD() /= a;
		return obj;
	}
	return obj;
}
var& operator/=(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int j;
		for (int i = 0; obj.GetS()[i]; ) {
			for (j = 0; j < strlen(_ms); ++j) {
				if (obj.GetS()[i] == _ms[j])
					break;
			}
			if (_ms[j]) {
				for (j = i; j < strlen(obj.GetS()); ++j) {
					obj.GetS()[j] = obj.GetS()[j + 1];
				}
			}
			else {
				++i;
			}
		}
		return obj;
	}
	else if (obj.GetI() != 0) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetD() != 0) {
		cout << "Error";
		return obj;
	}
	return obj;
}

var operator/(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		return obj.GetI() / a;
	}
	else if (obj.GetD() != 0) {
		return obj.GetD() / (double)a;
	}
	return obj;
}
var operator/(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		return obj.GetI() / (int)a;
	}
	else if (obj.GetD() != 0) {
		return obj.GetD() / a;
	}
	return obj;
}
var operator/(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int j;
		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(obj.GetS()) + 1, obj.GetS());
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
	else if (obj.GetI() != 0) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetD() != 0) {
		cout << "Error";
		return obj;
	}
	return obj;
}

var operator*(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		return obj.GetI() * a;
	}
	else if (obj.GetD() != 0) {
		return obj.GetD() * (double)a;
	}
	return obj;
}
var operator*(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		return obj.GetI() * (int)a;
	}
	else if (obj.GetD() != 0) {
		return obj.GetD() * a;
	}
	return obj;
}
var operator*(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int j;
		int buffsize = 1000;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(obj.GetS()) + 1, obj.GetS());
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
	else if (obj.GetI() != 0) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetD() != 0) {
		cout << "Error";
		return obj;
	}
	return obj;
}

var& operator*=(int a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		obj.SetI(obj.GetI() * a);
		return obj;
	}
	else if (obj.GetD() != 0) {
		obj.SetD(obj.GetD() * (double)a);
		return obj;
	}
	return obj;
}
var& operator*=(double a, var& obj)
{
	if (obj.GetS() != nullptr) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetI() != 0) {
		obj.GetI() *= (int)a;
		return obj;
	}
	else if (obj.GetD() != 0) {
		obj.SetD(obj.GetD() * a);
		return obj;
	}
	return obj;
}
var& operator*=(const char* _ms, var& obj)
{
	if (obj.GetS() != nullptr) {
		int j;
		int buffsize = 100;
		char* tempms = new char[buffsize];
		strcpy_s(tempms, strlen(obj.GetS()) + 1, obj.GetS());
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
		for (int i = 0; obj.GetS()[i]; ) {
			for (j = 0; j < strlen(tempms); ++j) {
				if (obj.GetS()[i] == tempms[j])
					break;
			}
			if (tempms[j]) {
				for (j = i; j < strlen(obj.GetS()); ++j) {
					obj.GetS()[j] = obj.GetS()[j + 1];
				}
			}
			else {
				++i;
			}

		}
		return obj;
	}
	else if (obj.GetI() != 0) {
		cout << "Error";
		return obj;
	}
	else if (obj.GetD() != 0) {
		cout << "Error";
		return obj;
	}
	return obj;
}

int main()
{
	var v1("Microsoft");
	v1 += 12;
	v1.Show();
	var v2("Microsoft");
	v2 /= "Windows";
	cout << endl;
	v2.Show();
	var a("Microsoft");
	var b = ("Windows"), c;
	a *= b;
	cout << endl;
	a.Show();
}