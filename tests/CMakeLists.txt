add_library(gmock STATIC IMPORTED)
set_target_properties(gmock PROPERTIES
  IMPORTED_LOCATION_DEBUG "${PROJECT_SOURCE_DIR}/dependencies/googlemock/Debug/gmockd.lib"
  IMPORTED_LOCATION_RELEASE "${PROJECT_SOURCE_DIR}/dependencies/googlemock/Release/gmock.lib"
  )	
include_directories("${PROJECT_SOURCE_DIR}/dependencies/googlemock/include")


add_library(gtest STATIC IMPORTED)
set_target_properties(gtest PROPERTIES
	IMPORTED_LOCATION_DEBUG "${PROJECT_SOURCE_DIR}/dependencies/googletest/Debug/gtestd.lib"
	IMPORTED_LOCATION_RELEASE "${PROJECT_SOURCE_DIR}/dependencies/googletest/Release/gtest.lib"
	)
include_directories("${PROJECT_SOURCE_DIR}/dependencies/googletest/include")


add_executable(Tests tests.cpp)

target_link_libraries(Tests source gmock gtest)
