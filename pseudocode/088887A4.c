/* Entry 0x088887A4 | file offset 0x0008577C | FUN_088887a4 | bytes 196 */

void FUN_088887a4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  while ((*(int *)(iVar2 + 0x38) == 0 || (iVar1 = func_0x08b2f9e0(), iVar1 != 0))) {
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    if (1 < iVar3) {
      iVar3 = 0;
      iVar2 = param_1;
      do {
        if (*(int *)(iVar2 + 0x38) != 0) {
          FUN_0882fa10(0,0,*(int *)(iVar2 + 0x38) + 0x130,1,0);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < 2);
      *(undefined4 *)(param_1 + 0x48) = 1;
      return;
    }
  }
  return;
}

