# ----- コンテスト中の提出 -----
# n = gets.to_i
# hash = Hash.new(0)
# n.times do |i|
#   key = gets.chomp.chars.sort.join
#   hash[key] += 1
# end

# count = 0
# hash.each do |_, v|
#   next unless v > 1
#   next count += 1 if v == 2
#   count += (v * (v - 1)) / 2
# end
# puts count



# ----- コンテスト後の提出 -----
# * 標準形、文字列をソート
# * 文字列ごとの分布を計算、計算量はO(n log n)
# * 組み合わせの計算、二項係数
N = gets.to_i
dist = Hash.new { |h, k| h[k] = 0 }
cnt = 0

N.times { dist[gets.chomp.chars.sort.join] += 1 }

dist.each do |k, v|
  next unless v > 1
  cnt += v * (v - 1) / 2
end

p cnt
