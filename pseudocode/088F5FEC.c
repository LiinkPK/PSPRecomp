/* Entry 0x088F5FEC | file offset 0x000F2FC4 | FUN_088f5fec | bytes 540 */

void FUN_088f5fec(undefined2 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,int param_7)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined1 auStack_140 [280];
  
  iVar4 = FUN_088cb164(param_2,param_5);
  FUN_088f4e3c(param_1);
  *param_1 = (short)param_5;
  *(undefined1 *)(param_1 + 1) = param_6;
  *(char *)((int)param_1 + 3) = (char)param_7;
  uVar3 = FUN_088cbb3c(iVar4);
  puVar7 = (undefined2 *)(iVar4 + 0x10 + param_7 * 0xc6);
  param_1[3] = uVar3;
  puVar12 = param_1 + 6;
  iVar8 = 0;
  iVar9 = 0x31;
  uVar3 = *puVar7;
  puVar10 = puVar7;
  puVar11 = puVar12;
  do {
    uVar2 = puVar10[1];
    *puVar11 = uVar3;
    iVar8 = iVar8 + 4;
    puVar11[1] = uVar2;
    puVar10 = (undefined2 *)((int)puVar7 + iVar8);
    iVar9 = iVar9 + -1;
    uVar3 = *puVar10;
    puVar11 = (undefined2 *)((int)puVar12 + iVar8);
  } while (iVar9 != 0);
  *puVar11 = uVar3;
  bVar1 = *(byte *)((int)param_1 + 0xd1);
  if (bVar1 == 0) {
    bVar1 = *(byte *)(iVar4 + 1);
  }
  param_1[2] = (ushort)bVar1;
  FUN_088ba25c(puVar12,puVar12,(int)(short)param_1[2]);
  iVar4 = FUN_088c04b4(param_2 + 0x124a4,param_5);
  if (iVar4 != 0) {
    FUN_088c0274(iVar4,auStack_140);
    uVar3 = FUN_088c06b4(auStack_140);
    param_1[4] = uVar3;
  }
  iVar4 = 0;
  puVar10 = param_1 + 0x69;
  do {
    uVar5 = FUN_088b7b18(puVar12,iVar4);
    iVar8 = FUN_088c7f78(uVar5);
    if (iVar8 != 0) {
      iVar8 = FUN_088c75b4(param_3,uVar5 & 0x1f);
      if (iVar8 != 0) {
        uVar6 = FUN_088c7f60(0,param_4,uVar5 & 0x1f);
        FUN_088b765c(puVar12,iVar4,uVar6);
        iVar13 = 0;
        iVar9 = 0x20;
        do {
          uVar3 = ((undefined2 *)(iVar8 + iVar13))[1];
          *(undefined2 *)((int)puVar10 + iVar13) = *(undefined2 *)(iVar8 + iVar13);
          ((undefined2 *)((int)puVar10 + iVar13))[1] = uVar3;
          iVar9 = iVar9 + -1;
          iVar13 = iVar13 + 4;
        } while (iVar9 != 0);
        param_1[0x6b] = 0;
      }
    }
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 0x40;
    puVar10 = puVar10 + 0x40;
  } while (iVar4 < 4);
  return;
}

