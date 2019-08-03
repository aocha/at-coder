n = gets.to_i
arr = gets.split.map(&:to_i).take(n)
cnt = 0

while arr.all?(&:even?) do
  cnt += 1
  arr = arr.map { |i| i / 2 }
end

puts cnt
