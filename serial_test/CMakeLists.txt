cmake_minimum_required(VERSION 3.13)

set(PICO_BOARD pico2)
include(pico_sdk_import.cmake)
project(serial_test)

pico_sdk_init()

add_executable(serial_test
main.c
)

target_link_libraries(serial_test
pico_stdlib
)

pico_enable_stdio_usb(serial_test 1)

pico_add_extra_outputs(serial_test)

