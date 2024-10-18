#pragma once
#include <iostream>
using namespace std;
class TRectangle
{
private:

	int m_a;
	int m_b;

public:

	//����������� ��� ���������
	TRectangle() : m_a(0), m_b(0) {}

	//����������� � �����������
	TRectangle(int a, int b) : m_a(a), m_b(b) {}

	//����������� ��� ���������
	TRectangle(const TRectangle& other) : m_a(other.m_a), m_b(other.m_b) {}

	//������� ��� �������� �����
	void input() {
		cout << "Input a: "; cin >> m_a;
		cout << endl;
		cout << "Input b: "; cin >> m_b;
		cout << endl;
	}

	//������� ��� ��������� �����
	void output() {
		cout << "Your a: " << m_a << endl;
		cout << "Your b: " << m_b << endl;
	}

	//������� ��� ���������� ����� ������������
	int getArea() const {
		return m_a * m_b;
	}

	//������� ��� ���������� ��������� ������������
	int getPerimeter() const {
		return 2 * (m_a + m_b);
	}


	//������ ��� ��������� ���� ������������, ������������� ���������==
	bool operator==(const TRectangle& other) const {
		return ((this->m_a == other.m_a) && (this->m_b == other.m_b));
	}


	//�������������� ��������� !=
	bool operator!=(const TRectangle& other) const {
		return !(*this==other);
	}


	//�������������� ���������+
	TRectangle operator+(const TRectangle& other) const {
		return TRectangle(m_a + other.m_a, m_b + other.m_b);
	}


	//�������������� ���������-
	TRectangle operator-(const TRectangle& other) const {
		if (m_a - other.m_a >= 0 && m_b - other.m_b >= 0) {
			return TRectangle(m_a - other.m_a, m_b - other.m_b);
		}
		else
			return TRectangle();
	}

	//�������������� ���������*
	TRectangle operator*(unsigned int num) const {
		return TRectangle(m_a * num, m_b * num);
	}
};



