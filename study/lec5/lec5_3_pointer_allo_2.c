int main() {
    int abc = 1;
    int* other = &abc;
    int* other2 = other;

    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);
    abc++;
    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);
    (*other2)++;
    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);
}