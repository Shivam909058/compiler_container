#include <stdio.h>

int main()
{
    printf("Hello, world!\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("You entered: %d\n", n);
    return 0;
}

// docker run --rm -v "$(pwd):/app" c-compiler main.c

/*


docker run -i --rm -v "$(pwd):/app" cpp-compiler main.c > c_output.txt
docker run -i --rm -v "$(pwd):/app" cpp-compiler main.cpp > cpp_output.txt
docker run -i --rm -v "$(pwd):/app" cpp-compiler main.py > py_output.txt
docker build -t compiler-app .

*/