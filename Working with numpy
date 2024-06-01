#using numpy
#numpy is a python library used for working with arrays
import numpy as tg

a = tg.array([[1,2,3,4], [5,6,7,8]])

# shape of an array
print(a.shape)

#reshapping an array
b = tg.array([1,2,3,4,5,6,7,8,9])
print(b.reshape(3,3))
print(type(b))

#shaping multidimensional arrays into 1D arrays(flattening array)
c = tg.array([[1,2,3,4], [5,6,7,8]])
print(c.shape)
print("The array is a " +str(c.ndim)+ "D")

d = c.reshape(-1)
print(d)
print(d.shape)

e = tg.array([[[1,2,3,4], [5,6,7,8]], [[0,9,8,7], [6,5,4,3]]])
print(e)
print("The array is a " +str(e.ndim)+ "D")

#Accessing elements in a 2D array
f = tg.array([[1,2,3,4], [5,6,7,8]])

print("The third element in the second column is " + str(f[1,2]))

#iteration in a 2D using for loop
g = tg.array([[1,2,3,4], [5,6,7,8]])

for i in g:
    print(i)
    
for i in g:
    for j in i:
        print (j)

#Slicing of elements in an 1D array
h = tg.array([0,1,2,3,4,5,6,7,8,9,10])
print(h)
print("Slicing from index 3 and index 7 we get " +str(h[3:7]))
print("Element at index 5 is " +str(h[5]))
print("The elements before index 5 are " +str(h[:5]))
print("The elements from index 5 onwards are " +str(h[6:]))
#using steps to jump
print("Jumping in steps of 2 from index 0 and index 8 becomes " + str(h[0:8:2]))

# slicing of elements in a 2D array
i = tg.array([[1,2,3,4,5],[6,7,8,9,10]])
print("Slice from index 1 to index 4 in the second column becomes " +str(i[1,1:4]))
print("Slice from index 0 to index 4 in the first column becomes " +str(i[0,0:4]))

# Searching for an element in an array
j = tg.array([7,3,4,9,1,2,6,0,8,5])

x = tg.where(j==1)
print("The scrambled position of a is at index " +str(x))
y = tg.where(j%2==0)
print("The index position for even integers are at " +str(y))

#sorting of elements in an array
print(tg.sort(j))

names = tg.array(['john', 'alex','ian','michael','henry', 'lagat'])
print(names)
print("Sorted in alphabetical order becomes \n" +str(tg.sort(names)))
















