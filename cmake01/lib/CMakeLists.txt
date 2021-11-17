
# STATIC : 정적 라이브러리
# SHARED : 동적 라이브러리
# MODULE : 동적 링크는 안되지만, 런타임시에 불러올 수 있는 라이브러리
# add_library(sh STATIC shape.cpp)
file(
    GLOB_RECURSE    # 하위 디랙토리까지 재귀적으로 살핌
    SRC_FILES       # 변수
    CONFIGURE_DEPENDS   # 파일 목록 달라지면 다시 만들라 (재 cmake .. 없이)
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp   # 안 도는 경우도 있다고 함
)
add_library(sh STATIC ${SRC_FILES}) # <- 위의 변수 사용

target_include_directories(
    sh PUBLIC ${CMAKE_SOURCE_DIR}/includes
)

target_compile_options(
    sh PRIVATE -Wall -Werror
)

# 외부 라이브러리 설치
include(FetchContent) # 모듈 부르기
FetchContent_Declare ( # 불러올올 곳
    Fmt
    GIT_REPOSITORY "https://github.com/fmtlib/fmt"
    GIT_TAG "7.1.3"
    )
FetchContent_MakeAvailable(Fmt) # 사용가능하게 함



# 의존하는 라이브러리 연결
# PUBLIC : h, cpp 모두 사용
# PRIVATE : cpp에서만 사용
# INTERFACE : 헤더에서만 사용
target_link_libraries(
    sh PRIVATE pthread fmt
)