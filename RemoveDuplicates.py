n = int(input("Enter number of elements: "))
arr = []

print("Enter elements:")
for i in range(n):
    arr.append(int(input()))

unique = []

for num in arr:
    if num not in unique:
        unique.append(num)

print("Array after removing duplicates:", unique)
