/* Entry 0x08966584 | file offset 0x0016355C | FUN_08966584 | bytes 380 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc3f4. Boundary still requires runtime validation. */

void FUN_08966584(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  
  iVar1 = *param_4;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  if (*(int *)(param_3 + 0x2c) < 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38);
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar4 + *(int *)(param_3 + 0x2c) * 4) + 0x10);
    }
  }
  if (iVar4 != -1) {
    piVar3 = *(int **)(**(int **)(param_2 + 0x9c) + iVar4 * 4);
    iVar6 = (int)((float)*(int *)(iVar1 + 8) + *(float *)(*(int *)(param_2 + 0x88) + 0x160));
    *(int *)(iVar1 + 8) = iVar6;
    iVar2 = *piVar3;
    iVar4 = *(int *)(iVar2 + 0x1c);
    fVar7 = (float)iVar6 * *(float *)(param_3 + 0x30);
    if (fVar7 < (float)iVar4) {
      iVar4 = *(int *)(iVar1 + 0xc);
    }
    else {
      if ((*(uint *)(iVar2 + 0x10) & 0x80) == 0) {
        return;
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar4 = (int)(float)((int)fVar7 % (int)(float)iVar4);
      *(int *)(iVar1 + 8) = iVar4;
      fVar7 = (float)iVar4;
      iVar2 = *piVar3;
      iVar4 = *(int *)(iVar1 + 0xc);
    }
    iVar2 = iVar2 + *(int *)(iVar2 + 0x34) + iVar4 * 0xc;
    fVar5 = (float)*(int *)(iVar2 + 8);
    while (fVar5 <= fVar7) {
      iVar4 = iVar4 + 1;
      fVar5 = fVar5 + (float)*(int *)(iVar2 + 0x14);
      iVar2 = iVar2 + 0xc;
    }
    *(int *)(iVar1 + 0xc) = iVar4;
  }
  return;
}

