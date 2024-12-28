# CMakeList.txt : cmake-gtkmm の CMake プロジェクト。ソースを含めて、次を定義します:
# プロジェクト専用ロジックはこちらです。
#

link_directories(
	${GTKMM_LIBRARY_DIRS}
)

include_directories(
	${GTKMM_INCLUDE_DIRS}
)

# ソースをこのプロジェクトの実行可能ファイルに追加します。
add_executable (cmake-gtkmm "cmake-gtkmm.cpp" "cmake-gtkmm.h")

target_link_libraries(cmake-gtkmm 
    ${GTKMM_LIBRARIES}
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cmake-gtkmm PROPERTY CXX_STANDARD 20)
endif()

# TODO: テストを追加し、必要な場合は、ターゲットをインストールします。
