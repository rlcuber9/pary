Задание 1. Создать четыре потока, инициализирующихся с помощью лямбда-выражений, каждый поток выводит на экран 10 раз заданный символ (А, В, С или в соответственно). Запустить потоки по порядку.
Задание 2. Изменить первую программу таким образом, чтобы второй поток запускался только после завершения работы первого потока, а четвертый поток запускался только после завершения работы всех остальных потоков.
Задание 3. Создать и запустить с помощью цикла с параметром пять потоков, вызывающих метод Print и получающих в качестве имени значение параметра цикла.

    Метод Print должен:
        1) выводить на консоль имя потока и все значения переменной х, изменяющейся с помощью цикла от 1 до 10 с шагом 1;
        2) устанавливать время блокировки потока 500 мс.

Задание 4. Создать три потока:
    • 1-й поток в качестве рабочего элемента принимает статический метод, который запрашивает у пользователя его имя и выводит приветствие с этим именем;
    • 2-й поток связывается с методом общедоступного класса, который вычисляет и выводит квадрат числа.
    • 3-й поток инициализируется с помощью лямбда-выражения, выводящего заданный текст. 
Задать имя каждому потоку. Для каждого потока вывести на экран его имя, числовой идентификатор, приоритет и состояние (для первых двух потоков после их завершения, для третьего до завершения, а потом после). Запустить потоки.
Возможные результаты работы программы показаны на рис.
