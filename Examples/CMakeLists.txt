project(Examples)

include_directories(
    ${CLOUD_SOURCE_DIR}/Cplusplus
    ${CLOUD_SOURCE_DIR}/Cplusplus/SatImage
    ${CLOUD_SOURCE_DIR}/Cplusplus/SatImage/Typhoon

    ${CLOUD_SOURCE_DIR}/Cplusplus/WRF
    ${CLOUD_SOURCE_DIR}/Cplusplus/WRF/TCDSM
    ${CLOUD_SOURCE_DIR}/Cplusplus/WRF/TCDSM/Src
    ${CLOUD_SOURCE_DIR}/Cplusplus/WRF/TCDSM/netCDF-cxx-4.2
)

option(EXAMPLE_SATIMG_TYPHOON "option for satimage typhoon example" OFF)
if(EXAMPLE_SATIMG_TYPHOON)
    add_subdirectory(./SatImageTyphoonExample)
endif()

option(EXAMPLE_WRF "option for wrf data example" OFF)
if(EXAMPLE_WRF)
    add_subdirectory(./WRFExample)
endif()

