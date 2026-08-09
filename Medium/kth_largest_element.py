import heapq

class Solution:

    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap=[]
        for num in nums:
            if k > len(heap):
                heapq.heappush(heap, num)
            else:
                heapq.heappushpop(heap,num)   
        return heap[0]    
