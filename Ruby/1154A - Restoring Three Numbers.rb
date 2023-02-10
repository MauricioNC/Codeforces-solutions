n1, n2, n3, n4 = gets.split.map(&:to_i)

random_nums = [].push(n1, n2, n3, n4)

random_nums = random_nums.sort

last_random_num = random_nums[-1]

for n in 0..2 do
  p last_random_num - random_nums[n]
end
