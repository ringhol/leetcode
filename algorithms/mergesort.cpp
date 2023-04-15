#include <algorithm>
#include <iostream>

int* merge(int arr[], int l, int r) {
  // 长度为1不需要归并
  if (l == r) {
    return arr+l;
  }
  int mid = l + ((r - l) >> 1);
  int* left = merge(arr, l, mid);
  int* right = merge(arr, mid+1, r);
  // 合并这两部分
  int len_l = mid - l+1;
  int len_r = r - mid;
  int* res = new int[r - l+1];
  int j = 0, k = 0;
  while (j < len_l && k < len_r) {
    if (left[j] < right[k]) {
      res[j + k] = left[j];
      j++;
    } else {
      res[j + k] = right[k];
      k++;
    }
  }
  // 处理剩余数据
  while (j < len_l) {
    res[j + k] = left[j];
    j++;
  }
  while (k < len_r) {
    res[j + k] = right[k];
    k++;
  }
  return res;
}


int main(int argc, char const* argv[]) {
  int arr[]{1, 0, 3, 7, 9,28, 5, 8, 4, 33,2};
  int size = std::size(arr);
  int* res = merge(arr,0,size-1);
  for(int i = 0;i<size;i++){
    std::cout<<res[i]<<" ";
  }
  std::cout<<"\n";
  return 0;
}
