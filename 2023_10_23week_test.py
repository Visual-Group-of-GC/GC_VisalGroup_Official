"""
Target members: all members of the 23rd session and foxr lolunwer (4 + 1)
Time: 2023/10/21
Ver: -2023/10/21
Competition link:
- https://www.luogu.com.cn/contest/140210
"""

# P1
# a = list(map(int, input().split()))
# b = int(input())
# count = 0
# for i in a:
#     if i <= b + 30:
#         count += 1
# print(count)

# P2
# n = int(input())
# num = list(map(int, input().split()))
# num_max = max(num)
# num_min = min(num)
# num_sum = 0
# for i in num:
#     num_sum += i
# num_sum -= num_min + num_max
# print("%.2f" % (num_sum * 1.0 / (n - 2)))

# P3
# def factorial(num):
#     out = 1
#     for k in range(1, num + 1):
#         out *= k
#     return out
#
#
# n = int(input())
# n_sum = 0
# for i in range(1, n + 1):
#     n_sum += factorial(i)
# print(n_sum)

# P4
# n = int(input())
# score_max = ["name", -1, 0, 0, 0]
# for i in range(n):
#     data = input().split()
#     score_sum = int(data[1]) + int(data[2]) + int(data[3])
#     if score_sum > score_max[1]:
#         score_max = (data[0], score_sum, data[1], data[2], data[3])
# print(score_max[0], score_max[2], score_max[3], score_max[4])

# P5
# l, m = list(map(int, input().split()))
# road = "0" * (l + 1)
# for i in range(m):
#     line = list(map(int, input().split()))
#     road = road[:line[0]] + "1" * (line[1] - line[0] + 1) + road[line[1] + 1:]
# print(road.count("0"))

# P6
# a = input().split()
# new, year, month, day = a[0], int(a[1]), int(a[2]), int(a[3])
# if day == 31:
#     day = 1
#     if month != 12:
#         month += 1
#     else:
#         month = 1
#         if new == "AD":
#             year += 1
#         else:
#             if year != 1:
#                 year -= 1
#             else:
#                 new = "AD"
#                 year = 1
# elif day == 30:
#     if month in [4, 6, 9, 11]:
#         month += 1
#         day = 1
#     else:
#         day += 1
# elif day == 29:
#     month = 3
#     day = 1
# elif day == 28:
#     count = 0
#     if new == "BC":
#         count = 1
#     year_c = year - count
#     if year_c % 4 == 0 and year_c % 100 != 0 or year_c % 400 == 0:
#         day = 29
#     else:
#         month = 3
#         day = 1
# else:
#     day += 1
# print(new, year, month, day)
