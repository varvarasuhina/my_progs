program z4;
    var i,j,na,nb,k,m:integer;
        a:array [1..10] of integer;
        b:array [1..10] of integer;
  begin
    //считываем размерность
    Write(' ');
    read (na,nb);
    Write(' ');
    read(k,m);
    //считаваем массив A
    Write('Массив А: ');
    for i:=1 to na do
      read (a[i]);
    //считаваем массив B
    Write('Массив B: ');
    for i:=1 to nb do
      read (b[i]);
    //Основное условие задачи
    if a[k]<b[nb-m+1] then writeln ('Yes')
                      else writeln ('No');
   end.

