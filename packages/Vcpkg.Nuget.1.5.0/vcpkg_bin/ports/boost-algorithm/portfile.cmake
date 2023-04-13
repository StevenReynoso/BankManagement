# Automatically generated by boost-vcpkg-helpers/generate-ports.ps1

include(vcpkg_common_functions)

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/algorithm
    REF boost-1.68.0
    SHA512 e5d6fd1a64d2c153b8135a12ce8fdd830a8e8138ac34dca8c0737eee5ec95238159dcd7422377f1cc50860ab47d918faa3ae802bfcab0d3e86dce689c2933114
    HEAD_REF master
)

include(${CURRENT_INSTALLED_DIR}/share/boost-vcpkg-helpers/boost-modular-headers.cmake)
boost_modular_headers(SOURCE_PATH ${SOURCE_PATH})