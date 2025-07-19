#include <stdio.h>

// 传入纬度和经度指针，向东南方向移动一度
void go_south_east_pointer(int *lat, int *lon) {
    (*lat)--;  // 纬度减小 1°
    (*lon)++;  // 经度增加 1°
}

void go_south_east(int lat, int lon) {
    (lat)--;  // 纬度减小 1°
    (lon)++;  // 经度增加 1°
}

int main() {
    int latitude  = 32;   // 初始纬度
    int longitude = -64;  // 初始经度

    go_south_east_pointer(&latitude, &longitude);
    // go_south_east(latitude,longitude);

    printf("停！当前位置：[%d, %d]\n", latitude, longitude);
    return 0;
}