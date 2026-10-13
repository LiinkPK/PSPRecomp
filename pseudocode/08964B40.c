/* Entry 0x08964B40 | file offset 0x00161B18 | FUN_08964b40 | bytes 420 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc264. Boundary still requires runtime validation. */

void FUN_08964b40(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_3 + 0x48) != '\0') {
    if (*(int *)(param_3 + 0x2c) < 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x30);
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + *(int *)(param_3 + 0x2c) * 4) + 0x10);
      }
    }
    if (iVar3 != -1) {
      fVar5 = *(float *)(param_4 + 0x10) - *(float *)(param_3 + 0x30);
      *(float *)(param_4 + 0x10) = fVar5;
      fVar4 = *(float *)(param_4 + 0x14) - *(float *)(param_3 + 0x34);
      *(float *)(param_4 + 0x14) = fVar4;
      piVar1 = *(int **)(**(int **)(param_2 + 0xa4) + iVar3 * 4);
      piVar2 = (int *)(*piVar1 + 0x1c);
      if ((float)*piVar2 <= fVar5) {
        fVar5 = fVar5 - (float)*piVar2;
        while( true ) {
          *(float *)(param_4 + 0x10) = fVar5;
          piVar2 = (int *)(*piVar1 + 0x1c);
          if (fVar5 < (float)*piVar2) break;
          fVar5 = fVar5 - (float)*piVar2;
        }
      }
      if (fVar5 < 0.0) {
        do {
          fVar5 = fVar5 + (float)*piVar2;
          *(float *)(param_4 + 0x10) = fVar5;
          piVar2 = (int *)(*piVar1 + 0x1c);
        } while (fVar5 < 0.0);
        iVar3 = *(int *)(*piVar1 + 0x20);
      }
      else {
        iVar3 = piVar2[1];
      }
      if ((float)iVar3 <= fVar4) {
        fVar4 = fVar4 - (float)iVar3;
        while( true ) {
          *(float *)(param_4 + 0x14) = fVar4;
          if (fVar4 < (float)*(int *)(*piVar1 + 0x20)) break;
          fVar4 = fVar4 - (float)*(int *)(*piVar1 + 0x20);
        }
      }
      while (fVar4 < 0.0) {
        fVar4 = fVar4 + (float)*(int *)(*piVar1 + 0x20);
        *(float *)(param_4 + 0x14) = fVar4;
      }
    }
  }
  return;
}

