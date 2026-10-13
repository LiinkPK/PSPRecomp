/* Entry 0x08905CAC | file offset 0x00102C84 | FUN_08905cac | bytes 156 */

int FUN_08905cac(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c4)) {
    iVar2 = param_1 + 4;
    do {
      iVar1 = FUN_08935490(iVar2,param_2,6);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)(param_1 + 0x2c4));
  }
  return -1;
}

