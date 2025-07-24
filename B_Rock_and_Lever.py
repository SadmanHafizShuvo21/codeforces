import sys
input = sys.stdin.readline

def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        ans = 0
        mp = [0] * 30
        for x in arr:
            msb = x.bit_length() - 1
            ans += mp[msb]
            mp[msb] += 1
        print(ans)

def main():
    solve()

if __name__ == "__main__":
    main()
