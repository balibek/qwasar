def my_is_sort(param_1):
    asc = sorted(param_1)
    desc = sorted(param_1, reverse=True)
    if param_1==asc:
        return True
    elif param_1==desc:
        return True
    else:
        return False

    