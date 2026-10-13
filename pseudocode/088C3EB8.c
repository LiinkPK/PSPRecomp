/* Entry 0x088C3EB8 | file offset 0x000C0E90 | FUN_088c3eb8 | bytes 52 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7604. Boundary still requires runtime validation. */

bool FUN_088c3eb8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x119fc) / 100;
  *param_1 = iVar2;
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= iVar2;
}

