def fiboncci(n):
    arr = [0, 1]
    if n == 1:
        print('0')
    elif n == 2:
        print('[0, ', '1]')
    else:
        while(len(arr)<n):
            arr.append(0)
        if(n == 0 or n == 1):
            return 1
        else:
            arr[0] = 0
            arr[1] = 1
            for i in range(2, n):
                arr[i] = arr[i - 1] + arr[i - 2]
            print(arr)

fiboncci(10)
