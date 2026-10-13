/* Entry 0x0899EE30 | file offset 0x0019BE08 | FUN_0899ee30 | bytes 512 */

undefined4
FUN_0899ee30(int param_1,uint param_2,int param_3,int param_4,int param_5,undefined2 *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  
  uVar6 = 0;
  if ((((param_1 != 0) && (param_3 - 1U < 0x100)) && (param_4 - 1U < 8)) && (0 < param_5)) {
    iVar8 = param_4 * param_5;
    cVar2 = (&DAT_089d1508)[param_2 & 7];
    iVar9 = *(int *)(param_1 + 0x10);
    iVar7 = cVar2 * param_3 + 7;
    uVar1 = ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1d)) >> 3) + 0xfU & 0xfffffff0;
    iVar3 = (iVar8 * 4 + 0x3f) / 0x10;
    iVar7 = iVar3 * 0x10;
    iVar12 = 0;
    if (param_6 == (undefined2 *)0x0) {
      iVar12 = uVar1 * param_5;
    }
    if ((iVar9 != 0) &&
       (sVar4 = *(short *)(iVar9 + 2) + -1, *(short *)(iVar9 + 2) = sVar4, sVar4 == 0)) {
      FUN_0899b830(iVar9);
    }
    iVar12 = iVar7 + iVar12;
    puVar5 = (undefined2 *)FUN_0899b794(iVar12);
    *(undefined2 **)(param_1 + 0x10) = puVar5;
    uVar6 = 0;
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = 0x30;
      puVar11 = puVar5 + iVar3 * 8;
      if (param_6 != (undefined2 *)0x0) {
        puVar11 = param_6;
      }
      puVar10 = (undefined4 *)(puVar5 + 0x18);
      puVar5[6] = (short)cVar2;
      puVar5[7] = 0x10;
      *(undefined4 *)(puVar5 + 0xc) = 0x30;
      puVar5[0x16] = 3;
      puVar5[2] = (short)param_2;
      puVar5[4] = (short)param_3;
      puVar5[8] = 1;
      *(int *)(puVar5 + 0x10) = iVar12;
      puVar5[0x14] = 2;
      puVar5[0x15] = (short)param_4;
      puVar5[0x17] = (short)param_5;
      puVar5[1] = 1;
      puVar5[3] = 0;
      puVar5[5] = 1;
      puVar5[9] = 2;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      *(int *)(puVar5 + 0xe) = iVar7;
      *(undefined4 *)(puVar5 + 0x12) = 0;
      if (0 < iVar8) {
        do {
          iVar8 = iVar8 + -1;
          *puVar10 = puVar11;
          puVar10 = puVar10 + 1;
          puVar11 = (undefined2 *)((int)puVar11 + uVar1);
        } while (iVar8 != 0);
      }
      FUN_0899bfe0(param_1);
      uVar6 = 1;
    }
  }
  return uVar6;
}

