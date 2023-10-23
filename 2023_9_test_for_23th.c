/*
none
*/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h >
//P2
//int main() {
//法一
//	//int number;
//	//int p[5] = { 0 };
//	//scanf("%d", &number);
//	//p[0] = number / 10000;
//	//p[1] = (number - 10000 * p[0]) / 1000;
//	//p[2] = (number - 10000 * p[0] - 1000 * p[1]) / 100;
//	//p[3] = (number - 10000 * p[0] - 1000 * p[1] - 100 * p[2]) / 10;
//	//p[4] = (number - 10000 * p[0] - 1000 * p[1] - 100 * p[2] - 10 * p[3]);
//	//int command;
//	//scanf("%d", &command);
//	//switch (command) {
//	//case 1:
//	//	// 也可以比大小 + 循环简化
//	//	if (p[0] != 0) {
//	//		printf("5");
//	//	}
//	//	else if (p[1] != 0) {
//	//		printf("4");
//	//	}
//	//	else if (p[2] != 0) {
//	//		printf("3");
//	//	}
//	//	else if (p[3] != 0) {
//	//		printf("2");
//	//	}
//	//	else {
//	//		printf("1");
//	//	}
//	//	break;
//	//case 2:
//	//	// 循环简化
//	//	if (p[0] != 0) {
//	//		printf("%d %d %d %d %d", p[0], p[1], p[2], p[3], p[4]);
//	//	}
//	//	else if (p[1] != 0) {
//	//		printf("%d %d %d %d", p[1], p[2], p[3], p[4]);
//	//	}
//	//	else if (p[2] != 0) {
//	//		printf("%d %d %d", p[2], p[3], p[4]);
//	//	}
//	//	else if (p[3] != 0) {
//	//		printf("%d %d", p[3], p[4]);
//	//	}
//	//	else {
//	//		printf("%d", p[5]);
//	//	}
//	//	break;
//	//case 3:
//	//	printf("%d", p[0] + p[1] + p[2] + p[3] + p[4]);
//	//	break;
//	//default:
//	//	break;
//	//}
//法二
//	//int number;
//	//int i = 0, p[9] = { 0 };
//	//scanf("%d", &number);
//	//while (number != 0) {
//	//	p[i] = number % 10;
//	//	number /= 10;
//	//	i++;
//	//}
//	//p[i] = -1;
//	//int command, count = 0, sum = 0;
//	//for (int k = 0; p[k] >= 0; k++)
//	//{
//	//	count++;
//	//}
//	//printf("%d", count);
//	//scanf("%d", &command);
//	//switch (command)
//	//{
//	//case 1:
//	//	printf("%d", count);
//	//case 2:
//	//	for (int k = count - 1; k >= 0; k--)
//	//	{
//	//		printf("%d ", p[k]);
//	//	}
//	//	break;
//	//case 3:
//	//	for (int k = 0; k < count; k++)
//	//	{
//	//		sum += p[k];
//	//	}
//	//	printf("%d", sum);
//	//default:
//	//	break;
//	//}
//法三
//	//char number[30] = { '\0' };
//	//int command, count = 0, sum = 0;
//	//scanf("%s%d", number, &command);
//	//switch (command) {
//	//case 1:
//	//	for (int i = 0; number[i] != '\0'; i++) {
//	//		count++;
//	//	}
//	//	printf("%d", count);
//	//	break;
//	//case 2:
//	//	for (int i = 0; number[i] != '\0'; i++) {
//	//		printf("%c ", number[i]);
//	//	}
//	//	break;
//	//case 3:
//	//	for (int i = 0; number[i] != '\0'; i++) {
//	//		sum += number[i] - 48;
//	//	}
//	//	printf("%d", sum);
//	//	break;
//	//default:
//	//	break;
//	//}
//
//
//	return 0;
//}

//P1
//int main() {
//	int year, month, day;
//	scanf("%d%d%d", &year, &month, &day);
//思想一
//	switch (month) {
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//		if (day != 31) {
//			day++;
//		}
//		else {
//			month++;
//			day = 1;
//		}
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		if (day != 30) {
//			day++;
//		}
//		else {
//			month++;
//			day = 1;
//		}
//		break;
//	case 12:
//		if (day != 31) {
//			day++;
//		}
//		else {
//			year++;
//			month = 1;
//			day = 1;
//		}
//		break;
//	case 2:
//		if (day == 28) {
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			{
//				day++;
//			}
//			else {
//				month++;
//				day = 1;
//			}
//		}
//		else if (day == 29) {
//			month++;
//			day = 1;
//		}
//		else {
//			day++;
//		}
//	  break;
//	}
//思想二
//	switch(day) {
//		case 31:
//			day = 1;
//			if (month != 12) {
//				month++;
//			}
//			else {
//				year++;
//				month = 1;
//			}
//			break;
//		case 30:
//			if (month == 4 && month == 6 && month == 9 && month == 11) {
//				day++;
//			}
//			else {
//				month++;
//				day = 1;
//			}
//			break;
//		case 28:
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//				day++;
//			}
//			else {
//				month++;
//				day = 1;
//			}
//			break;
//		case 29:
//			month++;
//			day = 1;
//			break;
//		default:
//			day++;
//	}
//	printf("%d %d %d", year, month, day);
//}
