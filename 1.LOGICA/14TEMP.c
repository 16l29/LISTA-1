14. Leia uma temperatura a qual o usu�rio ir� digitar o Valor e a escala atual: (Fahrenheit,
Celsius, Kelvin), e informar a escala para qual deseja converter.
a. Celsius para Fahrenheit: F = C*(1,8) + 32
b. Fahrenheit para Celsius: C = (F ? 32) / 1,8
c. Kelvin para Celsius: C = K ? 273,15
d. Celsius para Kelvin: K = C + 273,15
e. Kelvin para Fahrenheit: F = 1,8(K-273) + 32

/*
1.Declarar a vari�vel TEMP
2.Declarar a vari�vel TEMPNOVA
3.Declarar a vari�vel ESCALATUAL
4.Declarar a vari�vel ESCALANOVA
5.Exibir a mensagem "Temperatura?"
6.Ler o valor de TEMP
7.Exibir a mensagem "Escala (C, F, K):"
8.Ler o valor de ESCALATUAL
9.Exibir a mensagem "Converter para (C, F, K):"
10.Ler o valor de ESCALANOVA
11.Verificar se ESCALATUAL � igual a ESCALANOVA
12.Se ESCALATUAL for igual a ESCALANOVA, atribuir o valor de TEMP � vari�vel TEMPNOVA
13.Se ESCALATUAL for 'C' e ESCALANOVA for 'F', calcular TEMPNOVA como ((TEMP * 1.8) + 32)
14.Se ESCALATUAL for 'C' e ESCALANOVA for 'K', calcular TEMPNOVA como (TEMP + 273.15)
15.Se ESCALATUAL for 'K' e ESCALANOVA for 'F', calcular TEMPNOVA como ((1.8 * (TEMP - 273)) + 32)
16.Se ESCALATUAL for 'K' e ESCALANOVA for 'C', calcular TEMPNOVA como (TEMP - 273.15)
17.Se ESCALATUAL for 'F' e ESCALANOVA for 'C', calcular TEMPNOVA como ((TEMP - 32) / 1.8)
18.Se ESCALATUAL for 'F' e ESCALANOVA for 'K', calcular TEMPNOVA como (((TEMP - 32) * (5.0 / 9.0)) + 273.15)
19.Se nenhuma das condi��es acima for atendida, exibir a mensagem "Inv�lido!"
20.Encerrar o programa com erro 1 se as escalas forem inv�lidas
21.Exibir a temperatura convertida com a mensagem "Temperatura Convertida: %.2f%c", substituindo os valores pelas vari�veis TEMPNOVA e ESCALANOVA
*/