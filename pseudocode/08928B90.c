/* Entry 0x08928B90 | file offset 0x00125B68 | FUN_08928b90 | bytes 736 */

void FUN_08928b90(undefined4 *param_1,short *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int local_38 [8];
  
  if (*param_2 == -1) {
    bVar2 = false;
    if (((((param_2[1] == 0) && (bVar2 = false, param_2[2] == 0)) &&
         (bVar2 = false, param_2[3] == 0)) &&
        ((bVar2 = false, (char)param_2[4] == -1 &&
         (bVar2 = false, *(char *)((int)param_2 + 9) == -1)))) &&
       ((bVar2 = false, (char)param_2[6] == -1 &&
        (bVar2 = false, *(char *)((int)param_2 + 0xd) == -1)))) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    uVar5 = FUN_088ad574();
    iVar4 = 0;
    while (iVar1 = FUN_088ad684(iVar4), -1 < iVar1) {
      if ((iVar1 == *param_2) && ((uVar5 & 1) == 0)) {
        *param_1 = 0x8d;
        param_1[1] = 0xffffffff;
        return;
      }
      uVar5 = uVar5 >> 1;
      iVar4 = iVar4 + 1;
    }
    iVar4 = FUN_0889f3e4(DAT_089d6c30,(int)param_2[3]);
    if (iVar4 != 0) {
      iVar1 = 0;
      do {
        if ((*(short *)(iVar4 + 4 + iVar1 * 2) != -1) &&
           (uVar3 = (uint)*(short *)(iVar4 + 4 + iVar1 * 2),
           (*(uint *)(DAT_089d726c + (uVar3 >> 5) * 4) & 1 << (uVar3 & 0x1f)) == 0)) {
          *param_1 = 0x8d;
          param_1[1] = 0xffffffff;
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 4);
    }
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    iVar4 = FUN_089292c0(local_38,8,1,1);
    iVar1 = 0;
    bVar2 = false;
    if (0 < iVar4) {
      do {
        if ((int)param_2[1] == local_38[iVar1]) {
          bVar2 = true;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
    if (bVar2) {
      *param_1 = 0xffffffff;
      param_1[1] = 0xffffffff;
    }
    else {
      *param_1 = 0x8d;
      param_1[1] = 0xffffffff;
    }
  }
  return;
}

