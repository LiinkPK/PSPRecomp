/* Entry 0x0890CBD4 | file offset 0x00109BAC | FUN_0890cbd4 | bytes 308 */

void FUN_0890cbd4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x354)) {
      iVar3 = param_1 + 0x4c;
      do {
        iVar2 = FUN_0890cd08(param_1,param_1 + 0xc,param_1 + 0x1c,iVar3 + 0x2c);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x54;
      } while (iVar4 < *(int *)(param_1 + 0x354));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x358)) {
      iVar3 = param_1 + 0xf4;
      do {
        iVar2 = FUN_0890cd08(param_1,param_1 + 0xc,param_1 + 0x1c,iVar3 + 0x18);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x4c;
      } while (iVar4 < *(int *)(param_1 + 0x358));
    }
  }
  if (!bVar1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  }
  return;
}

