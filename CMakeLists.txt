CMAKE_MINIMUM_REQUIRED(VERSION 3.8.0)

PROJECT(BoostTest)

FIND_PACKAGE(Boost REQUIRED COMPONENTS filesystem)

ADD_EXECUTABLE(${PROJECT_NAME} main.cpp)

TARGET_LINK_LIBRARIES(${PROJECT_NAME}
    PRIVATE
    Boost::filesystem
)

INSTALL(TARGETS ${PROJECT_NAME} DESTINATION bin)
