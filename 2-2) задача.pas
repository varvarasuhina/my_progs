  Var k,n,r,i,j,c,b:longint;
      a, z:string;
Begin
     write('Введите количество чисел: ');
     read(n);
     write('Введите количество нулей: ');
     read(k);                            
     writeln('Введите числа: ');
     c:=0;
     for i:= 1 to n do
     begin
          a:='';
          write(i,')');
          read(j);
          while j>0 do
          begin
            
            // перевод в 2СС
               If j mod 2=0 then begin inc(c);  
                                       a:=a+'0'
                                 end
                            else a:=a+'1';   
               j:=j div 2;
               
          end;
          j:=0;
          If c=k then b:=b+1;
          write(' 2СС -> ');
          reverse(a);
          write(a);  
          write('(количество нулей: ',c,')'); 
          writeln;
          c:=0;
     end;
     writeln;
     writeln ('Ответ: Количество чисел, удовлетворяющих условию, равно ', b);
End.