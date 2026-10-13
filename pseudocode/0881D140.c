/* Entry 0x0881D140 | file offset 0x0001A118 | FUN_0881d140 | bytes 400 */

undefined4 FUN_0881d140(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar3 = FUN_0881cb80(iVar3), iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x14);
    iVar1 = FUN_0881d624(param_1,iVar3);
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x11c) == 0) {
        *(int *)(param_1 + 0x11c) = iVar3;
        *(int *)(param_1 + 0x118) = iVar3;
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x11c) + 4) = iVar3;
        *(undefined4 *)(iVar3 + 4) = 0;
        *(int *)(param_1 + 0x11c) = iVar3;
      }
    }
    iVar1 = FUN_0881d6ac(param_1,iVar3);
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x124) == 0) {
        *(int *)(param_1 + 0x124) = iVar3;
        *(int *)(param_1 + 0x120) = iVar3;
        *(undefined4 *)(iVar3 + 8) = 0;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x124) + 8) = iVar3;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(int *)(param_1 + 0x124) = iVar3;
      }
    }
    iVar1 = FUN_0881d518(param_1,iVar3);
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 300) == 0) {
        *(int *)(param_1 + 300) = iVar2;
        *(int *)(param_1 + 0x128) = iVar2;
        *(undefined4 *)(iVar2 + 0x5fc) = 0;
      }
      else {
        *(int *)(*(int *)(param_1 + 300) + 0x5fc) = iVar2;
        *(undefined4 *)(iVar2 + 0x5fc) = 0;
        *(int *)(param_1 + 300) = iVar2;
      }
    }
    iVar1 = FUN_0881d55c(param_1,iVar3);
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x134) == 0) {
        *(int *)(param_1 + 0x134) = iVar2;
        *(int *)(param_1 + 0x130) = iVar2;
        *(undefined4 *)(iVar2 + 0x600) = 0;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x134) + 0x600) = iVar2;
        *(undefined4 *)(iVar2 + 0x600) = 0;
        *(int *)(param_1 + 0x134) = iVar2;
      }
    }
    iVar1 = FUN_0881d5a0(param_1,iVar3);
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x13c) == 0) {
        *(int *)(param_1 + 0x13c) = iVar2;
        *(int *)(param_1 + 0x138) = iVar2;
        *(undefined4 *)(iVar2 + 0x604) = 0;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x13c) + 0x604) = iVar2;
        *(undefined4 *)(iVar2 + 0x604) = 0;
        *(int *)(param_1 + 0x13c) = iVar2;
      }
    }
  }
  return 0;
}

