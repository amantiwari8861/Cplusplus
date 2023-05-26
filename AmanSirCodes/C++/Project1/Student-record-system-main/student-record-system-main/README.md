# MATRIX CALCULATOR
### Miniproject 
 Mathematical operations are a part of our daily lives. Everyday we will be involving with various types of calculations around us. Matrices is a mathematical entity where numbers are arranged in rows and columns. A lot of applications exist with matrices in real life.The major application lies in the software industry such as development of algorithms like path finder algorithms, image processing algorithms and many more.
 In this project, some of the basic matrix operations are presented where a user can select the operation to be performed on the matrix. Then the matrices with their size are entered. Note that only square matrices are being considered for the project.

Build | Code Quality | Unity | [Git Inspector](using github.io option)
------|----------|-------|--------------
[![C/C++ CI - Build Status](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/c-cpp.yml)|[![Code Quality - Static Code - Cppcheck](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/cppcheck.yml)[![CodeQuality Dynamic Code Analysis Valgrind](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/CodeQuality_Dynamic.yml/badge.svg)](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/CodeQuality_Dynamic.yml)|[![Unit Testing - Unity](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/unity.yml/badge.svg)](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/unity.yml)|[![Contribution Check - Git Inspector](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/AkulaPranathi1/stepin_student-record-system/actions/workflows/gitinspector.yml)

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1.Requirements`   | Documents detailing requirements and research
`2.Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4.Test_plan`      | Documents with test plans and procedures


Features
|    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
|----------------|----------------|---------------|-------------|--------------
| F_01, F_02, F_03, F_04, F_05, F_06, F_07   | None    | None   |7  |7    

| Feature Id | Feature |
| -----------|---------|
|F_01| Options to select matrix operation|
|F_02| Operations on two matrices such as addition, subtraction and multiplication are included|
|F_03| Single matrix operations such as determinant, transpose and inverse of a matrix |
|F_04| Separate function for each operation |
|F_05| A structure has been implemented for storing the matrices|
|F_06| Dynamic memory allocation and deallocation has been implemented for the matrices|
|F_07|  There is no upper limit for the size of the matrix|

## Challenges Faced and How Was It Overcome

| No. | Challenge | Solution
|-----|-----------|--------
|1. | Dynamic memory allocation of 2D arrays created segmentation faults| running the code in GDB helped find the line where the program crashes
|2. | Program crashes | Writing clean code with allocating and deallocating memory at all functions as per requirement|
