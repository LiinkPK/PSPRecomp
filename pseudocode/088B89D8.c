/* Entry 0x088B89D8 | file offset 0x000B59B0 | FUN_088b89d8 | bytes 560 */

void FUN_088b89d8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int local_3c;
  
  iVar2 = *(int *)(DAT_089d72a8 + 8);
  local_3c = 0;
  if (0 < iVar2) {
    iVar8 = 0;
    do {
      iVar5 = 0;
      iVar7 = DAT_089d72b0 + iVar8;
      iVar6 = (int)*(short *)(iVar7 + 2);
      iVar4 = 0;
      if (0 < iVar6) {
        do {
          psVar3 = (short *)(*(int *)(iVar7 + 4) + iVar4);
          iVar1 = FUN_088b2264(psVar3);
          if ((iVar1 == 1) && (iVar1 = FUN_088b9004(param_1,(int)*psVar3), iVar1 != 0)) {
            if ((*(byte *)(iVar1 + 3) & 0x10) == 0) {
              *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 0x10;
              *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 0x20;
              *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 0x80;
            }
            *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0x5f;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar5 < iVar6);
      }
      local_3c = local_3c + 1;
      iVar8 = iVar8 + 8;
    } while (local_3c < iVar2);
  }
  iVar2 = *(int *)(DAT_089d72a8 + 0xc);
  local_40 = 0;
  if (0 < iVar2) {
    iVar8 = 0;
    do {
      iVar5 = 0;
      iVar7 = DAT_089d72b4 + iVar8;
      iVar6 = *(int *)(iVar7 + 0x10);
      iVar4 = 0;
      if (0 < iVar6) {
        do {
          psVar3 = (short *)(*(int *)(iVar7 + 0x14) + iVar4);
          iVar1 = FUN_088b2264(psVar3);
          if ((iVar1 == 1) && (iVar1 = FUN_088b9004(param_1,(int)*psVar3), iVar1 != 0)) {
            if ((*(byte *)(iVar1 + 3) & 0x10) == 0) {
              *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 0x10;
              *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 0x20;
              *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 0x80;
            }
            *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0x7f;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar5 < iVar6);
      }
      local_40 = local_40 + 1;
      iVar8 = iVar8 + 0x18;
    } while (local_40 < iVar2);
  }
  return;
}

