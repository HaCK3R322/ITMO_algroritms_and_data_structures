# Оглавление
- [A. Агроном любитель](#агроном-любитель)
- [C. Конфигурационный файл](#конфигурационный файл)
- D. Профессор Хаос
- E. Коровы в стойла
- F. Число
- H. Магазин
- L. Минимум на отрезке

# [A. Агроном-любитель](https://github.com/HaCK3R322/ITMO_algroritms_and_data_structures/blob/main/A.cpp)
###### агроном-любитель

|УСЛОВИЕ|ЗНАЧЕНИЕ|
|------------------------|--------------|
| Ограничение времени | 2 секунды |
| Ограничение памяти | 64Mb |
| Ввод | стандартный ввод или agro.in |
| Вывод | стандартный вывод или agro.out |

Городской школьник Лёша поехал на лето в деревню и занялся выращиванием цветов. Он посадил n цветков вдоль одной длинной прямой грядки, и они успешно выросли. Лёша посадил множество различных видов цветков, i-й от начала грядки цветок имеет вид ai, где ai "— целое число, номер соответствующего вида в «Каталоге юного агронома».

Теперь Лёша хочет сделать фотографию выращенных им цветов и выложить ее в раздел «мои грядки» в социальной сети для агрономов «ВКомпосте». На фотографии будет виден отрезок из одного или нескольких высаженных подряд цветков.

Однако он заметил, что фотография смотрится не очень интересно, если на ней много одинаковых цветков подряд. Лёша решил, что если на фотографии будут видны три цветка одного вида, высаженные подряд, то его друзья — специалисты по эстетике цветочных фотографий — поставят мало лайков.

Помогите ему выбрать для фотографирования как можно более длинный участок своей грядки, на котором нет трех цветков одного вида подряд.

### Формат ввода
В первой строке содержится целое число n (1 ≤ n ≤ 200 000) — количество цветов на грядке.

Во второй строке содержится n целых чисел ai (1 ≤ ai ≤ 109), обозначающих вид очередного цветка. Одинаковые цветки обозначаются одинаковыми числами, разные — разными.

### Формат вывода
Выведите номер первого и последнего цветка на самом длинном искомом участке. Цветки нумерются от 1 до n.

Если самых длинных участков несколько, выведите участок, который начинается раньше.
____
# [C. Конфигурационный файл](https://github.com/HaCK3R322/ITMO_algroritms_and_data_structures/blob/main/C.cpp)
###### конфигурационный файл

|УСЛОВИЕ|ЗНАЧЕНИЕ|
|------------------------|--------------|
| Ограничение времени | 1 секунда |
| Ограничение памяти | 64Mb |
| Ввод | стандартный ввод |
| Вывод | стандартный вывод |

Вадим разрабатывает парсер конфигурационных файлов для своего проекта. Файл состоит из блоков, которые выделяются с помощью символов «{» — начало блока, и «}» — конец блока. Блоки могут вкладываться друг в друга. В один блок может быть вложено несколько других блоков.

В конфигурационном файле встречаются переменные. Каждая переменная имеет имя, которое состоит из не более чем десяти строчных букв латинского алфавита. Переменным можно присваивать числовые значения. Изначально все переменные имеют значение 0.

Присваивание нового значения записывается как <variable>=<number>, где <variable> — имя переменной, а <number> — целое число, по модулю не превосходящее 109. Парсер читает конфигурационный файл построчно. Как только он встречает выражение присваивания, он присваивает новое значение переменной. Это значение сохраняется до конца текущего блока, а затем восстанавливается старое значение переменной. Если в блок вложены другие блоки, то внутри тех из них, которые идут после присваивания, значение переменной также будет новым.

Кроме того, в конфигурационном файле можно присваивать переменной значение другой переменной. Это действие записывается как <variable1>=<variable2>. Прочитав такую строку, парсер присваивает текущее значение переменной variable2 переменной variable1. Как и в случае присваивания константного значения, новое значение сохраняется только до конца текущего блока. После окончания блока переменной возвращается значение, которое было перед началом блока.

Для отладки Вадим хочет напечатать присваиваемое значение для каждой строки вида <variable1>=<variable2>. Помогите ему отладить парсер.

### Формат ввода
Входные данные содержат хотя бы одну и не более 105 строк. Каждая строка имеет один из четырех типов:

- { — начало блока;
- } — конец блока;
- \<variable\>=\<number\> — присваивание переменной значения, заданного числом;
- \<variable1\>=\<variable2\> — присваивание одной переменной значения другой переменной. Переменные <variable1> и <variable2> могут совпадать.
Гарантируется, что ввод является корректным и соответствует описанию из условия. Ввод не содержит пробелов.
  
### Формат вывода
Для каждой строки типа <variable1>=<variable2> выведите значение, которое было присвоено.

### Пример
##### **Ввод**
a=b  
b=123  
var=b  
b=-34  
{  
c=b  
b=1000000000  
d=b  
{  
a=b  
e=var  
}  
}  
b=b  
###### **Вывод**
0  
123  
-34  
1000000000  
1000000000  
123  
-34  
____
# [D. Профессор Хаос](https://github.com/HaCK3R322/ITMO_algroritms_and_data_structures/blob/main/D.cpp)

|УСЛОВИЕ|ЗНАЧЕНИЕ|
|------------------------|--------------|
| Ограничение времени | 1 секунда |
| Ограничение памяти | 64Mb |
| Ввод | стандартный ввод |
| Вывод | стандартный вывод |

В секретной лаборатории профессора Хаоса проходит эксперимент по выращиванию особо опасных бактерий. В начале первого дня эксперимента у Хаоса имеется a особо опасных бактерий.

Каждый день эксперимента устроен следующим образом. Рано утром профессор достает из контейнера все свои бактерии и помещает их в инкубатор, где бактерии начинают делиться. Вместо каждой бактерии образуется b новых бактерий.

После извлечения бактерий из инкубатора c из них используются для проведения различных опытов и затем уничтожаются. Если после извлечения из инкубатора имеется менее c бактерий, для проведения опытов используются все имеющиеся бактерии, и эксперимент заканчивается.

Оставшиеся бактерии в конце дня необходимо поместить в контейнер и продолжить использовать в эксперименте. Однако в контейнер можно поместить не более d бактерий, поэтому если число оставшихся бактерий больше d, то в контейнер помещаются d бактерий, а остальные уничтожаются.

Теперь профессор Хаос хочет выяснить, сколько особо опасных бактерий будет у него в контейнере после k-го дня эксперимента. Помогите ему найти ответ на этот вопрос.
  
### Формат ввода
В единственной строке входного файла содержится пять целых чисел a, b, c, d и k (1 ≤ a, b ≤ 1000, 0 ≤ c ≤ 1000, 1 ≤ d ≤ 1000, a ≤ d, 1 ≤ k ≤ 1018).

### Формат вывода
Выведите одно число — количество бактерий у Хаоса к концу k-го дня. Если эксперимент завершится в k-й день или ранее, выведите число 0.

### Пример
##### **Ввод**
1 3 1 5 2
##### **Вывод**
5
##### **Ввод**
1 2 0 4 3
##### **Вывод**
4
### Пример
##### **Ввод**
1 2 3 5 2
##### **Вывод**
0
____
# [E. Коровы в стойла](https://github.com/HaCK3R322/ITMO_algroritms_and_data_structures/blob/main/E.cpp)

|УСЛОВИЕ|ЗНАЧЕНИЕ|
|------------------------|--------------|
| Ограничение времени | 0.1 секунды |
| Ограничение памяти | 256Mb |
| Ввод | стандартный ввод |
| Вывод | стандартный вывод |

На прямой расположены стойла, в которые необходимо расставить коров так, чтобы минимальное расcтояние между коровами было как можно больше.
  
### Формат ввода
В первой строке вводятся числа N (2 < N ≤ 105) – количество стойл и K (1 < K < N ) – количество коров. Во второй строке задаются N натуральных чисел в порядке возрастания – координаты стойл (координаты не превосходят 109).

### Формат вывода
Выведите одно число – наибольшее возможное допустимое расстояние.
                                                                                
### Пример
##### **Ввод**
6 3  
2 5 7 11 15 20
##### **Вывод**
9
##### **Ввод**
5 3  
1 2 3 100 1000
##### **Вывод**
99
____
# [F. Число](https://github.com/HaCK3R322/ITMO_algroritms_and_data_structures/blob/main/F.cpp)

|УСЛОВИЕ|ЗНАЧЕНИЕ|
|------------------------|--------------|
| Ограничение времени | 1 секунды |
| Ограничение памяти | 64Mb |
| Ввод | стандартный ввод |
| Вывод | стандартный вывод |

Вася написал на длинной полоске бумаги большое число и решил похвастаться своему старшему брату Пете этим достижением. Но только он вышел из комнаты, чтобы позвать брата, как его сестра Катя вбежала в комнату и разрезала полоску бумаги на несколько частей. В результате на каждой части оказалось одна или несколько идущих подряд цифр.

Теперь Вася не может вспомнить, какое именно число он написал. Только помнит, что оно было очень большое. Чтобы утешить младшего брата, Петя решил выяснить, какое максимальное число могло быть написано на полоске бумаги перед разрезанием. Помогите ему!

### Формат ввода
Входной файл содержит одну или более строк, каждая из которых содержит последовательность цифр. Количество строк во входном файле не превышает 100, каждая строка содержит от 1 до 100 цифр. Гарантируется, что хотя бы в одной строке первая цифра отлична от нуля.
                                                                                
### Формат вывода
Выведите в выходной файл одну строку — максимальное число, которое могло быть написано на полоске перед разрезанием.
                                                                                
### Пример
##### **Ввод**
2  
20  
004  
66  
##### **Вывод**
66220004
##### **Ввод**
3
##### **Вывод**
3
____
# [H. Магазин](https://github.com/HaCK3R322/ITMO_algroritms_and_data_structures/blob/main/H.cpp)

|УСЛОВИЕ|ЗНАЧЕНИЕ|
|------------------------|--------------|
| Ограничение времени | 2 секунды |
| Ограничение памяти | 64Mb |
| Ввод | стандартный ввод |
| Вывод | стандартный вывод |

У Билла большая семья: трое сыновей, девять внуков. И всех надо кормить. Поэтому Билл раз в неделю ходит в магазин.

Однажды Билл пришел в магазин и увидел, что в магазине проводится акция под названием «каждый k-й товар бесплатно». Изучив правила акции, Билл выяснил следующее. Пробив на кассе товары, покупатель получает чек. Пусть в чеке n товаров, тогда n/k округленное вниз самых дешевых из них достаются бесплатно.

Например, если в чеке пять товаров за 200, 100, 1000, 400 и 100 рублей, соответственно, и k = 2, то бесплатно достаются оба товара по 100 рублей, всего покупатель должен заплатить 1600 рублей.

Билл уже выбрал товары, и направился к кассе, когда сообразил, что товары, которые он хочет купить, можно разбить на несколько чеков, и благодаря этому потратить меньше денег.

Помогите Биллу выяснить, какую минимальную сумму он сможет заплатить за выбранные товары, возможно разбив их на несколько чеков.

### Формат ввода
Первая строка входного файла содержит два целых числа n, k (1 ≤ n ≤ 100 000, 2 ≤ k ≤ 100) — количество товаров, которые хочет купит Билл и параметр акции «каждый k-й товар бесплатно».

Следующая строка содержит n целых чисел ai (1 ≤ ai ≤ 10 000) — цены товаров, которые покупает Билл.
                                                                                
### Пример
##### **Ввод**
5 2
200 100 1000 400 100
##### **Вывод**
1300
____
# [J. Гоблины и очереди](https://github.com/HaCK3R322/ITMO_algroritms_and_data_structures/blob/main/J.cpp)

|УСЛОВИЕ|ЗНАЧЕНИЕ|
|------------------------|--------------|
| Ограничение времени | 0.6 секунды |
| Ограничение памяти | 64Mb |
| Ввод | стандартный ввод |
| Вывод | стандартный вывод |

Гоблины Мглистых гор очень любях ходить к своим шаманам. Так как гоблинов много, к шаманам часто образуются очень длинные очереди. А поскольку много гоблинов в одном месте быстро образуют шумную толку, которая мешает шаманам проводить сложные медицинские манипуляции, последние решили установить некоторые правила касательно порядка в очереди.

Обычные гоблины при посещении шаманов должны вставать в конец очереди. Привилегированные же гоблины, знающие особый пароль, встают ровно в ее середину, причем при нечетной длине очереди они встают сразу за центром.

Так как гоблины также широко известны своим непочтительным отношением ко всяческим правилам и законам, шаманы попросили вас написать программу, которая бы отслеживала порядок гоблинов в очереди.

### Формат ввода
В первой строке входных данный записано число N (1 ≤ N ≤ 105)  количество запросов. Следующие N строк содержат описание запросов в формате:

- +i  гоблин с номером i (1 ≤ i ≤ N) встаёт в конец очереди.
- *i  привилегированный гоблин с номером i встает в середину очереди.
- -  первый гоблин из очереди уходит к шаманам. Гарантируется, что на момент такого запроса очередь не пуста.
  
### Формат вывода
Для каждого запроса типа - программа должна вывести номер гоблина, который должен зайти к шаманам.

### Пример
##### **Ввод**
7  
+ 1  
+ 2  
-  
+ 3  
+ 4  
-  
-  
##### **Вывод**
1  
2  
3  
____
# [L. Минимум на отрезке](https://github.com/HaCK3R322/ITMO_algroritms_and_data_structures/blob/main/L.cpp)

|УСЛОВИЕ|ЗНАЧЕНИЕ|
|------------------------|--------------|
| Ограничение времени | 0.5 секунды |
| Ограничение памяти | 64Mb |
| Ввод | стандартный ввод или agro.in |
| Вывод | стандартный вывод или agro.out |

Рассмотрим последовательность целых чисел длины N. По ней с шагом 1 двигается «окно» длины K, то есть сначала в «окне» видно первые K чисел, на следующем шаге в «окне» уже будут находиться K чисел, начиная со второго, и так далее до конца последовательности. Требуется для каждого положения «окна» определить минимум в нём.

### Формат ввода
В первой строке входных данных содержатся два числа N и K (1 ≤ N ≤ 150000, 1 ≤ K ≤ 10000, K ≤ N) – длины последовательности и «окна», соответственно. На следующей строке находятся N чисел – сама последовательность. Числа последовательности не превосходят по модулю 105.
                                                                                
### Формат вывода
Выходые данные должны содержать N - K + 1 строк – минимумы для каждого положения «окна».
                                                                                

### Пример
##### **Ввод**
7 3  
1 3 2 4 5 3 1
##### **Вывод**
1 2 2 3 1  
