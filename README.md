# CodingTest
Piecewise Recursive Function - README
This project demonstrates the implementation of a piecewise recursive function in C. It provides three different approaches to calculate the function based on the given recurrence relation F(n) = F(n-3) + F(n-2), with initial conditions F(0) = 0, F(1) = 1, and F(2) = 2.

Development Environment
The source code for this project was developed and tested using the following environment:

Operating System: Windows 10
IDE: Visual Studio Code
C/C++ Support for Visual Studio Code
To enable C/C++ development in Visual Studio Code, you need to install the "C/C++" extension provided by Microsoft. Follow these steps to set up the development environment:

Open Visual Studio Code.

Select the Extensions view icon on the Activity bar on the side or use the keyboard shortcut (Ctrl+Shift+X).

Search for "C++" in the Extensions view.

Look for the "C/C++" extension provided by Microsoft and click on "Install" to install it.

Once the extension is installed, open or create a .cpp file in Visual Studio Code. The extension will provide syntax highlighting (colorization), smart completions and hovers (IntelliSense), and error checking for C++ code.

Compiler Setup
To compile and run C/C++ programs in Visual Studio Code, you need a C++ compiler and debugger. The C/C++ extension does not include these tools, so you will need to install them separately. Here's an example of setting up the Minimalist GNU for Windows (MinGW) C++ tools:

Download the MinGW-w64 installer from the official website: https://mingw-w64.org/doku.php/download.

Run the installer and follow the instructions to install MinGW-w64. Make sure to select the appropriate options for your system (e.g., architecture, threads).

Add the MinGW-w64 bin directory to the system's PATH environment variable to make the compiler accessible from any location in the terminal:

Open the Windows search bar and type "settings" to open the Windows Settings.
Search for "Edit environment variables for your account".
Choose the "Path" variable in your User variables and click on "Edit".
Add the MinGW-w64 destination folder path with \bin appended to the system path. For example, if you installed MinGW-w64 in C:\mingw-w64, add C:\mingw-w64\bin to the path.
Save the changes and reopen any terminal windows for the new path to take effect.
Verify the installation by opening a new terminal in Visual Studio Code and running the following commands:

To check the GCC compiler: gcc --version
To check the G++ compiler: g++ --version
To check the GDB debugger: gdb --version
Compilation and Execution
To compile and run the piecewise recursive function code, follow these steps:

Open the folder containing the source code files in Visual Studio Code.

Ensure that you have the C/C++ extension installed and the C++ compiler set up as described above.

Open a new terminal in Visual Studio Code by clicking on View -> Terminal.

Use the cd command to navigate to the directory where the source code file is located.

Compile the code using the appropriate compiler command. For example, using G++:

bash
Copy code
g++ -o piecewise_recursive piecewise_recursive.c
If the compilation is successful, an executable file named piecewise_recursive.exe (or any name specified in the compilation command) will be generated in the same directory.

Run the program by executing the compiled binary:

bash
Copy code
./piecewise_recursive.exe
The program will execute and display the results for each of the three approaches: recursive, dynamic programming with memoization, and dynamic programming with tabulation.

Feel free to modify the source code to test different input values or customize the program behavior.

Additional Notes
The MAX_SIZE constant in the code represents the maximum size of the memoization table or the tabulation array. You can modify this value as per your requirements or constraints.

Make sure to have the necessary permissions to compile and run the code in your development environment.

If you encounter any issues or errors during compilation or execution, please ensure that you have set up the development environment correctly and that the required dependencies (e.g., GCC compiler) are properly installed.

Remember to free any dynamically allocated memory after use, as shown in the provided code, to avoid memory leaks.

For more information or further assistance, refer to the VS Code documentation or consult the relevant resources for C/C++ development in Visual Studio Code.
