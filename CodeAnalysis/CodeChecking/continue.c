 #include <stdio.h>
int main() {
    int i = 0;
    while (i < 5) {
        if (i++ == 2)
            continue;
        printf("%d ", i);
    }
    return 0;
}

