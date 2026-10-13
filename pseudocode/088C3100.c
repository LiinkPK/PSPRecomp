/* Entry 0x088C3100 | file offset 0x000C00D8 | FUN_088c3100 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7558. Boundary still requires runtime validation. */

bool FUN_088c3100(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = *(int *)(DAT_089d712c + 0x1fdcc);
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= *param_1;
}

