/* Entry 0x088C444C | file offset 0x000C1424 | FUN_088c444c | bytes 40 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7658. Boundary still requires runtime validation. */

bool FUN_088c444c(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x119e4);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

