# Campatible with cmake 3.11 and above.
#[[
macro(FetchContent_MakeAvailable NAME)
FetchContent_GetProperties(${NAME})
if(NOT ${NAME}_POPULATED)
    FetchContent_Populate(${NAME})
    add_subdirectory(${${NAME}_SOURCE_DIR} ${${NAME}_BINARY_DIR})
endif()
endmacro()

macro(FetchContent_MakeAvailable NAME)
    FetchContent_GetProperties(${NAME})
    if(NOT ${NAME}_POPULATED)
        FetchContent_Populate(${NAME})
        add_subdirectory(${${NAME}_SOURCE_DIR} ${${NAME}_BINARY_DIR})
    endif()
endmacro()
]]

# Discover the projects that use CMake in the subdirectories.
# Note that explicit cmake invocation is required every time a new project is
# added or removed.
file(GLOB entries *)
foreach(entry ${entries})
 if(IS_DIRECTORY ${entry} AND EXISTS ${entry}/CMakeLists.txt)
  get_filename_component(origin_entry_name "${entry}" NAME)
  string(TOUPPER ${origin_entry_name} upper_entry_name)
  if(
  (${upper_entry_name} STREQUAL "BIT7Zasdklgh") 
   OR 
  (${upper_entry_name} STREQUAL "CJSON666"))
  #add_subdirectory(${entry})
  #set_target_properties(${origin_entry_name} PROPERTIES FOLDER "3rdparty")
  elseif(${upper_entry_name} STREQUAL "BIT7Z")
  #add_subdirectory(${entry})
  #set_target_properties("${origin_entry_name}64" PROPERTIES FOLDER "3rdparty")
  elseif(${upper_entry_name} STREQUAL "CJSON")
  #add_subdirectory(${entry})
  #set_target_properties("${origin_entry_name}" PROPERTIES FOLDER "3rdparty")
  
  endif()
  #message(STATUS ${entry_name})
 endif()
endforeach(entry)
