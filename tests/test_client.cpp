#include <iostream>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "iwidget.h"
#include "client.h"

// basic test

TEST(example, example) {
	int i = 0;
	ASSERT_EQ(i, 0);
}

// fixture

class Fixture : public testing::Test {
public:
	virtual void SetUp() {
		std::cout << "Called before every test\n";
	}

	virtual void TearDown() {
		std::cout << "Called after every test\n";
	}
};

TEST_F(Fixture, test_0) {
	std::cout << "Test 0\n";
}

TEST_F(Fixture, test_1) {
	std::cout << "Test 1\n";
}

// mocks

class MockWidget : public IWidget {
public:
	MOCK_METHOD0(foo, int());
	MOCK_METHOD1(bla, void(int));
};

TEST(mock_example, mock_example_0) {
	MockWidget widget;
	Client client(widget);

	EXPECT_CALL(widget, foo()).Times(1).WillOnce(testing::Return(1234));
	EXPECT_CALL(widget, bla(testing::_)).Times(1);

	// uncomment this:
	// client.do_something();
}
