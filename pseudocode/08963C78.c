/* Entry 0x08963C78 | file offset 0x00160C50 | FUN_08963c78 | bytes 352 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc1c4. Boundary still requires runtime validation. */

void FUN_08963c78(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)*param_4;
  if (pfVar1[1] != -NAN) {
    if (*(int *)(param_3 + 0x10) < 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38);
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar4 + *(int *)(param_3 + 0x10) * 4) + 0x10);
      }
    }
    if (iVar4 != -1) {
      fVar7 = *pfVar1 + *(float *)(*(int *)(param_2 + 0x88) + 0x160);
      piVar3 = *(int **)(**(int **)(param_2 + 0x9c) + iVar4 * 4);
      *pfVar1 = fVar7;
      iVar4 = *piVar3;
      iVar5 = *(int *)(iVar4 + 0x1c);
      if (fVar7 < (float)iVar5) {
        fVar2 = pfVar1[1];
      }
      else {
        if ((*(uint *)(iVar4 + 0x10) & 0x80) == 0) {
          pfVar1[1] = -NAN;
          return;
        }
        pfVar1[1] = 0.0;
        fVar7 = (float)((int)fVar7 % (int)(float)iVar5);
        *pfVar1 = fVar7;
        iVar4 = *piVar3;
        fVar2 = pfVar1[1];
      }
      iVar4 = iVar4 + *(int *)(iVar4 + 0x34) + (int)fVar2 * 0xc;
      fVar6 = (float)*(int *)(iVar4 + 8);
      while (fVar6 <= fVar7) {
        fVar2 = (float)((int)fVar2 + 1);
        fVar6 = fVar6 + (float)*(int *)(iVar4 + 0x14);
        iVar4 = iVar4 + 0xc;
      }
      pfVar1[1] = fVar2;
    }
  }
  return;
}

