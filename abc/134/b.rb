N, D = gets.split.map(&:to_i)
# 監視員が監視できる範囲をkとする
k = 1 + D * 2

puts (N + k - 1) / k
