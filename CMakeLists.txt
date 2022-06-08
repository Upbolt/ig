# CMakeList.txt : CMake project for CMakeProject2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject3")

# Add source to this project's executable.
add_executable (gfx
    "CMakeProject3.cpp" 
    "CMakeProject3.h"
	
	"./element/element.cpp"
	"./element/element.hpp"
	
	"./imgui/button/button.cpp"
	"./imgui/button/button.hpp"
		
	"./imgui/label/label.cpp"
	"./imgui/label/label.hpp"
		
	"./imgui/window/window.cpp"
	"./imgui/window/window.hpp"
		
	"./imgui/component/component.cpp"
	"./imgui/component/component.hpp"
	
	"submodules/imgui/imgui.cpp"
	"submodules/imgui/imgui_draw.cpp"
	"submodules/imgui/imgui_widgets.cpp"
	"submodules/imgui/imgui_tables.cpp"
	"submodules/imgui/backends/imgui_impl_dx11.cpp"
	"submodules/imgui/backends/imgui_impl_win32.cpp"

	"submodules/imgui/imgui.h"
	"submodules/imgui/imconfig.h"
	"submodules/imgui/imgui_internal.h"

	"submodules/imgui/backends/imgui_impl_dx11.h"
	"submodules/imgui/backends/imgui_impl_win32.h"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET gfx PROPERTY CXX_STANDARD 23)
endif()

add_subdirectory(submodules/imgui)

target_include_directories(gfx
    PUBLIC submodules/imgui/backends
    PUBLIC submodules/imgui
)

target_link_directories(gfx
    PRIVATE submodules/imgui/backends
    PRIVATE submodules/imgui
)

# TODO: Add tests and install targets if needed.
