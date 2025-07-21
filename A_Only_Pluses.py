def solve():
    arr = list(map(int, input().split()))
    
    for _ in range(5):
        arr.sort()
        arr[0] += 1
    
    print(arr[0] * arr[1] * arr[2])

def main():
    import sys
    input = sys.stdin.readline
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
