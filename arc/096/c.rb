a, b, c, x, y = gets.split.map(&:to_i)

res = Float::INFINITY
(10**5).times do |i|
  xy = i + 1
  sum = xy * 2 * c + [0, x - xy].max * a + [0, y - xy].max * b
  res = sum if res > sum
end
puts res
