cmake_minimum_required(VERSION 3.16.3)	 

project(calc VERSION 1.0.0)			

add_library(
	calculator
	STATIC 
	calculator.cpp
)

add_executable(
	main 
	main.cpp
)	

target_link_libraries(main calculator)

