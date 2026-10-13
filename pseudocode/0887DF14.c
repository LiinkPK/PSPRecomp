/* Entry 0x0887DF14 | file offset 0x0007AEEC | FUN_0887df14 | bytes 224 */

void FUN_0887df14(undefined4 param_1,ushort *param_2,uint param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  bVar3 = 1 < param_3;
  uVar4 = 0;
  uVar6 = 1;
  iVar7 = 0;
  while (bVar3) {
    bVar1 = *(byte *)(iVar7 + param_4);
    iVar8 = iVar7 + 1;
    if (bVar1 == 0) break;
    if (bVar1 < 0x80) {
      *param_2 = (ushort)bVar1;
    }
    else {
      pbVar9 = (byte *)(iVar8 + param_4);
      iVar8 = iVar7 + 2;
      pbVar5 = &DAT_089d6964;
      uVar2 = DAT_089d6968;
      while (uVar2 != 0) {
        if ((*pbVar5 == bVar1) && (pbVar5[1] == *pbVar9)) {
          *param_2 = uVar2;
          goto LAB_0887dfcc;
        }
        uVar2 = *(ushort *)(pbVar5 + 10);
        pbVar5 = pbVar5 + 6;
      }
      *param_2 = 0x3f;
    }
LAB_0887dfcc:
    param_2 = param_2 + 1;
    bVar3 = uVar6 + 1 < param_3;
    uVar4 = uVar6;
    uVar6 = uVar6 + 1;
    iVar7 = iVar8;
  }
  if (uVar4 < param_3) {
    *param_2 = 0;
  }
  return;
}

