/* Entry 0x088C4404 | file offset 0x000C13DC | FUN_088c4404 | bytes 36 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7650. Boundary still requires runtime validation. */

bool FUN_088c4404(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0xfdc8);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

