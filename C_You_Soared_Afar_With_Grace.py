import sys

def solve():
    input = sys.stdin.read().split()
    ptr = 0
    t = int(input[ptr])
    ptr += 1
    for _ in range(t):
        n = int(input[ptr])
        ptr +=1
        a = list(map(int, input[ptr:ptr+n]))
        ptr +=n
        b = list(map(int, input[ptr:ptr+n]))
        ptr +=n
        
        a_pos = {a[i]: i+1 for i in range(n)}  # 1-based
        b_pos = {b[i]: i+1 for i in range(n)}
        
        pair = {}
        valid = True
        for x in a:
            i = a_pos[x]
            j = b_pos[x]
            pair[i] = j
        
        # Check pairs
        for i in range(1, n+1):
            if i not in pair:
                valid = False
                break
            j = pair[i]
            if j not in pair or pair[j] != i:
                valid = False
                break
        
        if not valid:
            print(-1)
            continue
        
        # Check loops
        loop_count = 0
        middle = (n + 1) // 2
        for i in range(1, n+1):
            if pair[i] == i:
                loop_count +=1
                if n % 2 == 0 or i != middle:
                    valid = False
        
        if loop_count > 1 or (loop_count == 1 and n %2 ==0):
            valid = False
        
        if not valid:
            print(-1)
            continue
        
        # Build permutation P
        P = [0] * (n + 1)  # 1-based
        visited = set()
        available_pairs = []
        for k in range(1, (n // 2) +1):
            available_pairs.append( (k, n +1 -k) )
        if n % 2 ==1:
            available_pairs.append( (middle,) )
        current_k = 0
        
        for i in range(1, n+1):
            if i not in visited:
                j = pair[i]
                if j ==i:
                    # Handle loop
                    P[i] = middle
                    visited.add(i)
                else:
                    if current_k >= len(available_pairs):
                        valid = False
                        break
                    k_pair = available_pairs[current_k]
                    if len(k_pair) != 2:
                        valid = False
                        break
                    k, l = k_pair
                    P[i] = k
                    P[j] = l
                    visited.add(i)
                    visited.add(j)
                    current_k +=1
        
        if not valid:
            print(-1)
            continue
        
        # Generate swaps
        # Decompose P into cycles and generate swaps
        visited = set()
        swaps = []
        for i in range(1, n+1):
            if i not in visited:
                cycle = []
                current = i
                while current not in visited:
                    visited.add(current)
                    cycle.append(current)
                    current = P[current]
                if len(cycle) > 1:
                    # Generate swaps: swap first element with each of the others
                    for j in range(1, len(cycle)):
                        swaps.append( (cycle[0], cycle[j]) )
        
        print(len(swaps))
        for swap in swaps:
            print(swap[0], swap[1])

if __name__ == '__main__':
    solve()