# Notes

- Tested as working on Windows 11

## Microsoft Visual C++

- Download and install Microsoft Visual Studio 2022
- Download and install CMake: <https://cmake.org/download/>
  - Download the binary distribution with platform type "Windows x64 Installer"

## Boost (version 1.87.0)

- Instructions: <https://www.boost.org/doc/libs/1_87_0/more/getting_started/windows.html>

1. Download `boost_1_87_0.zip` from this URL: <https://www.boost.org/users/history/version_1_87_0.html>
2. Create these folders:
  a. `C:\dev`
  b. `C:\boost`
  c. `C:\boost\include`
  d. `C:\boost\include\boost_1_87_0`
3. Unzip the files and put them in `C:\dev`
4. Open a "x64 Native Tools Command Prompt for VS 2022"
5. cd to the boost folder (e.g. `cd C:\dev\boost_1_87_0`)
6. Bootstrap the build system: `bootstrap.bat msvc`
7. Build Boost: `b2 -j8 --build-type=complete stage toolset=msvc address-model=64 architecture=x86 define=BOOST_USE_WINAPI_VERSION=0x0A00`
8. Copy the boost folder `C:\dev\boost_1_87_0\boost` to inside this directory: `C:\boost\include\boost_1_87_0`
9. Copy the staged lib folder `C:\dev\boost_1_87_0\stage\lib` to this directory: `C:\boost`
