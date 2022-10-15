void InsertSort(std::vector<int>& v) {
    /* v is sorted */
    if (v.size() < 2) {
        return;
    }
    for (int j = 1; j != v.size(); ++j) {
        int key = v[j];
        /* Insert v[j] into the sorted sequence v[1..j-1] */
        int i = j - 1;
        while (i >= 0 && v[i] > key) {
            v[i + 1] = v[i];
            --i;
        }
        v[i + 1] = key;
    }
}
