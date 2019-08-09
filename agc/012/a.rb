n = gets.to_i
powers = gets.split.map(&:to_i).sort
sum = 0

n.times do
  a, _ = powers.pop(2)
  sum += a
end

puts sum
