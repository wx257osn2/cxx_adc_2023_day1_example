# `cxx_adc_2023_day1_example`

[C++ Advent Calendar 2023](https://qiita.com/advent-calendar/2023/cxx)の記事「[C++の構築環境に関して](https://qiita.com/exli3141/items/17f6682916909e13914d)」のexample

## Usage

vcpkgとCMakeを含むVS2022をインストールし、x64 Native Tools Comand Prompt for VS 2022を立ち上げる

```console
**********************************************************************
** Visual Studio 2022 Developer Command Prompt v17.11.5
** Copyright (c) 2022 Microsoft Corporation
**********************************************************************
[vcvarsall.bat] Environment initialized for: 'x64'

C:\Program Files\Microsoft Visual Studio\2022\Community>where cmake
C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe

C:\Program Files\Microsoft Visual Studio\2022\Community>where vcpkg
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\vcpkg\vcpkg.exe

C:\Program Files\Microsoft Visual Studio\2022\Community>where ninja
C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja\ninja.exe

C:\Program Files\Microsoft Visual Studio\2022\Community>cd C:\
C:\>git clone https://github.com/wx257osn2/cxx_adc_2023_day1_example gtkmmtes
C:\>cd gtkmmtes
C:\gtkmmtes>vcpkg install
C:\gtkmmtes>copy CMakeUserPresets.json.in CMakeUserPresets.json
C:\gtkmmtes>rem !!! Edit PKG_CONFIG_EXECUTABLE on your CMakeUserPresets.json !!!
C:\gtkmmtes>cmake --preset default
C:\gtkmmtes>cmake --build out/build/default
C:\gtkmmtes>out\build\default\cmake-gtkmm\cmake-gtkmm.exe
C:\gtkmmtes>
```
