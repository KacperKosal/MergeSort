include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
    target_compile_options(gtest_main PRIVATE -pthread)
endif()

add_executable(testy Testsortowania.cpp
        testodwrotny.cpp
        testlosowy.cpp
        testujemny.cpp
        testdoduje.cpp
        testpusty.cpp

)

target_link_libraries(testy PRIVATE Sortowanie GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(testy)