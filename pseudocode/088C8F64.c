/* Entry 0x088C8F64 | file offset 0x000C5F3C | FUN_088c8f64 | bytes 160 */

undefined4 FUN_088c8f64(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 < 3) {
    iVar1 = FUN_088c83fc(param_1);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xbda8);
      *(int *)(param_1 + 0xbda8) = iVar1 + 1;
      iVar1 = FUN_088c9044(param_1,iVar1);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x18) = param_2;
        *(char *)(iVar1 + 0x20) = (char)param_3;
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

