/* Entry 0x088B922C | file offset 0x000B6204 | FUN_088b922c | bytes 412 */

void FUN_088b922c(undefined4 param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < param_4) {
    do {
      iVar3 = FUN_088b9004(param_1,(int)*param_3);
      if (((iVar3 != 0) && ((*(byte *)(iVar3 + 3) & 0x10) == 0)) && (param_3[2] <= param_2)) {
        bVar2 = true;
        iVar7 = 0;
        psVar6 = param_3 + 3;
        do {
          if ((*psVar6 != -1) && (iVar4 = FUN_088b90f8(param_1,(int)*psVar6), iVar4 == 0)) {
            bVar2 = false;
            sVar1 = param_3[1];
            goto LAB_088b930c;
          }
          iVar7 = iVar7 + 1;
          psVar6 = psVar6 + 1;
        } while (iVar7 < 4);
        sVar1 = param_3[1];
LAB_088b930c:
        uVar5 = (uint)sVar1;
        if ((uVar5 != 0xffffffff) &&
           ((*(uint *)(DAT_089d726c + (uVar5 >> 5) * 4) & 1 << (uVar5 & 0x1f)) == 0)) {
          bVar2 = false;
        }
        if ((bVar2) && ((*(byte *)(iVar3 + 3) & 0x10) == 0)) {
          *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) | 0x10;
          *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) | 0x20;
          *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) | 0x80;
        }
      }
      iVar8 = iVar8 + 1;
      param_3 = param_3 + 8;
    } while (iVar8 < param_4);
  }
  return;
}

