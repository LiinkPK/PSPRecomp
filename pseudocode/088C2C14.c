/* Entry 0x088C2C14 | file offset 0x000BFBEC | FUN_088c2c14 | bytes 72 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d74f4. Boundary still requires runtime validation. */

bool FUN_088c2c14(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_2 + param_3[1] * 0x30 + 0x11a2c) < *param_3 ^ 1;
  *param_1 = uVar1;
  param_1[1] = 1;
  return uVar1 != 0;
}

