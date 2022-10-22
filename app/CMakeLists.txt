# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
#set(NRF9160_FEATHER_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR} CACHE PATH "nRF9160 Feather root directory")
#set(ZEPHYR_EXTRA_MODULES drivers)
#add_subdirectory(drivers)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
#add_subdirectory_ifdef(CONFIG_TOGGLEDRIVER drivers)
project(app LANGUAGES C)
target_sources(app PRIVATE src/main.c)
