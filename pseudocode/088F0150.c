/* Entry 0x088F0150 | file offset 0x000ED128 | FUN_088f0150 | bytes 580 */

void FUN_088f0150(byte *param_1,char param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ushort *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte local_30 [4];
  
  uVar2 = FUN_088f1258();
  puVar3 = (ushort *)FUN_088b6b0c(uVar2);
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  uVar5 = DAT_09afb89c >> 0x10;
  iVar7 = 0;
  FUN_08935828(param_1,0,1);
  if (param_2 == '\0') {
    iVar6 = 0;
    do {
      if ((*puVar3 != 0) &&
         (iVar7 = (uint)*puVar3 + iVar7, iVar8 = iVar6, (int)((uVar5 & 0x7fff) % 100) < iVar7))
      break;
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
      iVar8 = -1;
    } while (iVar6 < 5);
  }
  else {
    iVar7 = FUN_088f1094();
    if (iVar7 != 0) {
      return;
    }
    iVar8 = 4;
  }
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  local_30[0] = 0;
  local_30[2] = 2;
  local_30[1] = 1;
  local_30[3] = 3;
  iVar7 = 1;
  do {
    iVar6 = iVar7 + 1;
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    bVar4 = local_30[iVar7];
    local_30[iVar7] = local_30[(int)(DAT_09afb89c >> 0x10 & 0x7fffU) % iVar6];
    local_30[(int)(DAT_09afb89c >> 0x10 & 0x7fffU) % iVar6] = bVar4;
    iVar7 = iVar6;
  } while (iVar6 < 4);
  iVar7 = 0;
  if (0 < iVar8) {
    bVar4 = *param_1;
    do {
      bVar1 = local_30[iVar7];
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          bVar4 = bVar4 | 1;
        }
        else {
          bVar4 = bVar4 | 2;
        }
      }
      else if (bVar1 < 3) {
        bVar4 = bVar4 | 4;
      }
      else if (bVar1 < 4) {
        bVar4 = bVar4 | 8;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
    *param_1 = bVar4;
  }
  return;
}

