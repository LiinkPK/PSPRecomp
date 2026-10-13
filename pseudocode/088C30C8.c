/* Entry 0x088C30C8 | file offset 0x000C00A0 | FUN_088c30c8 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7554. Boundary still requires runtime validation. */

bool FUN_088c30c8(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = (int)*(short *)(DAT_089d712c + 0x1fdca);
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= *param_1;
}

