/* Entry 0x088C2CB4 | file offset 0x000BFC8C | FUN_088c2cb4 | bytes 48 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d74fc. Boundary still requires runtime validation. */

bool FUN_088c2cb4(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x11958) / 0xe10;
  *param_1 = iVar2;
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= iVar2;
}

