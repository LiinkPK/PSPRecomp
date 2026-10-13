/* Entry 0x088C3BD0 | file offset 0x000C0BA8 | FUN_088c3bd0 | bytes 36 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d75cc. Boundary still requires runtime validation. */

bool FUN_088c3bd0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0xfdb8);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

