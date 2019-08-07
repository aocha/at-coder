k, s = gets.split.map(&:to_i)
cnt = 0

0.upto(k) do |x|
  0.upto(k) do |y|
    z = s - (x + y)
    cnt += 1 if 0 <= z && z <= k
  end
end

puts cnt
