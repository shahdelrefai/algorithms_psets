import unittest

def reverse_32bit_binary(n, bits=32):
    if bits == 1:
        return n

    left_half = n >> (bits // 2)
    right_half = n & ((1 << (bits // 2)) - 1)

    reversed_left = reverse_32bit_binary(left_half, bits // 2)
    reversed_right = reverse_32bit_binary(right_half, bits // 2)

    return (reversed_right << (bits // 2)) | reversed_left


def tests():
    input_val = 0b00000000000000000000000000000001
    result = reverse_32bit_binary(input_val)
    print(f"Input:  0b{input_val:032b}")
    print(f"Output: 0b{result:032b}\n")

    input_val = 0b11110000111100001111000011110000
    result = reverse_32bit_binary(input_val)
    print(f"Input:  0b{input_val:032b}")
    print(f"Output: 0b{result:032b}\n")

    input_val = 0b00000111100111101001000100011010
    p=0b01011000100010010111100111100000
    result = reverse_32bit_binary(input_val)
    print(f"Input:  0b{input_val:032b}")
    print(f"Output: 0b{result:032b}")
    print(f"Output: 0b{p:032b}\n")


tests()