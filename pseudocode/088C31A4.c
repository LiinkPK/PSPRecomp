/* Entry 0x088C31A4 | file offset 0x000C017C | FUN_088c31a4 | bytes 72 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7564. Boundary still requires runtime validation. */

bool FUN_088c31a4(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(DAT_089d712c + 0x1fdd4)) {
    iVar2 = *(int *)(DAT_089d712c + 0x1fdd4);
  }
  *param_1 = iVar2;
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= iVar2;
}

