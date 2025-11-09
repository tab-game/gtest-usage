add_library(math_utils
  math_utils.cc
)

target_compile_features(math_utils PUBLIC cxx_std_17)

set_target_properties(math_utils PROPERTIES
  VERSION ${PACKAGE_VERSION}
  SOVERSION ${PACKAGE_SOVERSION}
)

if(WIN32 AND MSVC)
  set_target_properties(math_utils PROPERTIES COMPILE_PDB_NAME "math_utils"
    COMPILE_PDB_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
  )
  if(gtestUsage_INSTALL)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/math_utils.pdb
      DESTINATION ${gtestUsage_INSTALL_LIBDIR} OPTIONAL
    )
  endif()
endif()

target_include_directories(math_utils
  PUBLIC
    $<INSTALL_INTERFACE:${gtestUsage_INSTALL_INCLUDEDIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(math_utils
  ${_gtestUsage_ALLTARGETS_LIBRARIES}
)

foreach(_hdr
  ${CMAKE_CURRENT_SOURCE_DIR}/../include/gtestUsage/math_utils.h
)
  get_filename_component(_filename ${_hdr} NAME)
  get_filename_component(_relpath ${_hdr} DIRECTORY)
  file(RELATIVE_PATH _relpath ${CMAKE_CURRENT_SOURCE_DIR}/../include ${_relpath})
  install(FILES ${_hdr}
    DESTINATION "${gtestUsage_INSTALL_INCLUDEDIR}/${_relpath}"
  )
endforeach()

if(gtestUsage_INSTALL)
  install(TARGETS math_utils EXPORT gtestUsageTargets
    RUNTIME DESTINATION ${gtestUsage_INSTALL_BINDIR}
    BUNDLE DESTINATION  ${gtestUsage_INSTALL_BINDIR}
    LIBRARY DESTINATION ${gtestUsage_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${gtestUsage_INSTALL_LIBDIR}
  )
endif()

