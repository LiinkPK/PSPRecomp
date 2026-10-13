/* Entry 0x088C3170 | file offset 0x000C0148 | FUN_088c3170 | bytes 52 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7560. Boundary still requires runtime validation. */

bool FUN_088c3170(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_089d712c + 0x1fdd0);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

