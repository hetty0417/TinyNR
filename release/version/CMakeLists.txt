cmake_minimum_required(VERSION 3.1.1)

project(demo)


set(CODE_DIR         ${PROJECT_SOURCE_DIR}/../../code)
set(INFRA_DIR        ${CODE_DIR}/comm/infra)
set(PROTOCAL_DIR     ${CODE_DIR}/comm/protocol)
set(CU_MAIN_DIR      ${CODE_DIR}/cu)
set(DU_MAIN_DIR      ${CODE_DIR}/du)

include_directories(
    ${INFRA_DIR}/include
    ${PROTOCAL_DIR}/include
    ${CU_MAIN_DIR}/include
    ${DU_MAIN_DIR}/include
)


file(GLOB_RECURSE SRC_LIST 
	${CU_MAIN_DIR}/source/*.c
	${DU_MAIN_DIR}/source/*.c
	${PROTOCAL_DIR}/source/*.c
	{INFRA_DIR}/source/*.c
)

#add_library(demo ${SRC_LIST} ${SRC_PROTOCOL_LIST}

add_executable(demo  ${SRC_LIST})