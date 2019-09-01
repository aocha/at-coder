T = gets.to_i
H = gets.split.map(&:to_i)
cnt = 0
max = 0

H.each_cons(2) do |prev, _next|
  cnt += 1 if prev >= _next

  max = cnt if max < cnt

  cnt = 0 if prev < _next
end

puts max
