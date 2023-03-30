<div align="center">
    <h1>Printf Project Holberton</h1>
</div>
<hr>

## Description
The program takes a string as input, and then it breaks it into individual characters and prints them to the console.

This project is a simulation of the printf function in C. It was made in the program of [Holberton School](https://www.holbertonschool.com/).

## Flowchart

<img src="https://i.imgur.com/cdXgSwv.png" alt="flowchart">

## Man page

The man page is a file that explains how the ``_printf`` function works. To see the full explanation of this function run our man page like this:
```
$ man ./man_3_printf
```


## Usage

<details open>
<summary> <strong> Syntaxis </strong> </summary>

<br>

to call the `_Printf()` function you need to do it as follows:
```
#include "main.h"

int main() 
{
    _printf("example of string");
    return (0);
}
```
</details>

<details open>
<summary> <strong> Compilation </strong> </summary>

<br>

To compile the program you must take into account 2 factors:

* You need to download the repository
* Compile with the command:
 ``gcc *.c``

* To run it use:
``./a.out``

</details>

<details open>
<summary> <strong> Parameters </strong> </summary>

<br>

This table explains the functionality of the parameters accepted by the function and the use of their corresponding argument:

| Parameter  | Data type | Description |
| ------------- |:-------------:|:-------------:|
| %c      | int    |	Prints a character. |
| %s      | char * |	Prints a string.    |
| %%      | char   |    Print a '%'         |
| %d      | int    |    Prints an integer   |
| %i      | int    |    Prints an integer   |

</details>

<details open>
<summary> <strong> Example </strong>
</summary>

<br>

 Here is an example of how the `_printf()`
function works:

``` 
#include "main.h"

int main()
{
    _printf("The size of a meerkat is: %i", 31);
    return (0);
}
```
The output of this function is:
```
The size of a meerkat is: 31
```

</details>

## Authors

* <h6>Facundo Alvarez <a href="https://github.com/Faqu22"><img align="center" alt="github" src="https://github.githubassets.com/images/modules/logos_page/GitHub-Mark.png" height="30"/></a>
* <h6>Hiojam Rodríguez <a href="https://github.com/RoxxionYT"><img align="center" alt="github" src="https://github.githubassets.com/images/modules/logos_page/GitHub-Mark.png" height="30"/></a>
<hr>
