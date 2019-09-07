# B[i] >= max(A[i], A[i+1])
N = gets.to_i
B = gets.split.map(&:to_i)

ans = Array.new(N, 0)
ans[0] = B[0]

(N - 1).times do |i|
  ans[i] = [ans[i], B[i]].min
  ans[i+1] = B[i]
end

puts ans.inject(:+)
