cmake_minimum_required(VERSION 3.20)
project(Primary_Stage C)

set(CMAKE_C_STANDARD 99)

add_executable(Primary_Stage main.c)

add_executable(c06_str_functions Ch04_Array_String/c06_str_functions.c)
add_executable(01_The_nature_of_Pointers Ch05_Pointer/01_The_nature_of_Pointers.c)
add_executable(day07_01 OJ/c04_02.c)
add_executable(c04_03 OJ/c04_03_fail.c)
add_executable(c04_03_ac OJ/c04_03_ac.c)
add_executable(c05_01 OJ/c05_01.c)
add_executable(c05_02 "OJ/c05_02_String inversion.c")
add_executable(02_Pointer_passed Ch05_Pointer/02_Pointer_passed.c)
add_executable(03_pointer_offset Ch05_Pointer/03_pointer_offset.c)
add_executable(04_Pointer_auto_increment Ch05_Pointer/04_Pointer_auto_increment.c)
add_executable(05_Pointer_One_dimension-array Ch05_Pointer/05_Pointer_One-dimension-array.c)
add_executable(06_Pointer_Dynamic-memory-application Ch05_Pointer/06_Pointer_Dynamic-memory-application.c)