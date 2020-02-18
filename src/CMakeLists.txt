set(SOURCES
	widget.cpp
	client.cpp
)

add_library(gtest_example_lib
	STATIC
	${SOURCES}
)

target_include_directories(gtest_example_lib
	PUBLIC
	${CMAKE_SOURCE_DIR}/include	
)

target_compile_features(gtest_example_lib
	PUBLIC
	cxx_std_17
)
