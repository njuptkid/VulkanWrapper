cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(NAME VulkanWrapper)
project(${NAME})

include_directories(include)

find_package(Vulkan)

if (NOT Vulkan_FOUND)
    message(FATAL_ERROR "Vulkan not found")
endif()
message(STATUS "find Vulkan")
message(STATUS "Vulkan library "${Vulkan_LIBRARY})
message(STATUS "Vulkan include dir "${Vulkan_INCLUDE_DIR})

include_directories(${Vulkan_INCLUDE_DIR})

file(GLOB INC "include/*.h" "include/*.hpp")
file(GLOB SRC "src/*.cpp" "src/*.hpp" "src/*.h")

add_executable(${NAME} ${INC} ${SRC})

target_link_libraries(${NAME} ${Vulkan_LIBRARY})