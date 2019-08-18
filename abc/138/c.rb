# N個の具材 (2 < N < 50)
# i個目 (1 < i < N) の具材の価値はvi (1 <= vi <= 1000)
# 2個の具材を入れるとあらたに (x + y) / 2 の価値を持つ具材ができる
# 具材の合成を N - 1 回行い最後に残った具材の価値が最大になる値を求める

# 紙に書いたら値の少ない方から足して割るのが最大値になるみたいだったのでそうする
N = gets.to_i
V = gets.split.map(&:to_i).sort!

(N - 1).times do |_|
  v1, v2 = V.shift(2)
  v = (v1 + v2) / 2.to_f
  V.unshift(v)
end

puts V.first
