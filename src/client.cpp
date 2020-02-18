#include "client.h"
#include "iwidget.h"

Client::Client(IWidget& widget)
	: m_widget{widget}
{
}

void Client::do_something() {
	int i = m_widget.foo();
	m_widget.bla(i);
}
