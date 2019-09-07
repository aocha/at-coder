N = gets.to_i
A = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)
C = gets.split.map(&:to_i)

ans = 0
prev = 999

A.each do |i|
  current = i-1
  ans += B[i-1]

  if (current - 1) == prev
    ans += C[prev]
  end

  prev = current
end

puts ans
