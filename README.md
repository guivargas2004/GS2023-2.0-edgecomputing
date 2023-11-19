# GS2023-2.0-edgecomputing
SMARTMED + EDGE COMPUTING

João Pedro Marques rodrigues RM 98307
Guilherme Faustino Vargas RM 98278

 OBS: O link do vídeo e a demonstração do projeto no wokwi encontram-se no final do artigo!
 
Em parceria com a Hapvida NotreDame Intermédica, FIAP propôs aos alunos que solucionassem ou diminuíssem problemas relacionados a área da saúde, utilizando a tecnologia.
Com isso, decidimos trabalhar com a superlotação nos hospitais. Sabemos que, infelizmente, isso é algo que ocorre constantemente no Brasil, principalmente em hospitais públicos.

Agora que já entendemos sobre o problema abordado, conheça a SMARTMED e sua solução!


Somos a SmartMed! Uma empresa que busca revolucionar a área da saúde brasileira utilizando a tecnologia! Para isso, desenvolvemos o app de nossa empresa, o app SmartMed, uma solução digital que visa combater a superlotação nos hospitais brasileiros, proporcionando uma abordagem eficiente e rápida para a busca de atendimento médico e solicitação de ambulâncias. O objetivo principal é melhorar o acesso à saúde, reduzindo as filas nos hospitais e agilizando o atendimento de emergência.

Aqui estão 5 perguntas indispensáveis para entender como funciona o app de nossa empresa:
1-	O que é o SmartMed?
 Um aplicativo que pode ser instalado tanto em computadores, mas principalmente em Smartphones que busca ajudar a área da saúde brasileira de forma digital.
 
2-	Pra que serve?
O aplicativo busca diminuir grandemente a superlotação nos hospitais.
A pandemia abriu nossos olhos quanto a isso e vamos acabar/diminuir de uma vez por todas com o sofrimento diário de milhões de brasileiros.

3-	Todos podem usar?
Por se tratar da área da saúde, onde em determinadas ocasiões a vida das pessoas pode estar em alto risco, o SmartMed é recomendado para maiores de 18 anos.
OBS: Isso não quer dizer que menores de idade não podem usá-lo em casos de emergência!

Para responder as outras duas perguntas e finalizar a apresentação de nosso aplicativo é necessário ver o protótipo do app, que etsá em um dos arquvos do repositório:
 
4-	Como funciona?
Para realizar Login em nosso app, o usuário deve se identificar com o número de seu CPF. É de extrema importância que o usuário esteja com a localização de seu aparelho ligada, para que o app possa funcionar da melhor maneira possível. Após realizar essas instruções, o usuário é direcionado para a tela que deixamos acima, nela, você consegue ver através do mapa os hospitais mais próximos de você e a disponibilidade dos mesmos pela barra de porcentagem. O vermelho mostra quanto o hospital está lotado, e o verde quantas pessoas podem ser atendidas no mesmo.
Decidimos deixar o layout de forma simples, para que pessoas em momentos de emergência e nervosismo não fiquem confusas quanto ao uso do app.
  Quando observamos o canto superior direito da tela, vemos um ícone de uma ambulância. Quando o usuário clica no ícone, é possível ver as ambulâncias mais próximas de você.
Além de tudo, o app funciona como um Uber de ambulâncias, você consegue solicitar as mesmas pelo próprio aplicativo.
É possível observar no mapa que existem dois tipos de ícones de ambulâncias: As verdes, que representam as ambulâncias públicas (que podem ser solicitadas discando 192) mas que muitas vezes demoram para chegar, e, em casos extremos não são cabíveis.
Também existem os ícones vermelhos, que representam as ambulâncias privadas. As mesmas custam em média 200 reais para serem solicitadas, porém nós do SmartMed, em parceria com o Governo de São Paulo que dará todo o suporte necessário para a implantação do app nos hospitais e também para as ambulâncias privadas, cobraremos apenas um ticket de R$23,90. As ambulâncias privadas visam chegar rapidamente e atender o usuário imediatamente quando solicitadas.

5-	Quais são os Benefícios?
Diminuir a lotação dos hospitais para que profissionais possam trabalhar e dar a máxima atenção a todos que necessitam.
Facilitar a vida de pessoas que constantemente tem que ir a hospitais e pronto - socorros realizar exames ou por alguma emergência e, geralmente se deparam com filas gigantes.
Facilitar a solicitação de ambulâncias com preços acessíveis e com a localização das mesmas.

SMARTMED + EDGE COMPUTING:
Como mostra o artigo acima, trabalhamos com um app que exibe a lotação dos hospitais das regiões de seus usuários.
Para simular tal funcionamento, desenvolvemos um circuito utilizando componentes como:
ESP 32;
Sensor Ultrassonico;
LED´s 9verde e vermelho);
Resistores;
Fios, que interligam todos os componentes.

O circuito é interligado ao sistema de hopsitais/pronto-socorros parceiros e funcioina da seguinte forma:
o sensor ultrassonico simula a quantidade de pacientes que estão sendo atendidos no hispotal no momento, mostrando a superlotação ou não do mesmo.
Se o valor obtido pelo sensor ultrassonico de acordo com os pacientes encontrados em cada hospital for inferior á 250, a LED verde estará ligada, informando ao aplicativo que ainda á possível atender pessoas da forma correta naquele hospital, ou seja, ele NÃO está superlotado.
Se op valor for superior á 250, a LED vermelha acende, informando o app de que tal hospital está possivelmente superlotado.

Fizemos um circuito simples, mas que é 100% integrado á ideia SMARTMED de solução, basicamente fornecendo informações cruciais para o funcionamento do app. PARA ENTENDER DE FORMA PRÁTICA COMO FUNCIONA O CIRCUITO, VEJA O VÍDEO ABAIXO:
Link do vídeo:

Link para teste no Wokwi:
 https://wokwi.com/projects/378844628209643521
