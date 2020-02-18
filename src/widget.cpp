#include "widget.h"
#include <iostream>

int Widget::foo() {
	return 1234;
}

void Widget::bla(int n) {
	std::cout << "Called Widget::bla with " << n << '\n';
}
