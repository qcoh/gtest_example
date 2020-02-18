#pragma once

class IWidget;

class Client {
public:
	explicit Client(IWidget&);

	void do_something();
private:
	IWidget& m_widget;
};
