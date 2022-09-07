/*************************************************************************
	> File Name: 1.c
	> Author: DX3906
	> Mail: 21009201351@stu.xidian.edu.cn 
	> Created Time: 2022年09月06日 星期二 22时31分02秒
 ************************************************************************/

#include<stdio.h>

int c = 2;

int sum(int a, int b) {
	return a + b + c;
}

int main() {
	int a = 0;
	int b = 1;
	int ans = sum(a, b);
	printf("%d", ans);
	return 0;
}
