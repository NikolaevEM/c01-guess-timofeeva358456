# ЛР С1: Угадайка

В этой работе наша цель – познакомиться с некоторыми управляющими 
конструкциями языка Си, а также простым вводом и выводом данных. 
Для этого вы реализуете простую текстовую игру «Угадайка».

## Правила игры

Программа просит пользователя загадать число от 0 до 1024 и пытается 
его угадать, выводя на экран свои числа-догадки. Пользователь должен 
отвечать `1`, если его число больше показанного, `-1`, если меньше, и `0`, 
если программа угадала. 
Поскольку при помощи таких вопросов интервал возможных чисел  можно делить 
каждый раз пополам, программа должна угадать любое число не более чем за 
10 попыток. 

## Болванка

Находится в файле `guess.cpp`. Надо его дописать.

## Что делать

Открывать надо файл `guess.sln`, при этом в  Visual Studio откроется решение,
содержащее проект в папке `guess`, в котором единственный файл исходного кода
`guess.cpp`. Менять надо `guess.cpp`.

1. Программа, записанная в болванке, спрашивает 1 раз, получает ответ и спрашивает 
   второй раз, после чего завершается. Напишите правильный цикл, чтобы она 
   спрашивала, пока не угадает.
2. Добавьте печать числа попыток, чтобы диалог выглядел, как показано ниже.
3. a) какое число ваша программма не угадает за 10 попыток,  если выбрать интервал допустимых чисел от 1 до 1025 включительно. 
   Ответ: последнее число 1025.
   б) есть ли такое число, если интервалт от 1 до 1024 включительно.
   Ответ: последнее число 1024.
4. Переделайте ввод-вывод с `cout/cin` на `printf/scanf`.
5. Переделайте `if` на `switch/case`.

```
    Загадайте число от 0 до 1024, я попытаюсь его угадать.
    Отвечайте 1, если загаданное число больше,
    -1, если меньше, и 0, если я угадаю.
    Попытка 1: 512? -1
    Попытка 2: 256?  1
```
и т.д.


## Оценивание

|Пункт |  1  |  2  |  3  |  4  |  5  | всего |
|------|-----|-----|-----|-----|-----|-------|
|Балл  |  1  |  1  |  1  | 1   | 1   |   5   |
