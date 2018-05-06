#include<iostream>
#include<string>
#include<conio.h>
#include"header.h"
#include<deque>
#include<vector>
using namespace std;
class snake {
public:
	int tail_x{ 20 }, tail_y{ 20 }, head_x{ 20 }, head_y{ 23 };
	deque<int> x{ 20,20,20,20 }, y{ 20,21,22,23 };
};
int main() {
	void gotoxy(const int&, const int&);
	int m, n;
	snake snake1;
	vector<int> arr1{ 20,21,22,23 };
	for (auto c : arr1) {
		gotoxy(20, c);
		cout << "*";
	}
	while (snake1.x.back() && snake1.y.back()) {
		switch (_getch()) {
		case 'w':
			m = -1, n = 0;
			break;
		case 's':
			m = 1, n = 0;
			break;
		case 'a':
			m = 0, n = -1;
			break;
		case 'd':
			m = 0, n = 1;
			break;
		default:
			m = 0, n = 1;
			break;
		}
		gotoxy(snake1.x.front(), snake1.y.front());
		cout << " ";

		snake1.x.pop_front();
		snake1.y.pop_front();
		snake1.x.push_back(snake1.x.back() + m);
		snake1.y.push_back(snake1.y.back() + n);
		gotoxy(snake1.x.back(), snake1.y.back());
		cout << "*";
	}

	_getch();
	_getch();
};