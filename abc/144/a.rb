a, b = gets.split.map(&:to_i)

if a >= 10 || b >= 10
  puts -1
else
  puts a * b
end
