def binary_search(array, target):
    low = 0
    high = len(array)
    while high >= low:
        if target in array:
            middle = (high + low) // 2
            middle_value = array[middle]
            if middle_value == target:
                return middle
            elif middle_value > target:
                high = middle - 1
            elif middle_value < target:
                low = middle + 1
    return None

def main():
    print(binary_search([1,2,3], 2))


if __name__ == '__main__':
    main()