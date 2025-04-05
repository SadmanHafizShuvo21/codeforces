import math
import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        a = list(map(int, data[idx:idx+n]))
        idx += n
        unique = list(set(a))
        possible = False
        for d in unique:
            valid = True
            for x in a:
                if x % d != 0:
                    if x < d:
                        valid = False
                        break
            if not valid:
                continue
            
            divisible = [x for x in a if x % d == 0]
            count_d = divisible.count(d)
            if count_d == 0:
                continue
            
            divided = [x // d for x in divisible]
            if 1 in divided:
                divided.remove(1)
            else:
                continue
            
            g = 0
            for num in divided:
                g = math.gcd(g, num)
            if g == 1 and len(divided) >= 1:
                possible = True
                break
            else:
                all_ones = all(x == 1 for x in divided)
                if all_ones and len(divided) >= 1:
                    possible = True
                    break
                
                if len(divided) == 0 and count_d >= 2:
                    possible = True
                    break
        print("Yes" if possible else "No")

if __name__ == "__main__":
    solve()
