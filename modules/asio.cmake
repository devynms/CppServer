if(NOT TARGET asio)

  # Module library
  file(GLOB SOURCE_FILES "asio/asio/src/*.cpp")
  add_library(asio ${SOURCE_FILES})
  if(MSVC)
    set_target_properties(asio PROPERTIES COMPILE_FLAGS "${PEDANTIC_COMPILE_FLAGS}")
    find_package(Crypt REQUIRED)
  else()
    set_target_properties(asio PROPERTIES COMPILE_FLAGS "${PEDANTIC_COMPILE_FLAGS} -Wno-shadow")
  endif()
  target_compile_definitions(asio PRIVATE ASIO_STANDALONE ASIO_SEPARATE_COMPILATION)
  target_include_directories(asio PUBLIC "asio/asio/include" PUBLIC ${OPENSSL_INCLUDE_DIR})
  if (MSVC)
      target_link_libraries(asio ${OPENSSL_LIBRARIES} ${CRYPT_LIBRARIES})
  else()
      target_link_libraries(asio ${OPENSSL_LIBRARIES})
  endif()

  # Module folder
  set_target_properties(asio PROPERTIES FOLDER "modules/asio")

endif()
