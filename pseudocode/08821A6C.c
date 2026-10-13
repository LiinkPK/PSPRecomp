/* Entry 0x08821A6C | file offset 0x0001EA44 | FUN_08821a6c | bytes 864 */

void FUN_08821a6c(int param_1)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar2 = FUN_0881baa8();
  local_5c = *(undefined4 *)(iVar2 + 0x90);
  local_50 = *(undefined4 *)(iVar2 + 0xc0);
  local_4c = *(undefined4 *)(iVar2 + 0xc4);
  local_48 = *(undefined4 *)(iVar2 + 200);
  local_60 = 3;
  local_54 = 0;
  pfVar3 = *(float **)(param_1 + 8);
  if (((((*pfVar3 <= *(float *)(iVar2 + 0xb0)) && (*(float *)(iVar2 + 0xa0) <= pfVar3[3])) &&
       (pfVar3[1] <= *(float *)(iVar2 + 0xb4))) &&
      ((*(float *)(iVar2 + 0xa4) <= pfVar3[4] && (pfVar3[2] <= *(float *)(iVar2 + 0xb8))))) &&
     (((*(float *)(iVar2 + 0xa8) <= pfVar3[5] &&
       ((iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x20), iVar6 != 0 &&
        (iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x24), iVar7 != 0)))) &&
      (iVar8 = 0, local_58 = local_5c, local_44 = local_50, local_40 = local_4c, local_3c = local_48
      , '\0' < *(char *)(param_1 + 1))))) {
    do {
      iVar9 = iVar6 + iVar8 * 0x20;
      if ((((*(float *)(iVar9 + 8) <= *(float *)(iVar2 + 0xb0)) &&
           (*(float *)(iVar2 + 0xa0) <= *(float *)(iVar9 + 0x14))) &&
          (*(float *)(iVar9 + 0xc) <= *(float *)(iVar2 + 0xb4))) &&
         (((*(float *)(iVar2 + 0xa4) <= *(float *)(iVar9 + 0x18) &&
           (*(float *)(iVar9 + 0x10) <= *(float *)(iVar2 + 0xb8))) &&
          ((*(float *)(iVar2 + 0xa8) <= *(float *)(iVar9 + 0x1c) &&
           (iVar10 = 0, 0 < *(short *)(iVar9 + 2))))))) {
        sVar1 = *(short *)(iVar9 + 4);
        while ((iVar4 = iVar7 + (sVar1 + iVar10) * 0x24, *(char *)(iVar4 + 0x20) == '\0' ||
               (iVar4 = FUN_08812d48(iVar4 + 4,&local_60), iVar4 == 0))) {
          iVar10 = iVar10 + 1;
          if (*(short *)(iVar9 + 2) <= iVar10) goto LAB_08821d8c;
          sVar1 = *(short *)(iVar9 + 4);
        }
        pbVar5 = (byte *)(*(int *)(param_1 + 0xc) + iVar8 * 3);
        *pbVar5 = *pbVar5 & 0xfc | 1;
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc | 1;
      }
LAB_08821d8c:
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(char *)(param_1 + 1));
  }
  return;
}

