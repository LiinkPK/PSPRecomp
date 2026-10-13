/* Entry 0x089542E0 | file offset 0x001512B8 | FUN_089542e0 | bytes 572 */

void FUN_089542e0(undefined4 param_1,int param_2,undefined4 param_3,float *param_4)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = *(int *)(param_2 + 0x8c);
  iVar5 = *(int *)(*(int *)(param_2 + 0x90) + 4);
  iVar2 = *(int *)(*(int *)(param_2 + 0x90) + 8);
  iVar6 = iVar4 + (uint)*(ushort *)(iVar2 + (iVar5 + 1) * 2);
  uVar1 = *(ushort *)(iVar2 + iVar5 * 2);
  pfVar7 = (float *)(iVar6 + 0x60);
  param_4[2] = *(float *)(iVar6 + 0x68);
  iVar4 = iVar4 + (uint)uVar1;
  param_4[3] = *pfVar7;
  iVar5 = *(int *)(param_2 + 0x8c);
  iVar2 = (uint)**(ushort **)(*(int *)(param_2 + 0x90) + 8) * 4;
  uVar1 = **(ushort **)(*(int *)(*(int *)(iVar5 + 0x40) + 0x1c) + iVar2);
  bVar3 = false;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      fVar11 = 0.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      goto LAB_0895447c;
    }
LAB_08954470:
    fVar11 = 0.0;
    fVar10 = 0.0;
    fVar9 = 0.0;
  }
  else {
    if (uVar1 < 3) {
      fVar9 = *(float *)(iVar4 + 0x80);
      fVar10 = *(float *)(iVar4 + 0x84);
      fVar11 = *(float *)(iVar4 + 0x88);
    }
    else {
      if (3 < uVar1) goto LAB_08954470;
      iVar2 = *(int *)(*(int *)(iVar5 + 0x4c) + iVar2);
      if (iVar2 == 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = *(float *)(iVar5 + 0x30) - (float)(int)*(short *)(iVar2 + 4);
      }
      fVar9 = *(float *)(iVar4 + 0x80) + *(float *)(iVar4 + 0x90) * fVar11;
      fVar10 = *(float *)(iVar4 + 0x84) + *(float *)(iVar4 + 0x94) * fVar11;
      fVar11 = *(float *)(iVar4 + 0x88) + *(float *)(iVar4 + 0x98) * fVar11;
    }
    if (((fVar9 != 0.0) || (fVar10 != 0.0)) || (fVar11 != 0.0)) {
      bVar3 = true;
    }
  }
LAB_0895447c:
  if (bVar3) {
    fVar8 = (float)FUN_08867eb4(-fVar11,-fVar10);
    param_4[1] = (fVar8 * 180.0) / 3.1415925;
    fVar9 = (float)FUN_08867eb4(fVar9,SQRT(fVar11 * fVar11 + fVar10 * fVar10));
    *param_4 = (fVar9 * 180.0) / 3.1415925;
    fVar9 = *(float *)(iVar6 + 0x68);
  }
  else {
    fVar9 = *(float *)(iVar6 + 0x68);
  }
  *(float *)(iVar6 + 0x68) = fVar9 + *param_4;
  *pfVar7 = *pfVar7 + param_4[1];
  return;
}

