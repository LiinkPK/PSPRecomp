/* Entry 0x088C4054 | file offset 0x000C102C | FUN_088c4054 | bytes 68 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7620. Boundary still requires runtime validation. */

bool FUN_088c4054(uint *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((*(uint *)(DAT_089d726c + (*param_3 >> 5) * 4) & 1 << (*param_3 & 0x1f)) != 0);
  *param_1 = uVar1;
  param_1[1] = 1;
  return uVar1 != 0;
}

