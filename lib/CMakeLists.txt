project(libdmedia)

include_directories(include)

set(libdmedia_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/RessourceManager.cpp)

add_library(dmedia SHARED ${libdmedia_SOURCES})


#
# Add Tests
#
add_executable(dmediaTests ${CMAKE_CURRENT_SOURCE_DIR}/tests/main.cpp)
target_link_libraries(dmediaTests dmedia)
