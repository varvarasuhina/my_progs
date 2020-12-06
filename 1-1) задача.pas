Program z1;
    Var N: integer;
  Begin
       Writeln('Введите количество кг: ');
       Read(N);
       If N>3 then 
                 If N mod 2=0 then writeln('Можно поделить') else writeln('Поделить нельзя')
              else writeln('Поделить нельзя');
  End.