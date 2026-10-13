/* Entry 0x088C88D4 | file offset 0x000C58AC | FUN_088c88d4 | bytes 700 */

undefined4 FUN_088c88d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xbda8)) {
    do {
      iVar1 = FUN_088c9044(param_1,iVar3);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(char *)(iVar1 + 0x20) == '\0') {
        if (*(int *)(iVar1 + 0x18) == param_2) {
          FUN_088c8cc0(param_1,iVar3);
          return 1;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xbda8));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xbda8)) {
    do {
      iVar1 = FUN_088c9044(param_1,iVar3);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(char *)(iVar1 + 0x20) == '\x01') {
        uVar6 = iVar3 + 1;
        uVar4 = 0xffffffff;
        iVar5 = 0;
        if ((int)uVar6 < *(int *)(param_1 + 0xbda8)) {
          do {
            iVar2 = FUN_088c9044(param_1,uVar6);
            if (iVar2 == 0) {
              return 0;
            }
            if (*(char *)(iVar2 + 0x20) == '\x02') {
              iVar5 = *(int *)(iVar2 + 0x18);
              uVar4 = uVar6;
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < *(int *)(param_1 + 0xbda8));
        }
        if (*(uint *)(param_1 + 0xbda8) <= uVar4) break;
        if ((*(int *)(iVar1 + 0x18) <= param_2) && (param_2 <= iVar5)) {
          FUN_088c8cc0(param_1,uVar4);
          FUN_088c8cc0(param_1,iVar3);
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xbda8));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xbda8)) {
    do {
      iVar1 = FUN_088c9044(param_1,iVar3);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(char *)(iVar1 + 0x20) == '\0') {
        FUN_088c8cc0(param_1,iVar3);
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xbda8));
  }
  return 0;
}

