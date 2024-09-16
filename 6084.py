h, b, c, s = map(int, input().split())
res = float((h*b*c*s)/8/1024/1024)
print(f'{round(res, 1)} MB')