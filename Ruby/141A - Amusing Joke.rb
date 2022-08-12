str1 = gets.chop
str2 = gets.chop
str3 = gets.chop

str3 = str3.chars.sort.join

str4 = str1+str2
str4 = str4.chars.sort.join

puts "YES" if str3 == str4
puts "NO" if str3 != str4