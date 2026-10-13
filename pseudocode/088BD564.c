/* Entry 0x088BD564 | file offset 0x000BA53C | FUN_088bd564 | bytes 220 */

void FUN_088bd564(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[1];
  iVar4 = 0;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = *(int *)(*param_1 + iVar3 + 4);
      if (iVar1 != 0) {
        do {
          iVar2 = *(int *)(iVar1 + 0xc);
          FUN_088bd3c8(iVar1,2);
          iVar1 = iVar2;
        } while (iVar2 != 0);
        iVar2 = param_1[1];
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < iVar2);
  }
  if (param_1[0xf] != 0) {
    FUN_088bd99c();
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
  if (*param_1 != 0) {
    FUN_088bd99c();
    *param_1 = 0;
    param_1[1] = 0;
  }
  iVar2 = 0;
  do {
    param_1[2] = 0;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 0xc);
  return;
}

