/* Entry 0x088C8B90 | file offset 0x000C5B68 | FUN_088c8b90 | bytes 304 */

undefined4 FUN_088c8b90(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 < 3) {
    uVar3 = 0;
    uVar4 = 0xffffffff;
    if (0 < *(int *)(param_1 + 0xbda8)) {
      do {
        iVar2 = FUN_088c9044(param_1,uVar3);
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = uVar3;
      } while ((*(int *)(iVar2 + 0x18) < param_2) &&
              (uVar3 = uVar3 + 1, uVar4 = 0xffffffff, (int)uVar3 < *(int *)(param_1 + 0xbda8)));
    }
    if (uVar4 < *(uint *)(param_1 + 0xbda8)) {
      iVar2 = FUN_088c8de8(param_1,uVar4,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_088c8f64(param_1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

