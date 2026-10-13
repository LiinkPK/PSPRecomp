/* Entry 0x0892527C | file offset 0x00122254 | FUN_0892527c | bytes 228 */

void FUN_0892527c(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(char *)(param_1[1] + 0xd) == '\x01') {
    if ((*param_1 & 1) == 0) {
      uVar1 = FUN_08899300();
      FUN_088983c8(uVar1,(int)*(char *)(param_1[1] + 0xc),0);
      uVar2 = *param_1;
    }
    else {
      uVar1 = FUN_08899300();
      FUN_088983c8(uVar1,(int)*(char *)(param_1[1] + 0xc),1);
      uVar2 = *param_1;
    }
  }
  else {
    uVar1 = FUN_08899300();
    FUN_088983c8(uVar1,(int)*(char *)(param_1[1] + 0xc),0);
    uVar2 = *param_1;
  }
  if ((uVar2 & 2) != 0) {
    FUN_0892538c(param_1,1);
  }
  return;
}

