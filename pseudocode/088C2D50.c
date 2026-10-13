/* Entry 0x088C2D50 | file offset 0x000BFD28 | FUN_088c2d50 | bytes 36 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d750c. Boundary still requires runtime validation. */

bool FUN_088c2d50(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x11984);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

