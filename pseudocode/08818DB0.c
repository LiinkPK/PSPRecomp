/* Entry 0x08818DB0 | file offset 0x00015D88 | FUN_08818db0 | bytes 152 */

undefined4 FUN_08818db0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x10) == 4) {
    if ((*(ushort *)(*(int *)(param_1 + 0x48) + 10) & 1) != 0) {
      uVar1 = FUN_08899300();
      FUN_088983c8(uVar1,(int)**(short **)(param_1 + 0x48),1);
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_0881559c(*(int *)(param_1 + 0x14));
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

