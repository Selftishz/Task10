#include "Func.h"
int main() {
	setlocale(0, "");
	Student student("Vasyan", "Vasya", "Vasilevich", 2, 5);
	Boss boss("Lehin", "Leha", "Lehovich", 1, 23);
	student.print();
	boss.print();
}