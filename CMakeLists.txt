cmake_minimum_required(VERSION 3.26)
project(FirstMiddle)

set(CMAKE_CXX_STANDARD 17)

add_executable(FirstMiddle main.cpp
        1_itc_num_print.cpp
        middle.h
        2_itc_len_num.cpp
        3_itc_sum_num.cpp
        4_itc_multi_num.cpp
        5_itc_max_num.cpp
        6_itc_min_num.cpp
        7_itc_rev_num.cpp
        8_itc_null_count.cpp
        9_itc_mirror_num.cpp
        10_itc_mirror_count.cpp
        11_itc_second_max_num.cpp
        12_itc_second_simple_max_num.cpp
        13_itc_bin_num.cpp
        14_itc_oct_num.cpp
        15_itc_rev_bin_num.cpp
        16_itc_rev_oct_num.cpp)
