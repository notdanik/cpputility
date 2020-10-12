# Usage

### Including
1. Put the `cpputility.hpp` file into the folder with your code
2. You now have to include the file in your code. In your main code file, use the `include "cpputility.hpp"` line to do so.
3. Now you are ready to use *cpputility*

### Functions
- `printString`

    Description:
    > Will print a string

    Usage: `printString(string);`

    Example:
    ```c++
    printString("hello");
    printString(stringVariable);
    printString(stringVariable + "string" + anotherStringVariable);
    ```
- `clear`

    Description:
    > Will clear the console

    Usage: `clear();`

    Example:
    ```c++
    clear();
    ```
- `readFile`

    Description:
    > Prints the contents of selecter text file

    Usage: `readFile(file);`

    Example:
    ```c++
    readFile("text.txt");
    readFile(stringWithFileName);
    ```

- `pause`

    Description:
    > Will pause the console until [ENTER] is pressed

    Usage: `pause("optional pause string");`

    Example:
    ```c++
    pause("");
    pause("Pause text");
    ```

    **Note:** *the function always needs string argument, if the string i empty, it will print `Press enter to continue...`*
