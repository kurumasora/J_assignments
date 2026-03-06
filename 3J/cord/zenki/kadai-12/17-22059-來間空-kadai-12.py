# Variables
x = 10
y = 10

# Check if values are the same
if x == y:
    print("Values are the same")
    print("x id:", id(x))
    print("y id:", id(y))
else:
    print("Values are different")

# Lists
list1 = [1, 2, 3]
list2 = list1

# Check if identifiers are the same
if list1 is list2:
    print("Identifiers are the same")
    print("list1 id:", id(list1))
    print("list2 id:", id(list2))

# Change value in list1
list1[0] = 100

# Check if value in list2 also changes
print("list2:", list2)

# Copy lists
list3 = list1.copy()

# Check if identifiers are different
if list1 is not list3:
    print("Identifiers are different")
    print("list1 id:", id(list1))
    print("list3 id:", id(list3))

# Change value in list1
list1[1] = 200

# Check if value in list3 remains the same
print("list3:", list3)