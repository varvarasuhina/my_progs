Program z3;
    Var a, b, t, n, i, j:longint;
        c: string;
  Begin 
       Write('Введите количество тестов: ');
       Read (t);
       Write('Введите длину строки: ');
       Read (n);
       Write('Введите длину подстроки: ');
       Read (a);
       Write('Введите нужное количество различных символов в строке: ');
       Read (b);
       Writeln('*****');
       For i:=1 to t do begin
                       c:=chr(97+i);
                       For j:=1 to n-1 do
                                       c:=c+chr(97+i+j mod b);
                       Writeln('Тест ', i,': ', c)
                         end
  End.