def interleave_arrays(array1: list, array2: list) -> list:
    merged = []
    i = 0
    j = 0
    length = min(len(array1), len(array2))

    # Interleave elements from both arrays
    while i < length and j < length:
        merged.append(array1[i])
        merged.append(array2[j])
        i += 1
        j += 1

    # Append any remaining elements of array1 (if any)
    while i < len(array1):
        merged.append(array1[i])
        i += 1

    # Append any remaining elements of array2 (if any)
    while j < len(array2):
        merged.append(array2[j])
        j += 1

    return merged

print(interleave_arrays([1, 2, 5], [6, 3, 9]))

