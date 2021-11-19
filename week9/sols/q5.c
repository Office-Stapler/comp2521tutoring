typedef struct item {
	int k;
	int j;
} Item;

int compareNum(int a, int b) {
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}

int itemCmp(Item a, Item b) {
    if (a.j == b.j) {
        return compareNum(a.k, b.k);
    }
    return compareNum(a.j, b.j);
}