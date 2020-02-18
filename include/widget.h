#pragma once

#include "iwidget.h"

class Widget : public IWidget {
public:
	virtual int foo() override;
	virtual void bla(int) override;
};
