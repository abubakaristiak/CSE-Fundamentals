//https://leetcode.com/problems/sort-an-array/
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftHalf(n1);
    vector<int> rightHalf(n2);

    for (int i = 0; i < n1; i++)
        leftHalf[i] = nums[left + i];
    for (int i = 0; i < n2; i++)
        rightHalf[i] = nums[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftHalf[i] <= rightHalf[j]) {
            nums[k] = leftHalf[i];
            i++;
        } else {
            nums[k] = rightHalf[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        nums[k] = leftHalf[i];
        i++;
        k++;
    }

    while (j < n2) {
        nums[k] = rightHalf[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& nums, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }
}

int main() {
    vector<int> nums = {5, 2, 3, 1};
    mergeSort(nums, 0, nums.size() - 1);

    cout << "Sorted array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}
