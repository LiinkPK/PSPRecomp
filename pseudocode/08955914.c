/* Entry 0x08955914 | file offset 0x001528EC | FUN_08955914 | bytes 368 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dba5c. Boundary still requires runtime validation. */

void FUN_08955914(undefined4 param_1,int param_2,int param_3,float *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  
  if (*(short *)(param_4 + 1) != -1) {
    *(undefined2 *)(param_4 + 1) = 0;
    if (*(int *)(param_3 + 0xc) < 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38);
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar4 + *(int *)(param_3 + 0xc) * 4) + 0x10);
      }
    }
    if (iVar4 != -1) {
      fVar7 = *param_4 + *(float *)(*(int *)(param_2 + 0x88) + 0x160);
      piVar5 = *(int **)(**(int **)(param_2 + 0x9c) + iVar4 * 4);
      *param_4 = fVar7;
      iVar3 = *piVar5;
      fVar7 = fVar7 * *(float *)(param_3 + 0x10);
      iVar4 = *(int *)(iVar3 + 0x1c);
      if (fVar7 < (float)iVar4) {
        uVar1 = *(ushort *)(param_4 + 1);
      }
      else {
        if ((*(uint *)(iVar3 + 0x10) & 0x80) == 0) {
          *(undefined2 *)(param_4 + 1) = 0xffff;
          return;
        }
        *(undefined2 *)(param_4 + 1) = 0;
        fVar7 = (float)((int)fVar7 % (int)(float)iVar4);
        *param_4 = fVar7;
        iVar3 = *piVar5;
        uVar1 = *(ushort *)(param_4 + 1);
      }
      uVar2 = (uint)uVar1;
      iVar4 = iVar3 + *(int *)(iVar3 + 0x34) + uVar2 * 0xc;
      fVar6 = (float)*(int *)(iVar4 + 8);
      while (fVar6 <= fVar7) {
        uVar2 = uVar2 + 1;
        uVar1 = (ushort)uVar2;
        fVar6 = fVar6 + (float)*(int *)(iVar4 + 0x14);
        iVar4 = iVar4 + 0xc;
      }
      *(ushort *)(param_4 + 1) = uVar1;
    }
  }
  return;
}

