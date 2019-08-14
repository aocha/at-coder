# ----- コンテスト後の提出 -----
# Sの長さの最大10^5、子供の移動回数が10^100回なので、
# ・必ず偶数回移動する
# ・全ての子供が充分な移動回数によりRLの往復に収束する。
# 以上からRRLならRに1人、Lに1人。RRRLならRに2人、Lに1人移動する。
# O(n)
S = gets.chomp
n = S.size
res = Array.new(n) { 0 }
cnt = 0

n.times do |i|
  next cnt += 1 if S[i] == 'R'

  res[i - 1] += (cnt + 1) / 2
  res[i] += cnt / 2
  cnt = 0
end

(n - 1).downto(0) do |i|
  next cnt += 1 if S[i] == 'L'

  res[i + 1] += (cnt + 1) / 2
  res[i] += cnt / 2
  cnt = 0
end

puts res.join(' ')
