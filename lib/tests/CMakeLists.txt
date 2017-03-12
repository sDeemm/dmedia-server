project(dmsTests)

#
# Inludes
#
include_directories(include)


# define libdms sources
set( dmsTests_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

# add dmsTests executable
add_executable( dmsTests ${dmsTests_SOURCES})
target_link_libraries( dmsTests dms)
