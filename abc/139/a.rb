S = gets.chomp.chars
T = gets.chomp.chars
cnt = 0

3.times do |i|
  cnt += 1 if S[i] == T[i]
end

puts cnt
