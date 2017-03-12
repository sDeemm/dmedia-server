project(libdms)

#
# Inludes
#
include_directories(include)

find_package( Boost)
if( NOT Boost_FOUND)
  message( "boost library not found on system.")
  message( FATAL_ERROR "Please install boost library.")
endif( NOT Boost_FOUND)

# define libdms sources
set( libdms_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/RessourceManager.cpp)

# add libdms as shared lib (or dll)
add_library( dms SHARED ${libdms_SOURCES})

# add tests subdirectory
add_subdirectory( tests)
