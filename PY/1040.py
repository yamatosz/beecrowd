#-------------------URI-1040-MÉDIA-------------------#
n1, n2, n3, n4 = input().split()
n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
n4 = float(n4)

media  = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;
print(f'Media: {media:.1f}\n')
if media >= 7 : 
    print('Aluno aprovado.\n')
elif 5 <= media <= 6.9:
    print('Aluno em exame.\n')
    exame = float(input())
    print(f'Nota do exame: {exame:.1f}\n')
    media_final = (media+exame)/2
    if media_final > 5 :
        print('Aluno aprovado.\n\n')
        print(f'Media final: {media_final:.1f}\n')
    else:
        print('Aluno reprovado.\n')
        print(f'Media final: {media_final:.1f}\n')
else:
    print('Aluno reprovado.\n')