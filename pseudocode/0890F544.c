/* Entry 0x0890F544 | file offset 0x0010C51C | FUN_0890f544 | bytes 292 */

int FUN_0890f544(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_089d83d8;
  iVar2 = FUN_0891705c(0xffffffff);
  do {
    do {
      do {
        param_2 = FUN_089103bc(param_2);
        if (param_2 == 0) {
          return 0;
        }
      } while ((param_3 != '\0') &&
              ((*(uint *)(iVar2 + 0x130 + ((uint)(int)*(short *)(param_2 + 0xc) >> 5) * 4) &
               1 << ((int)*(short *)(param_2 + 0xc) & 0x1fU)) != 0));
      iVar3 = *(int *)(iVar1 + 0x54);
      if (iVar3 == 0) {
        return param_2;
      }
    } while (((-1 < *(char *)(param_2 + 5)) && (*(char *)(param_2 + 5) != *(char *)(iVar3 + 2))) ||
            ((-1 < *(char *)(param_2 + 6) && (*(char *)(param_2 + 6) != *(char *)(iVar3 + 3)))));
    if (*(char *)(param_2 + 7) < '\0') {
      return param_2;
    }
  } while (*(char *)(param_2 + 7) != *(char *)(iVar3 + 4));
  return param_2;
}

