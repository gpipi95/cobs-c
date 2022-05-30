set(CMAKE_INCLUDE_CURRENT_DIR ON)
project(crc)

include_directories(..)

add_library(crc-lib
    crc16.c
    crc8.c
    crc32.c
    crcccitt.c
    crcdnp.c
    crckrmit.c
    crcsick.c
    nmea-chk.c
    crcmfcc.cpp
)

# target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
target_include_directories(crc-lib PUBLIC ${PROJECT_SOURCE_DIR})
