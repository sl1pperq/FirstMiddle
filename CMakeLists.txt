cmake_minimum_required(VERSION 3.26)
project(FirstMiddle)

set(CMAKE_CXX_STANDARD 17)

add_executable(FirstMiddle main.cpp
        cpp_files/1_itc_num_print.cpp
        cpp_files/middle.h
        cpp_files/2_itc_len_num.cpp
        cpp_files/3_itc_len_num.cpp
        cpp_files/4_itc_multi_num.cpp
        cpp_files/5_itc_max_num.cpp
        cpp_files/6_itc_min_num.cpp
        cpp_files/7_itc_rev_num.cpp
        cpp_files/8_itc_null_count.cpp
        cpp_files/9_itc_mirror_num.cpp
        cpp_files/10_itc_mirror_count.cpp
        cpp_files/11_itc_second_max_num.cpp
        cpp_files/12_itc_second_simple_max_num.cpp
        cpp_files/13_itc_bin_num.cpp
        cpp_files/14_itc_oct_num.cpp
        cpp_files/15_itc_rev_bin_num.cpp
        cpp_files/16_itc_rev_oct_num.cpp)
