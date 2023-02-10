red, blue = gets.split.map(&:to_i)

diff = 0
samePair = 0

while red > 0 && blue >= 1
  diff += 1
  red -= 1
  blue -= 1
end

samePair = blue / 2 if blue >= 2
samePair = red / 2 if red >= 2

p diff
p samePair
