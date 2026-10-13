/* Entry 0x08824784 | file offset 0x0002175C | FUN_08824784 | bytes 436 */

void FUN_08824784(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  iVar3 = FUN_08822d30();
  if ((iVar3 != 0) && ((*(uint *)(*(int *)(param_1 + 0x24) + 0x184) & 2) != 0)) {
    iVar7 = 0;
    iVar3 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
    if (0 < iVar3) {
      iVar8 = 0;
      do {
        iVar9 = *(int *)(param_1 + 0x28) + iVar8;
        bVar1 = *(byte *)(iVar9 + 299);
        if (((((bVar1 & 2) == 0) && ((bVar1 & 4) != 0)) && ((bVar1 & 0x10) == 0)) &&
           (((fVar10 = (float)FUN_089a3bf8(iVar9 + 0xa0), fVar10 == 0.0 &&
             (((int)*(char *)(iVar9 + 0x129) & 0x80U) == 0)) &&
            ((*(byte *)(iVar9 + 299) & 0x20) != 0)))) {
          iVar5 = 0;
          uVar6 = (int)*(char *)(iVar9 + 0x12a) & 0x3f;
          bVar2 = true;
          if (uVar6 != 0) {
            iVar4 = *(int *)(param_1 + 0x2c) + ((int)*(char *)(iVar9 + 0x129) & 0x7fU) * 0x80;
            do {
              if ((*(byte *)(iVar4 + 0x7f) & 8) == 0) {
                bVar2 = false;
                break;
              }
              iVar5 = iVar5 + 1;
              iVar4 = iVar4 + 0x80;
            } while (iVar5 < (int)uVar6);
          }
          if (bVar2) {
            *(byte *)(iVar9 + 299) = *(byte *)(iVar9 + 299) | 2;
          }
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x130;
      } while (iVar7 < iVar3);
    }
  }
  return;
}

