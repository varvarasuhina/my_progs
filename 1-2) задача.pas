Program z2;
    Var s :string;
        z, d: boolean;
        f, kv, kr, i, Pr_f, Pr_kv, Pr_kr:longint;    
  Begin
       Write('Введите строку: ');
       Read(s);
       Pr_f:=100000001; Pr_kv:=100000001; Pr_kr:=100000001; z:=True; d:=True; 
       
       //баланс скобок и расстановка приоритетов 
       For i := 1 to length(s) do
         begin
                                                                             
        if (s[i] = '{') then begin if (i>Pr_kv) or (i>Pr_kr) then z:=False else Pr_f:=i;  
            inc(f);          end;                    
        if (s[i] = '(') then begin if (i>Pr_kv)  then z:=False else Pr_kr:=i; 
            inc(kr);         end;
        if (s[i] = '[') then begin  Pr_kv:=i;
            inc(kv);         end;
        if (s[i] = '}') then begin if (Pr_kr<>100000001) or (Pr_kv<>100000001) then d:=false; Pr_f:=100000001;
            f:=f-1;          end; 
        if (s[i] = ')') then begin if (Pr_f<>100000001) or (Pr_kv<>100000001) then d:=false; Pr_kr:=100000001;
            kr:=kr-1;         end;
        if (s[i] = ']') then begin if (Pr_kr<>100000001) or (Pr_f<>100000001) then d:=false; Pr_kv:=100000001; 
            kv:=kv-1;         end;
         
          end;
        
       //проверка на закрытые и незакрытые скобки
       If (f=0) and (kv=0) and (kr=0)
         then Writeln('Все скобки закрыты;')               
         else Writeln('Есть незакрытые скобки;');  
      if not(z) then Writeln('Нарушен приоритет скобок;')
                else Writeln('Приоритеты скобок не нарушены;');
      if not(d) then Writeln('Есть пересечение скобок;')
                else Writeln('Пересечение скобок не нарушено;')  
end.