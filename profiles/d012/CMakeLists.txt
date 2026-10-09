set(D012_PROFILE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

set(D012_GENERATED

    "${D012_PROFILE_DIR}/generated/generated_registry.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0000.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0001.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0002.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0003.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0004.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0005.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0006.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0007.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0008.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0009.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0010.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0011.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0012.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0013.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0014.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0015.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0016.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0017.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0018.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0019.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0020.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0021.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0022.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0023.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0024.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0025.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0026.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0042.cpp"
    "${D012_PROFILE_DIR}/generated/generated_unit_0136.cpp"
)

if(MSVC)
    set_source_files_properties(${D012_GENERATED} PROPERTIES COMPILE_OPTIONS
        "/Od;/Ob0;/bigobj")
endif()

add_executable(d012_native
    ${D012_GENERATED}
    "${D012_PROFILE_DIR}/host/main.cpp"
    "${D012_PROFILE_DIR}/host/d012_profile.cpp"
)

target_include_directories(d012_native PRIVATE
    "${D012_PROFILE_DIR}/host"
    "${D012_PROFILE_DIR}/generated"
    "${CMAKE_SOURCE_DIR}/include"
)

target_link_libraries(d012_native PRIVATE psprecomp_core)

if(WIN32)
    target_link_libraries(d012_native PRIVATE winmm)
endif()

if(MSVC)
    target_link_options(d012_native PRIVATE /STACK:67108864)
endif()