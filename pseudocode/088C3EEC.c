/* Entry 0x088C3EEC | file offset 0x000C0EC4 | FUN_088c3eec | bytes 44 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d7608. Boundary still requires runtime validation. */

bool FUN_088c3eec(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(uint *)(DAT_089d726c + 0xc) & 0x4000) != 0);
  *param_1 = uVar1;
  param_1[1] = 1;
  return uVar1 != 0;
}

