from solutions.solution import Solution

def run_test(nums, k, expected):
    sol = Solution()
    result = sol.findKthLargest(nums, k)
    print(f"Input: {nums}, k = {k}")
    print(f"Expected: {expected}, Got: {result}")
    return result == expected

def main():
    fails = 0
    fails += not run_test([3,2,1,5,6,4], 2, 5)
    fails += not run_test([3,2,3,1,2,4,5,5,6], 4, 4)
    fails += not run_test([1], 1, 1)
    fails += not run_test([7,10,4,3,20,15], 3, 10)
    fails += not run_test([5,5,5,5,5], 2, 5)
    fails += not run_test([-1,-2,-3,-4,-5], 1, -1)
    fails += not run_test([2,1], 2, 1)
    fails += not run_test([7,6,5,4,3,2,1], 5, 3)

    if fails:
        print("❌ Some tests failed.")
        exit(1)
    else:
        print("✅ All tests passed.")

if __name__ == "__main__":
    main()
