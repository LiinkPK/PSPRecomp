/* Entry 0x088C2E80 | file offset 0x000BFE58 | FUN_088c2e80 | bytes 48 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7530. Boundary still requires runtime validation. */

bool FUN_088c2e80(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x119a8) + *(int *)(param_2 + 0x119ac);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

