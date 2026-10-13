/* Entry 0x0899EB28 | file offset 0x0019BB00 | FUN_0899eb28 | bytes 776 */

undefined4
FUN_0899eb28(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int local_70 [8];
  uint local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  
  piVar8 = local_70;
  uVar4 = 0;
  if ((((param_1 != 0) && (0 < param_4 && 0 < param_5)) && (param_4 < 0x201 && param_5 < 0x201)) &&
     ((param_6 - 1U < 8 && (local_4c = param_6 * param_7, 0 < param_7)))) {
    iVar11 = 0;
    local_48 = (int)(char)(&DAT_089d14f8)[param_2 & 0xf];
    local_50 = local_4c * 4 + 0x3fU & 0xfffffff0;
    local_44 = 0xf;
    local_40 = 7;
    if (param_3 == 0) {
      local_40 = 0;
    }
    if (7 < (int)param_2) {
      local_40 = 3;
      param_3 = 0;
      local_44 = 3;
    }
    if (0 < param_6) {
      uVar10 = ~local_44;
      uVar9 = ~local_40;
      iVar5 = param_4;
      iVar6 = param_5;
      iVar7 = param_6;
      do {
        iVar7 = iVar7 + -1;
        iVar3 = local_48 * iVar5 + 7;
        iVar3 = (((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1d)) >> 3) + local_44 & uVar10) *
                (iVar6 + local_40 & uVar9);
        *piVar8 = iVar3;
        iVar11 = iVar11 + iVar3;
        iVar5 = (iVar5 + 1) / 2;
        iVar6 = (iVar6 + 1) / 2;
        piVar8 = piVar8 + 1;
      } while (iVar7 != 0);
    }
    iVar11 = iVar11 * param_7;
    iVar5 = *(int *)(param_1 + 0xc);
    if (param_8 != 0) {
      iVar11 = 0;
    }
    if ((iVar5 != 0) &&
       (sVar1 = *(short *)(iVar5 + 2) + -1, *(short *)(iVar5 + 2) = sVar1, sVar1 == 0)) {
      FUN_0899b830();
    }
    iVar11 = local_50 + iVar11;
    puVar2 = (undefined2 *)FUN_0899b794(iVar11);
    *(undefined2 **)(param_1 + 0xc) = puVar2;
    uVar4 = 0;
    if (puVar2 != (undefined2 *)0x0) {
      piVar8 = (int *)(puVar2 + 0x18);
      puVar2[7] = (short)local_44 + 1;
      *(undefined4 *)(puVar2 + 0xc) = 0x30;
      iVar6 = 0;
      *puVar2 = 0x30;
      iVar5 = (int)puVar2 + local_50;
      if (param_8 != 0) {
        iVar5 = param_8;
      }
      puVar2[2] = (short)param_2;
      puVar2[6] = (short)local_48;
      puVar2[9] = 2;
      puVar2[0x16] = 3;
      puVar2[3] = (short)param_3;
      puVar2[4] = (short)param_4;
      puVar2[5] = (short)param_5;
      puVar2[8] = (short)local_40 + 1;
      *(int *)(puVar2 + 0x10) = iVar11;
      puVar2[0x14] = 1;
      puVar2[0x17] = (short)param_7;
      puVar2[1] = 1;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      *(uint *)(puVar2 + 0xe) = local_50;
      *(undefined4 *)(puVar2 + 0x12) = 0;
      puVar2[0x15] = (short)param_6;
      if (0 < local_4c) {
        do {
          iVar11 = iVar6 % param_6;
          *piVar8 = iVar5;
          if (param_6 == 0) {
            trap(7);
          }
          iVar6 = iVar6 + 1;
          piVar8 = piVar8 + 1;
          iVar5 = iVar5 + local_70[iVar11];
        } while (iVar6 < local_4c);
      }
      FUN_0899bfe0(param_1);
      uVar4 = 1;
    }
  }
  return uVar4;
}

