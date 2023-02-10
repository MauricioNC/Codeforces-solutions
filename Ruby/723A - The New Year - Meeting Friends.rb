f1, f2, f3 = gets.split.map(&:to_i) #gets the three friends distance

arr = [].push(f1, f2, f3) # push the three distances into an array called arr
arr = arr.sort # returns a new sorted arry, so store the new sorted array in the same variable arr

p ((arr[1] - arr[0]) +(arr[-1] - arr[1])) # in a sorted array of three elements, the mid element that is the mid friend will be the best distance.
