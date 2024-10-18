#pragma once
#include <iostream>
using namespace std;
class TRectangle
{
private:

	int m_a;
	int m_b;

public:

	//Конструктор без параметрів
	TRectangle() : m_a(0), m_b(0) {}

	//Конструктор з параметрами
	TRectangle(int a, int b) : m_a(a), m_b(b) {}

	//Конструктор для копіювання
	TRectangle(const TRectangle& other) : m_a(other.m_a), m_b(other.m_b) {}

	//Функція для введення даних
	void input() {
		cout << "Input a: "; cin >> m_a;
		cout << endl;
		cout << "Input b: "; cin >> m_b;
		cout << endl;
	}

	//Функція для виведення даних
	void output() {
		cout << "Your a: " << m_a << endl;
		cout << "Your b: " << m_b << endl;
	}

	//Функція для визначення площі прямокутника
	int getArea() const {
		return m_a * m_b;
	}

	//Функція для визначення периметра прямокутника
	int getPerimeter() const {
		return 2 * (m_a + m_b);
	}


	//Методи для порівняння двох прямокутників, еровантаження оператора==
	bool operator==(const TRectangle& other) const {
		return ((this->m_a == other.m_a) && (this->m_b == other.m_b));
	}


	//Перовантаження оператора !=
	bool operator!=(const TRectangle& other) const {
		return !(*this==other);
	}


	//Перовантаження оператора+
	TRectangle operator+(const TRectangle& other) const {
		return TRectangle(m_a + other.m_a, m_b + other.m_b);
	}


	//Перовантаження оператора-
	TRectangle operator-(const TRectangle& other) const {
		if (m_a - other.m_a >= 0 && m_b - other.m_b >= 0) {
			return TRectangle(m_a - other.m_a, m_b - other.m_b);
		}
		else
			return TRectangle();
	}

	//Перовантаження оператора*
	TRectangle operator*(unsigned int num) const {
		return TRectangle(m_a * num, m_b * num);
	}
};



