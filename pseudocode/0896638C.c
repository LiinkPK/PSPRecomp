/* Entry 0x0896638C | file offset 0x00163364 | FUN_0896638c | bytes 504 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc3ec. Boundary still requires runtime validation. */

void FUN_0896638c(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(*(int *)(param_2 + 0x8c) +
                     (uint)*(ushort *)
                            (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                            (*(int *)(*(int *)(param_2 + 0x90) + 4) + 2) * 2) + 0x60);
  param_4 = (int *)*param_4;
  iVar4 = *piVar3;
  if (*(char *)(param_3 + 0x45) == '\0') {
    iVar2 = 0;
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*param_4 + iVar5) = 0x3f800000;
        iVar4 = *piVar3;
        iVar5 = iVar5 + 4;
      } while (iVar2 < iVar4);
    }
    cVar1 = *(char *)(param_3 + 0x46);
  }
  else {
    iVar2 = 0;
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        iVar2 = iVar2 + 1;
        *(float *)(*param_4 + iVar5) =
             1.0 - ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * *(float *)(param_3 + 0x3c);
        iVar4 = *piVar3;
        iVar5 = iVar5 + 4;
      } while (iVar2 < iVar4);
    }
    cVar1 = *(char *)(param_3 + 0x46);
  }
  if (cVar1 == '\0') {
    iVar2 = 0;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_4[1] + iVar4) = 0;
        iVar4 = iVar4 + 4;
      } while (iVar2 < *piVar3);
    }
  }
  else {
    iVar2 = 0;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        iVar2 = iVar2 + 1;
        *(float *)(param_4[1] + iVar4) = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 180.0;
        iVar4 = iVar4 + 4;
      } while (iVar2 < *piVar3);
    }
  }
  return;
}

