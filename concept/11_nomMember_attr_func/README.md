# Atributos e funções não membro

Em C++, os "atributos e funções não membros" referem-se a variáveis e funções que não são parte de uma classe, ou seja, são declarados e definidos fora do escopo de qualquer classe. Estes elementos desempenham papéis importantes na linguagem e têm suas próprias características e usos específicos. Vamos explorar cada um deles:

## Atributos Não Membros (Variáveis Globais)

### Definição:

Atributos não membros são variáveis declaradas fora do escopo de qualquer classe. Eles são acessíveis de qualquer parte do programa onde seu escopo (ou visibilidade) permite.
São comumente chamados de variáveis globais quando declarados fora de qualquer função ou classe.

### Características:

Escopo Global: Podem ser acessados de qualquer parte do código após sua declaração.
Vida Útil: Têm duração de vida do programa inteiro, sendo criados quando o programa inicia e destruídos quando o programa termina.

### Usos e Cautelas:

Úteis para dados que precisam ser acessados por múltiplas funções ou classes sem passá-los explicitamente.
Devem ser usados com cautela devido ao risco de poluir o espaço de nomes global e causar dependências e efeitos colaterais indesejados.

## Funções Não Membros

### Definição:

Funções não membros são funções definidas fora do escopo de qualquer classe. Elas não têm acesso direto aos membros privados de uma classe a menos que recebam um objeto da classe como argumento.

### Características:

Independência de Classes: Podem ser usadas sem criar um objeto de uma classe específica.
Escopo Global ou Limitado: Podem ser declaradas globalmente ou dentro de um namespace para limitar seu escopo.

### Usos:

Funções utilitárias ou helper que são relevantes em vários contextos, mas não estão logicamente ligadas a uma classe específica.
Funções de sobrecarga de operadores para tipos de dados personalizados podem ser implementadas como funções não membros.

### Funções Amigas (Friend Functions):

Uma função não membro pode ser declarada como "amiga" de uma classe (friend), o que lhe dá acesso aos membros privados e protegidos daquela classe.
Isso é útil para operações que requerem acesso íntimo aos detalhes internos da classe, mas que não são consideradas parte da interface da classe.

## Boas Práticas

O uso de variáveis globais deve ser minimizado, pois elas podem levar a código difícil de manter e testar.
Funções não membros devem ser usadas quando uma operação não precisa de acesso aos membros internos de uma classe ou quando a operação faz sentido fora do contexto de qualquer classe.
O encapsulamento é uma prática importante em C++. Portanto, sempre que possível, mantenha os dados e operações relacionados dentro de classes para promover a modularidade e a reutilização do código.
Em resumo, atributos e funções não membros em C++ oferecem flexibilidade e funcionalidade úteis para o desenvolvimento de software, mas devem ser usados de forma ponderada e com consideração pelos princípios de design de software, como encapsulamento e separação de preocupações.