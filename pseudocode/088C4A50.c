/* Entry 0x088C4A50 | file offset 0x000C1A28 | FUN_088c4a50 | bytes 304 */

byte FUN_088c4a50(int *param_1,undefined4 param_2,uint *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = *param_3;
  *param_1 = 0;
  param_1[1] = 1;
  iVar6 = (uVar5 >> 5) * 4;
  uVar5 = 1 << (uVar5 & 0x1f);
  if ((*(uint *)(DAT_089d726c + iVar6) & uVar5) == 0) {
    bVar1 = true;
    iVar7 = 0;
    do {
      uVar2 = FUN_088cb164(param_2,(int)(char)(&DAT_089cbb7a)[iVar7]);
      iVar3 = FUN_088cbb60(uVar2);
      if (iVar3 != 0) {
        bVar1 = false;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x1f);
    if (bVar1) {
      *param_1 = 1;
      puVar4 = (uint *)(DAT_089d726c + iVar6);
      *puVar4 = *puVar4 | uVar5;
    }
    bVar1 = *param_1 < param_1[1];
  }
  else {
    *param_1 = 1;
    bVar1 = 1 < param_1[1];
  }
  return bVar1 ^ 1;
}

