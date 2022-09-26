#pragma once
class var
{
	int i;
	double d;
	char* ms;
public:
	var();
	var(int _i);
	var(double _d);
	var(const char* _ms);
	~var();
	void Show();
	var GetI() const;
	var GetD() const;
	var GetS()const;

	void SetI(int _i);
	void SetD(double _d);
	void SetS(const char* _ms);

	var& operator+=(int a);
	var& operator+=(double a);
	var& operator+=(const char* _ms);
	var& operator+=(var& obj);

	var operator+(int a);
	var operator+(double a);
	var operator+(const char* _ms);
	var operator+(var& obj);

	bool operator!=(int a);
	bool operator!=(double a);
	bool operator!=(const char* _ms);
	bool operator!=(var& obj);

	bool operator==(int a);
	bool operator==(double a);
	bool operator==(const char* _ms);
	bool operator==(var& obj);

	bool operator>(int a);
	bool operator>(double a);
	bool operator>(const char* _ms);
	bool operator>(var& obj);

	bool operator<(int a);
	bool operator<(double a);
	bool operator<(const char* _ms);
	bool operator<(var& obj);

	bool operator>=(int a);
	bool operator>=(double a);
	bool operator>=(const char* _ms);
	bool operator>=(var& obj);

	bool operator<=(int a);
	bool operator<=(double a);
	bool operator<=(const char* _ms);
	bool operator<=(var& obj);

	var operator-(int a);
	var operator-(double a);
	var operator-(const char* _ms);
	var operator-(var& obj);


	var& operator-=(int a);
	var& operator-=(double a);
	var& operator-=(const char* _ms);
	var& operator-=(var& obj);

	var& operator/=(int a);
	var& operator/=(double a);
	var& operator/=(const char* _ms);
	var& operator/=(var& obj);

	var operator/(int a);
	var operator/(double a);
	var operator/(const char* _ms);
	var operator/(var& obj);


	var operator*(int a);
	var operator*(double a);
	var operator*(const char* _ms);
	var operator*(var& obj);

	var& operator*=(int a);
	var& operator*=(double a);
	var& operator*=(const char* _ms);
	var& operator*=(var& obj);

	operator int();
	operator double();
	operator char* ();
};

