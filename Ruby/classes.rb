class Teste
  def initialize (nome, idade)

    @nome = nome
    @idade = idade
  end

    def ola
      puts "Ola me chamo #{@nome} e tenho #{@idade} anos"
    end
end 

t = Teste.new('Joao', '21')

t.ola
