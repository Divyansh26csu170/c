void moveZeroes(int* nums, int numsSize) {
    int pos = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }

    // Fill the remaining positions with zero
    while (pos < numsSize) {
        nums[pos] = 0;
        pos++;
    }
}
