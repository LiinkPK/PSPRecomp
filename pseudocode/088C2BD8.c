/* Entry 0x088C2BD8 | file offset 0x000BFBB0 | FUN_088c2bd8 | bytes 60 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d74f0. Boundary still requires runtime validation. */

bool FUN_088c2bd8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + *param_3 * 0x30 + 0x11a18);
  *param_1 = iVar1;
  iVar2 = param_3[1];
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

