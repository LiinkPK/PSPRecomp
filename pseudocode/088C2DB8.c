/* Entry 0x088C2DB8 | file offset 0x000BFD90 | FUN_088c2db8 | bytes 40 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d751c. Boundary still requires runtime validation. */

bool FUN_088c2db8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x11998);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

