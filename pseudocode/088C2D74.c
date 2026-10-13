/* Entry 0x088C2D74 | file offset 0x000BFD4C | FUN_088c2d74 | bytes 52 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7510. Boundary still requires runtime validation. */

bool FUN_088c2d74(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x119cc) / 1000;
  *param_1 = iVar2;
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= iVar2;
}

