nguồn tham khảo: https://viblo.asia/p/binary-search-algorithm-4P856xpOZY3

binary_search(A, target):
   lo = 1, hi = size(A)
   while lo <= hi:
      mid = lo + (hi-lo)/2
      if A[mid] == target:
         return mid            
      else if A[mid] < target: 
         lo = mid+1
      else:
         hi = mid-1
            
   // target was not found
   
