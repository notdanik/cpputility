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

- `charToInt`

    Description:
    > Will transwer char to integer

    Usage: `charToInt(char);`

    Example:
    ```c++
    char a = '7';
    int b = charToInt(a);
    std::cout << b << '\n';
    ```

- `pythagoreanTheorem`

    Description:
    > Will calculate the pythagorean theorem for you

    Usage: `pythagoreanTheorem(a, b);`

    Example:
    ```c++
    std::cout << pythagoreanTheorem(7, 9) << '\n';
    ```

- `isPrimeNumber`

    Description:
    > Will return true if selected int is prime number and will return false otherwise

    Usage: `isPrimeNumber(number);`

    Example:
    ```c++
    isPrimeNumber(7); // Returns true
    isPrimeNumber(9); // Returns false
    ```

### Classes
- `cube`

    Description:
    > Used to calculate volume of a block

    Parameters:
    ```c++
    double x
    double y
    double z
    ```

    Returns:
    ```c++
    double volume = x * y * z
    ```

    Example:
    ```c++
    cube block1;
    cube block2;

    block1.x = 7;
    block1.y = 2;
    block1.z = 4;

    block2.x = 5.38;
    block2.y = 2.63;
    block2.z = 7.21;

    std::cout << "Block 1: " << block1.volume() << '\n';
    std::cout << "Block 2: " << block2.volume() << '\n';
    ```
