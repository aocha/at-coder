a = gets.to_i
b = gets.to_i
c = gets.to_i
x = gets.to_i

count = 0

0.upto(a) do |i|
  0.upto(b) do |j|
    0.upto(c) do |k|
      sum = i * 500 + j * 100 + k * 50
      count += 1 if sum == x
    end
  end
end

puts count
