N = gets.to_i
An = gets.split.map(&:to_i).first(N)
count = 0

while !An.size.zero? do
  prev, current = An.shift(2)

  while prev == current do
    prev = current
    current = An.shift
  end

  break count += 1 unless current

  updown = prev > current ? '>=' : '<='

  loop do
    _next = An.first
    break count += 1 unless _next
    break count += 1 unless current.send(updown, _next)
    current = An.shift
  end
end

puts count
