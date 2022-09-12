import random
TOTAL_NUM = 0
TOTAL_MINE = 0
TOTAL_FLAG = 0
ROW = 0
COLUMN = 0

def make_list ():
    global TOTAL_MINE, TOTAL_NUM, ROW, COLUMN
    TOTAL_NUM = int(input("6x6 이면 6입력 , 9x9 이면 9 입력"))
    ROW = TOTAL_NUM
    COLUMN = TOTAL_NUM
    TOTAL_LIST = [[0 for i in range(COLUMN)] for j in range(ROW)]
    if TOTAL_NUM == 6:
        TOTAL_MINE = 8
    elif TOTAL_NUM == 9:
        TOTAL_MINE = 15
    return TOTAL_LIST
TOTAL_LIST = make_list()
def print_list():
    for ROW in range(TOTAL_NUM):
        print(TOTAL_LIST[ROW])
def set_mine (TOTAL_LIST):    ############################ 필요 없는 
    first_over_line = random.randint(0,ROW-1) ## mine이 들어갈 행 선택
    if (first_over_line == 0):
        second_over_line = random.randint(1,ROW-1)
    elif (first_over_line == ROW-1):
        second_over_line = random.randint(0,ROW-1)
    else : 
        second_over_line = random.randint(1,2) # 경우의 수 => 둘 중에 하나 랜덤으로 선택
        if second_over_line == 1 : 
            second_over_line = random.randint(0,first_over_line)
        else : 
            second_over_line = random.randint(first_over_line,ROW-1)
    first_column_line = random.randint(0,ROW-1) ## mine이 들어갈 행 선택
    if (first_column_line == 0):
        second_column_line = random.randint(1,ROW-1)
    elif (first_column_line == ROW-1):
        second_column_line = random.randint(0,ROW-1)
    else : 
        second_column_line = random.randint(1,2) # 경우의 수 => 둘 중에 하나 랜덤으로 선택
        if second_column_line == 1 : 
            second_column_line = random.randint(0,first_column_line)
        else : 
            second_column_line = random.randint(first_column_line,ROW-1) 
    TOTAL_LIST[first_over_line][first_column_line] = 1
    TOTAL_LIST[second_over_line][second_column_line] = 1

    print(f"first_column_line = {first_column_line}")
    print(f"first_over_line = {first_over_line}")
    print(f"second_column_line = {second_column_line}")
    print(f"second_over_line = {second_over_line}")

def Set_mine(): ## mine의 위치에 1 표시 
    for i in range(ROW):
        TOTAL_LIST[i][random.randint(0,COLUMN-1)] = 1   ## 행 마다 하나씩의 mine 추가
    count = 0
    while count != (TOTAL_MINE - ROW):  ##  행 마다 추가하고 남은 수의 mine을 배치
        random_row = random.randint(0, ROW-1)
        random_column = random.randint(0, COLUMN-1)
        check = TOTAL_LIST[random_row][random_column]
        if check == 0:
            TOTAL_LIST[random_row][random_column] = 1
            count = count + 1
            print(TOTAL_LIST[random_row][random_column])
            
Set_mine()
print_list()

##### 나머지는 gui만 추가 하면 끝

## 클릭 했을 때 해당 칸 주위에 mine이 몇개 있는지 표시하는 숫자로 바뀌게 만드는 함수 필요
def click_change():


#### 클릭한 칸이 mine일 경우 종료
def end():
