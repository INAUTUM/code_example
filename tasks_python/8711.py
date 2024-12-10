string = "0x0B1125595669C25B213AE0C7E72C282D15BCD6A768105DDB0768505D1D582EBCE3D"

try:
    int_value = int(string, 16)
    print(int_value)
except Exception as err:
    print("Не удалось преобразовать строку в число", err)

