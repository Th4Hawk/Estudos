
# Arrays
valores = [10,29,13,13,34,13,22,42,24]

valores.each do |n|
  puts n
end

# Iterador sobre um Hash

filme = 
  { 
    nome: 'Vingadores',
    vendas: 'Duas mil',
    tempo: 'Duas horas'
  }

filme.each_pair do |key, value|
  puts "#{key} #{value}"
end

valores2 = [1,2,3,4,5,6,7,8,9,10,11,12,14]
puts valores2.collect { |n| n%2 == 0 }

