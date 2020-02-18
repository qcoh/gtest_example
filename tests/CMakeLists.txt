set(SOURCES
	test_client.cpp
	test_main.cpp
)

add_executable(gtest_example_test
	${SOURCES}
)

target_link_libraries(gtest_example_test
	PRIVATE
	gtest
	gmock
	gtest_example_lib
)

add_test(NAME gtest_example_test COMMAND gtest_example_test)
