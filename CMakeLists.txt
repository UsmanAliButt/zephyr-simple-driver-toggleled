# SPDX-License-Identifier: Apache-2.0
#set(NRF9160_FEATHER_ROOT_DIR ${CMAKE_CURRENT_LIST_DIR} CACHE PATH "nRF9160 Feather root directory")
add_subdirectory(drivers)
#list(APPEND SYSCALL_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include)
#set(SYSCALL_INCLUDE_DIRS ${SYSCALL_INCLUDE_DIRS} PARENT_SCOPE)
zephyr_include_directories(include)