/* Entry 0x088C3E14 | file offset 0x000C0DEC | FUN_088c3e14 | bytes 48 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d75f4. Boundary still requires runtime validation. */

bool FUN_088c3e14(uint *param_1,undefined4 param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(DAT_089d712c + 0x1df40);
  *param_1 = (uint)bVar1;
  uVar2 = *param_3;
  param_1[1] = uVar2;
  return (int)uVar2 <= (int)(uint)bVar1;
}

