for tc in range(int(input())):
    cx = 0
    co = 0
    n = 0

    l = []
    for i in range(3):
        tictac = input()
        l.append(tictac)
    for i in range(3):
        for j in range(3):
            if l[i][j] == "X":
                cx += 1
            elif l[i][j] == "O":
                co += 1
            else:
                n += 1
    winx = 0
    wino = 0

    if l[0][0] == 'X' and l[0][1] == 'X' and l[0][2] == 'X':
        winx = 1
    if l[1][0] == 'X' and l[1][1] == 'X' and l[1][2] == 'X':
        winx = 1
    if l[2][0] == 'X' and l[2][1] == 'X' and l[2][2] == 'X':
        winx = 1
    if l[0][0] == 'X' and l[1][0] == 'X' and l[2][0] == 'X':
        winx = 1
    if l[0][1] == 'X' and l[1][1] == 'X' and l[2][1] == 'X':
        winx = 1
    if l[0][2] == 'X' and l[1][2] == 'X' and l[2][2] == 'X':
        winx = 1
    if l[0][0] == 'X' and l[1][1] == 'X' and l[2][2] == 'X':
        winx = 1
    if l[0][2] == 'X' and l[1][1] == 'X' and l[2][0] == 'X':
        winx = 1

    if l[0][0] == 'O' and l[0][1] == 'O' and l[0][2] == 'O':
        wino = 1
    if l[1][0] == 'O' and l[1][1] == 'O' and l[1][2] == 'O':
        wino = 1
    if l[2][0] == 'O' and l[2][1] == 'O' and l[2][2] == 'O':
        wino = 1
    if l[0][0] == 'O' and l[1][0] == 'O' and l[2][0] == 'O':
        wino = 1
    if l[0][1] == 'O' and l[1][1] == 'O' and l[2][1] == 'O':
        wino = 1
    if l[0][2] == 'O' and l[1][2] == 'O' and l[2][2] == 'O':
        wino = 1
    if l[0][0] == 'O' and l[1][1] == 'O' and l[2][2] == 'O':
        wino = 1
    if l[0][2] == 'O' and l[1][1] == 'O' and l[2][0] == 'O':
        wino = 1

    if (winx == 1 and wino == 1) or (cx - co < 0) or cx - co > 1:
        print(3)
    elif cx == 0 and co == 0 and n == 9:
        print(2)
    elif winx == 1 and wino == 0 and cx > co:
        print(1)
    elif winx == 0 and wino == 1 and cx == co:
        print(1)
    elif winx == 0 and wino == 0 and n == 0:
        print(1)
    elif winx == 0 and wino == 0 and n > 0:
        print(2)
    else:
        print(3)