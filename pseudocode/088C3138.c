/* Entry 0x088C3138 | file offset 0x000C0110 | FUN_088c3138 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d755c. Boundary still requires runtime validation. */

bool FUN_088c3138(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = (int)*(short *)(DAT_089d712c + 0x1fdc8);
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= *param_1;
}

