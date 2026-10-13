/* Entry 0x0881F688 | file offset 0x0001C660 | FUN_0881f688 | bytes 132 */

undefined4 FUN_0881f688(short *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < param_1[1]) {
      do {
        FUN_0881fa30(*(int *)(param_1 + 2) + iVar2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x44;
      } while (iVar3 < param_1[1]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

