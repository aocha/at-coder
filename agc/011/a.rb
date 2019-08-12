N, C, K = gets.split.map(&:to_i)
Ti = []
N.times { Ti << gets.to_i }
Ti.sort!
count = 0

while !Ti.size.zero? do
  bus = []
  bus << Ti.shift
  limit = bus.first + K

  while bus.size < C do
    current = Ti.first

    break unless current
    break if current > limit

    bus << Ti.shift
  end

  count += 1
end

p count
