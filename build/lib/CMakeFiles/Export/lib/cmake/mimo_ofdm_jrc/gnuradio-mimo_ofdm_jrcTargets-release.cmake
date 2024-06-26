#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gnuradio::gnuradio-mimo_ofdm_jrc" for configuration "Release"
set_property(TARGET gnuradio::gnuradio-mimo_ofdm_jrc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gnuradio::gnuradio-mimo_ofdm_jrc PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libgnuradio-mimo_ofdm_jrc.so.1.0.0.0"
  IMPORTED_SONAME_RELEASE "libgnuradio-mimo_ofdm_jrc.so.1.0.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS gnuradio::gnuradio-mimo_ofdm_jrc )
list(APPEND _IMPORT_CHECK_FILES_FOR_gnuradio::gnuradio-mimo_ofdm_jrc "${_IMPORT_PREFIX}/lib/libgnuradio-mimo_ofdm_jrc.so.1.0.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
