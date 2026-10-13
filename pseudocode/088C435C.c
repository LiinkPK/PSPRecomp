/* Entry 0x088C435C | file offset 0x000C1334 | FUN_088c435c | bytes 52 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7640. Boundary still requires runtime validation. */

bool FUN_088c435c(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = *(int *)(DAT_089d712c + 0x3e0ac);
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= *param_1;
}

