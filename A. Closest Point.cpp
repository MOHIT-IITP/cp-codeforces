// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std
#define ll long long
#define pb push_back
#define MOD 1000000007

def can_add_closest_point(test_cases):
    results = []
    
    for n, points in test_cases:
        possible = False
        
        # Check gaps between consecutive points
        for i in range(n - 1):
            if points[i + 1] - points[i] >= 2:
                possible = True
                break
        
        # Check if we can place before the first point or after the last point
        if not possible:
            if (points[0] > 1) or (points[-1] < 100):
                possible = True
        
        # Append result based on possibility
        results.append("YES" if possible else "NO")
    
    return results
