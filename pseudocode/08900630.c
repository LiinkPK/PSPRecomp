/* Entry 0x08900630 | file offset 0x000FD608 | FUN_08900630 | bytes 248 */

void FUN_08900630(int *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  
  iVar3 = DAT_089d72f0;
  iVar4 = 0;
  if ((DAT_089d72f0 != 0) && (iVar5 = 0, 0 < *(int *)(DAT_089d72f0 + 8))) {
    iVar6 = 0;
    do {
      psVar7 = (short *)(DAT_089d72f4 + iVar6);
      uVar1 = psVar7[7];
      if ((((uVar1 & 8) == 0) && ((uVar1 & 4) == 0)) && ((uVar1 & 0x10) == 0)) {
        uVar8 = (uint)psVar7[6];
        if ((uVar8 == 0xffffffff) ||
           (bVar2 = false, (*(uint *)(DAT_089d726c + (uVar8 >> 5) * 4) & 1 << (uVar8 & 0x1f)) != 0))
        {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if (param_2 <= iVar4) {
          return;
        }
        iVar4 = iVar4 + 1;
        *param_1 = (int)*psVar7;
        param_1 = param_1 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x1c;
    } while (iVar5 < *(int *)(iVar3 + 8));
  }
  return;
}

